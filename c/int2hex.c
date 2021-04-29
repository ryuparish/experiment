#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num; 
    int i;
    /* Scanf needs a memory address so it knows where to write to rather than just the
     * integer value (this works with just the variable for strings, since a string is 
     * just a pointer to a series of other bytes) */
    scanf("%d",&num);
    printf("Here is the number: %d\n", num);
    char* string = malloc(100);
    char* orig = string;
    while(num > 0) {
       if (num % 16 < 10) {
          string[i] = (num % 16) + '0';
          /* We have to use this method of incrementing the length of the string or
           * else we cannot print it out backwards in the later step */
          i++;
       }
       else {
          string[i] = (num % 16) + '7';
          i++;
       }
       num /= 16;
    }
    /* You now have a backwards representation of the hexadecimal number so you need to
     * print it out backwards after printing out whatever else you need to make it
     * look nice */
    printf("And here is the hexadecimal: 0x");
    for(int j = i -1; j >= 0; j--) {
       printf("%c", orig[j]); 
    }
    printf("\n");
    free(orig);
    return 0;
}
