#include <z80.h>
#include <stdlib.h>
#include <stdio.h>
#include <arch/zx.h>
#include <arch/zx/sp1.h>
#include <input.h>
#include <sound.h> // for bit_beepfx()
#include <string.h>
#include <stdlib.h>
#include <intrinsic.h>
#include <input.h>

#include "utilities.h"
#include "controls.h"
#include "enemy.h"
#include "player.h"
#include "screen.h"
#include "tile.h"
#include "main-menu.h"
#include "game-over.h"
#include "level.h"

#define MODE_PLAYING 0
#define MODE_PAUSED 1
#define MODE_GAME_OVER 2
#define MODE_MAIN_MENU 3

#define GRAVITY 1
#define POWERBAR_LENGTH 15
#define BRUSH_FRAME_LENGTH 32

// scoring
#define SCORE_SCREEN_COMPLETED 100
#define SCORE_CHIMNEY_SWEPT 40
#define SCORE_LEVEL_COMPLETED 1000
#define SCORE_GAME_COMPLETED 5000
#define SCORE_ENEMY_SHOT 1
#define SCORE_TIME_BONUS_MULTIPLIER 2

#define true 1
#define false 0
#define TRUE 1
#define FALSE 0

uint8_t mode;

// useful utility variables
int16_t i, n, t, count;
int16_t x, y, col, row;
unsigned char *ptr;


// font
extern unsigned char fontGraphics[];

// title
// extern unsigned char titleSprite[];
extern unsigned char menuTitleTilemap[];

struct sp1_ss *spTitle;
//status bar
extern unsigned char statusBarTilemap[];

// brush animation
extern unsigned char brushSprite[];
struct sp1_ss *brushSp;

// joystick/keys
JOYFUNC joy;
udk_t joy_keys = { IN_KEY_SCANCODE_SPACE, IN_KEY_SCANCODE_p, IN_KEY_SCANCODE_o, IN_KEY_SCANCODE_a, IN_KEY_SCANCODE_q };
uint16_t in;

uint16_t score;
uint16_t highScore;

int16_t timeLeft;

unsigned char strNumber[6];

// functions
void startNewGame(void);
void update(void);
void drawInterface(void);
void drawScore(void);
void drawTimeLeft(void);
void drawNumLives(void);
void moveEverythingOffScreen(void);
void loadFont(void);
void smudgeUsesLaundrette(void);
uint8_t checkChimney(uint8_t testrow, uint8_t testcol);
uint8_t sweepChimney(uint8_t testrow, uint8_t testcol);
