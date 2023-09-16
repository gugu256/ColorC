#include <stdio.h>
#include "colorc.h"

int main() {
    printf("%sBlack text%s\n", FORE_BLACK, RESET_ALL);
    printf("%sRed text%s\n", FORE_RED, RESET_ALL);
    printf("%sGreen text%s\n", FORE_GREEN, RESET_ALL);
    printf("%sYellow text%s\n", FORE_YELLOW, RESET_ALL);
    printf("%sBlue text%s\n", FORE_BLUE, RESET_ALL);
    printf("%sMagenta text%s\n", FORE_MAGENTA, RESET_ALL);
    printf("%sCyan text%s\n", FORE_CYAN, RESET_ALL);  
    printf("%sWhite text%s\n\n", FORE_WHITE, RESET_ALL);

    printf("%sBlack background%s\n", BACK_BLACK, RESET_ALL);
    printf("%sRed background%s\n", BACK_RED, RESET_ALL);
    printf("%sGreen background%s\n", BACK_GREEN, RESET_ALL);
    printf("%sYellow background%s\n", BACK_YELLOW, RESET_ALL);
    printf("%sBlue background%s\n", BACK_BLUE, RESET_ALL);
    printf("%sMagenta background%s\n", BACK_MAGENTA, RESET_ALL);
    printf("%sCyan background%s\n", BACK_CYAN, RESET_ALL);  
    printf("%sWhite background%s\n\n", BACK_WHITE, RESET_ALL);

    printf("%s %sYou can also get crazy with it%s%s%s!!%s\n", BACK_GREEN, FORE_RED, RESET_ALL, BACK_BLUE, FORE_YELLOW, RESET_ALL);
    return 0;
}