#define START_LEVEL 0
#define MAX_TIME_LEFT 600
#define NUM_LEVELS 5

typedef struct GameLevel
{
    unsigned char name[22];
};

// define screen layouts
uint8_t *levelScreens;

uint8_t levelScreenLayout1[5] = {
    SCREEN_NUM_LAUNDRETTE,
    SCREEN_NUM_BRICK, SCREEN_NUM_VICTORIAN, SCREEN_NUM_RURAL,
    SCREEN_NUM_BUCK_HOUSE};

uint8_t levelScreenLayout2[5] = {
    SCREEN_NUM_LAUNDRETTE,
    SCREEN_NUM_FACTORY, SCREEN_NUM_DEAD_END, SCREEN_NUM_POSH,
    SCREEN_NUM_BUCK_HOUSE};

uint8_t levelScreenLayout3[5] = {
    SCREEN_NUM_LAUNDRETTE,
    SCREEN_NUM_CASTLE, SCREEN_NUM_CASTLE_CORNER, SCREEN_NUM_CORNER_SHOP,
    SCREEN_NUM_BUCK_HOUSE};

uint8_t levelScreenLayout4[5] = {
    SCREEN_NUM_LAUNDRETTE,
    SCREEN_NUM_HIGH_STREET, SCREEN_NUM_TOWN_SQUARE, SCREEN_NUM_RURAL_2,
    SCREEN_NUM_BUCK_HOUSE
    };

uint8_t levelScreenLayout5[10] = {
    SCREEN_NUM_LAUNDRETTE,
    SCREEN_NUM_BRICK, SCREEN_NUM_VICTORIAN, SCREEN_NUM_RURAL, SCREEN_NUM_FACTORY, SCREEN_NUM_CASTLE,
    SCREEN_NUM_POSH, SCREEN_NUM_DEAD_END, SCREEN_NUM_HIGH_STREET,
    SCREEN_NUM_BUCK_HOUSE};

uint8_t *levelScreenLayouts[NUM_LEVELS] = {
    levelScreenLayout1, levelScreenLayout2,
    levelScreenLayout3, levelScreenLayout4,
    levelScreenLayout5};

uint8_t currentLevelNum;
uint8_t levelNumEnemies;
uint8_t chimneysSwept;
uint8_t levelScreensCompleted;

struct GameLevel levels[NUM_LEVELS];

void initialiseLevels(void);
void startNewLevel(uint8_t num);
void levelComplete(void);
