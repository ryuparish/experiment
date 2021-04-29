#include <stdio.h>
#include <stdlib.h>

int main() {
  int* array = malloc(3 * sizeof(int));
  *(array) = 1;
  *(array + 1) = 2;
  array[2] = 3;
  printf("%d", *array + 1);
  return 0;
}

