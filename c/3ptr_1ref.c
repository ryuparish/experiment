#include <stdio.h>
#include <stdlib.h>

int main() {
  int* p = NULL;
  int* ap = NULL;
  p = malloc(sizeof(int));
  ap = malloc(sizeof(int));

  printf("The address of p is: %x\n", p);
  printf("The value of p is: %d\n", *p);
  printf("The address of ap is: %x\n", ap);
  printf("The value of ap is: %d\n", *ap);


  // Printing out what we are doing with the pointers and the values
  printf("\nSetting x to 10, p = \&x, and ap = \&x\n\n");

  int x = 10;
  p = &x;
  ap = &x;

  printf("The address of p is: %x\n", p);
  printf("The value of p is: %d\n", *p);
  printf("The address of ap is: %x\n", ap);
  printf("The value of ap is: %d\n", *ap);
  printf("The address of x is: %x\n", &x);
  printf("The value of x is: %d\n", x);
  
  return 0;
}



