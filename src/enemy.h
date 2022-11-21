// set default number of enemies

#define NUM_ENEMIES 8
#define NUM_ENEMY_TYPES 7
#define START_ENEMIES 4

// enemy movement patterns
#define MOVEMENT_LEFT_RIGHT 0
#define MOVEMENT_REBOUND 1
#define MOVEMENT_HOMING 2
#define MOVEMENT_STATIC 3

#define ENEMY_BUBBLE 0
#define ENEMY_VAN 1
#define ENEMY_FACE1 2
#define ENEMY_CLOUD 3
#define ENEMY_SAUCER 4
#define ENEMY_WASP 5
#define ENEMY_BALL 6
#define ENEMY_FACE2 7

#define WASP_FRAME_LENGTH 96

struct sp1_ss *spSaucer;

uint8_t levelEnemies[NUM_ENEMIES] = { 
    ENEMY_BUBBLE, ENEMY_CLOUD, ENEMY_FACE1, ENEMY_VAN,
    ENEMY_BALL, ENEMY_SAUCER, ENEMY_FACE2, ENEMY_BUBBLE
};

// 13 bytes + sprite
typedef struct Enemycharacter {
    struct sp1_ss *sp;
    int16_t x;
    int16_t y;
    signed char deltax;
    signed char deltay;
    uint8_t type;
    uint8_t speed;
    uint8_t flying;
    int8_t lifeTime;
    int8_t spawnTime;
    uint8_t movement; 
    // unsigned char ghost; // can go through solid objects
    // uint8_t startval;
    // uint8_t endval;
};

// number of enemies on screen
// uint8_t  v;

// enemy sprites
extern unsigned char saucerSprite[];
extern unsigned char vanSprite[];
extern unsigned char cloudSprite[];
extern unsigned char bubbleSprite[];
extern unsigned char ballSprite[];
extern unsigned char faceSprite[];
// extern unsigned char waspSprite[];
extern unsigned char face2Sprite[];
extern unsigned char ghostSprite[];

struct Enemycharacter enemies[NUM_ENEMIES];

void initialiseEnemies(void);
void initialiseEnemy(uint8_t num, uint8_t enemyType);
void updateEnemies(void);
void spawnEnemies(void);
void spawnEnemy(uint8_t num);
void spawnEnemyStatic(uint8_t num);
void spawnEnemyRebound(uint8_t num);
void spawnEnemyRandomX(uint8_t num);
void spawnEnemyLeftRight(uint8_t num);
void doMovementLeftRight(uint8_t num);
void doMovementHoming(uint8_t num);
void doMovementStatic(uint8_t num);
void doMovementRebound(uint8_t num);
void removeEnemy(uint8_t num);
void checkCollision(uint8_t num);
void setEnemyColour(uint8_t num);