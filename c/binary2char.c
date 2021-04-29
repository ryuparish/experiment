#include <stdio.h>
#include <stdlib.h>
int main(void) {
    /* The binary string is split into groups of 4 and then casted as a long, since longs have 32 bits and hexadecimal also has 32 bits. Such as 0xfa439503 in ASCII*/
    char* binary = "00110001";
    char c = strtol(binary, 0, 2);
    printf("This is the binary: %s and this is the ASCII value: %c", binary, c);
    return 0;
}
