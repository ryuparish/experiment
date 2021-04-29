#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* string = malloc(100);
    char* p = string;
    scanf("%s", string);
    int num= 0;
    while(*string != '\0') {
       int temp = *string - '0';
       num = num * 10 + temp;
       string++;
    }
    printf("%d\n", num);
    free(p);
    return 0;
}
