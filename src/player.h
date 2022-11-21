#define PLAYER_STATE_WALKING 0
#define PLAYER_STATE_JETPACK 1
#define PLAYER_STATE_CYCLING 2
#define PLAYER_STATE_SWITCH_Y 128
#define PLAYER_START_X 120
#define PLAYER_START_Y 140
#define PLAYER_SPEEDX 3
#define PLAYER_SPEEDY 2
#define PLAYER_COLS 2
#define PLAYER_ROWS 3
#define PLAYER_POWER_MAX 150
#define PENALTY_JETPACK_POWER_USAGE 8
#define PENALTY_CRASH_JETPACK 4
#define PENALTY_TOUCH_ENEMY 6

#define START_NUM_LIVES 3

#define PLAYER_FRAME_LENGTH 128
#define PLAYER_FRAME_STANDING_L 0
#define PLAYER_FRAME_WALKING_L 1
#define PLAYER_FRAME_STANDING_R 5
#define PLAYER_FRAME_WALKING_R 6
#define PLAYER_FRAME_JETPACK_L 10
#define PLAYER_FRAME_JETPACK_R 11
#define PLAYER_FRAME_CYCLING_L 0
#define PLAYER_FRAME_CYCLING_R 6

// brings the built binaries into C
extern unsigned char playerSprite[];
// extern unsigned char playerBikeSprite[];

// player character
typedef struct Playercharacter {
    struct sp1_ss *sp;
    // struct sp1_ss *spBike;
    int16_t x;
    int16_t y;
    int8_t col;
    int8_t row;
    // uint16_t offset;
    signed char facing;
    signed char deltax;
    signed char deltay;
    int state;
};

int8_t numLives = START_NUM_LIVES;

struct Playercharacter player;
int16_t playerPower;
unsigned char playerEdgeProps[(3*2)+(4*2)];

// player functions
void initialisePlayer(void);
void resetPlayer(void);
void updatePlayer(void);
void updatePlayerWalking(void);
void updatePlayerJetpack(void);
void playerMoveUp(void);
void playerMoveDown(void);
void playerMoveHorizontal(int8_t delta);
void playerNoMoveY(void);
void playerChangeStateJetpack(void);
void playerChangeStateWalking(void);
void playerChangeFrame(uint8_t offset);
void playerChangeFrameNext(uint8_t framefirst, uint8_t framelast);
void drawPlayer(void);
