#include <stdio.h>
#include "colorc.h"

int main() {
    printf("%sREDTEXT%s\n", FORE_RED, RESET_ALL);
    printf("%sBLUEGREEN%s\n", FORE_BLUE, RESET_ALL);
    
    return 0;
}