#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* string = malloc(100);
    scanf("%s", string);
    char hexa = strtol(string, 0, 2);
    printf("Here is the binary: %s\nAnd here is the Hex: %#02x\n", string, hexa);
    return 0;
}
