#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
  int offset[128];
  memset(offset, 0xff, sizeof(offset));
  char* string = "Something is written here";
  printf("%d, because 0xff is equal to 1111111 or -1", offset[*string]);
  return 0;
}
