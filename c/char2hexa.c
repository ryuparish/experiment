#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* string = "52";
    char* orig = string;
    char list[strlen(string)];
    for(int i = 0; i <= strlen(string); i++) {
        char currletter = *string;
        list[i] = currletter;
        string++;
    }
    printf("This is the string: %s\nAnd this is the ASCII value: %#02x%02x\n", orig, list[0], list[1]);
    return 0;
}
