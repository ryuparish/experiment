#include <stdio.h>
#include <stdlib.h>

int* main() {
  int a[3] = {1, 2, 3};
  int b[3] = {4, 1, 5};

  int* result = malloc(3 * sizeof(int));

  for (int x = 0; x<3; x++){
      if (a[x] > b[x]){
          *result = *result + 1; 
      }
      else if (a[x] < b[x]){
          *(result + 1) = *(result + 1) +1; 
      }
      else {
          continue; 
      }
  }
  printf("%d", result[0]);
  return result;
}
