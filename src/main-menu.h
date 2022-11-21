#define TITLE_X 10
#define TITLE_Y 1
#define TITLE_LEN 36

char* menuItems[3] = {
    " 1.KEYBOARD ", 
    " 2.KEMPSTON ",
    " 3.SINCLAIR "
};

uint8_t menuInk[3] = {
    INK_MAGENTA, 
    INK_CYAN, 
    INK_RED
};

JOYFUNC controlOptions [3] = {
    (JOYFUNC)in_stick_keyboard,
    (JOYFUNC)in_stick_kempston,
    (JOYFUNC)in_stick_sinclair1
};

extern unsigned char menuTitleTilemap[];

void mainMenu(void);
void showControls(void);
void selectControls(uint8_t num);
