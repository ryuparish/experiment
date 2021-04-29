/* This program is for the proof that printing 0xff is equivalent to -1
 * Indexing into an index that is over the length of the string will return 0(equal to NULL)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
  char* offset = "SSSSSSSSSSSSS";
  char* string = "Something is written here";
  printf("%d, because 0xff is equal to 1111111 or -1", offset[*string]);
  return 0;
}
