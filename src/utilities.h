#define EDGE_HORIZONTAL 0
#define EDGE_VERTICAL 1

void printString(uint8_t y, uint8_t x, uint8_t attr, char *chars);
struct sp1_ss *getNewUnmaskedSprite(uint8_t *sprite, uint8_t spCols, uint8_t spRows);
struct sp1_ss *getNewMaskedSprite(uint8_t *sprite, uint8_t spCols, uint8_t spRows);
void initialiseColour(unsigned int count, struct sp1_cs *c);
uint8_t spriteTestEdge(uint8_t testcol, uint8_t testrow, uint8_t length, uint8_t edge);
void moveSpriteOffScreen(struct sp1_ss *sp);
void changeFrame(struct sp1_ss *sp, uint8_t framelength, uint8_t frame);
void changeFrameNext(struct sp1_ss *sp, uint8_t framelength, uint8_t framefirst, uint8_t framelast);
void waitForFireButton(void);
void printBigString(uint8_t row, uint8_t col, uint8_t colour, char *chars, uint8_t tileNum);
void printBigLetter(uint8_t row, uint8_t col, uint8_t colour, char ch, uint8_t tileNum);
void printTile(uint8_t row, uint8_t col, uint8_t num);
void clearScreen(void);
void addTilemap(uint8_t index, uint8_t row, uint8_t col);
void addCompressedTilemap(uint8_t index, uint8_t row, uint8_t col);

// void colourRectangle(uint8_t colour, uint8_t row, uint8_t col, uint8_t height, uint8_t width);
// void drawTilemap(uint8_t index, uint8_t row, uint8_t col);
// void showSpriteArea(struct sp1_ss *sp, sp, int8_t x, int8_t y);
// void plot(unsigned char y, unsigned char x);
// void line(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1);
