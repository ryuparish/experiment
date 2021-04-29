#include <stdio.h>
#include <stdlib.h>

int main() {
  int* p = NULL;
  int* ap = NULL;
  p = malloc(sizeof(int));
  ap = malloc(sizeof(int));

  printf("The address of p is: %x\n", p);
  printf("The value of p is: %d\n", *p);
  printf("The address of p is: %x\n", ap);
  printf("The value of ap is: %d\n", *ap);

  int x = 10;
  *p = x;
  *ap = x;

  printf("The address of p is: %x\n", p);
  printf("The value of p is: %d\n", *p);
  printf("The address of ap is: %x\n", ap);
  printf("The value of ap is: %d\n", *ap);
  
  return 0;
}



