#include <stdio.h>

int main()
{
    int a[3], b[3];
    printf("Enter the first 3 values:");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    printf("Enter the second 3 values:");
    scanf("%d %d %d", &b[0], &b[1], &b[2]);
    printf("%d  %d \n", a, b);
    return 0;
}
