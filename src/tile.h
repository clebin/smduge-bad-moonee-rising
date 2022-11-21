#define TILE_HI_LABEL 175
#define TILE_CLEBIN_GAMES 186
#define TILE_BARRIER 64
#define TILE_CONE 177
#define TILE_CHIMNEY_DIRTY 25
#define TILE_CHIMNEY_CLEAN 26

#define TILE_STAR_WHITE 48
#define TILE_STAR_YELLOW 49
#define TILE_STAR_CYAN 50

uint8_t getTileNumForRowCol(uint8_t row, uint8_t col);
uint8_t isTileSolid(int col, int row);
uint8_t getColForX(uint16_t x);
uint8_t getRowForY(uint16_t x);

// unsigned char getTileProperties(uint8_t col, uint8_t row);
// uint8_t isTilePlatform(uint8_t col, uint8_t row);
// uint8_t isTileLethal(uint8_t col, uint8_t row);
// uint8_t isTileCustom1(uint8_t col, uint8_t row);
