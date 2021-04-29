#include <stdio.h>
#include <stdlib.h>
int main(void) {
    /* */
    char* string = "52";
    char c = strtol(string, 0, 10);
    printf("This is the binary: %s and this is the ASCII value: 0x%x\n", string, c);
    return 0;
}
