#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int max;
    int guess = 0;
    printf("What is the maximum guess? : ");
    scanf("%d", &max);
    // Creating a random number from a range of 1 to max //
    // Typically, the equation would be (rand() % (h - l + 1)) + l
    // The reason for the l in the first part of the equation is 
    // so that the value doesn't overflow when we offset it by l.
    // The reason for the + 1 is so that the largest possible number is also included. The reason for the + l is for making sure there is a bottom limit, otherwise it would only be 0 as a bottom limit.
    srand(time(0));
    int randguess = (rand() % (max)) + 1;
    while (guess != max){
        printf("What is your guess? : ");
        scanf("%d", &guess);
        // Checking is guess is high, low, or on the spot //
        if (guess < randguess) {
            printf("That guess is too low. Try again.\n");
            continue;
        }
        else if (guess > randguess) {
            printf("That guess is too high. Try again.\n");
            continue;
        }
        else {
            printf("You got it right! Congratulations.\n");
            break;
        }
    }
    return 0;
}
