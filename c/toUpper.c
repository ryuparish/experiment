#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char toUpper(char c) {
    return (c & 0xdf);
}

char toLower(char c) {
    return (c | 0x20);
}

int main() {
    char* p = malloc(100);
    scanf("%s", p);
    char* worker = p;
    while(*worker != '\0') {
        *worker = toUpper(*worker);
        worker++;
    }
    printf("Upper: %s\n", p);
    worker = p;
    while(*worker != '\0') {
        *worker = toLower(*worker);
        worker++;
    }
    printf("Lower: %s\n", p);
    return 0;
}
