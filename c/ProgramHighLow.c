#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int max;
    int higher_bound;
    int lower_bound = 0;
    int guess;
    int response;

    printf("Please enter the maximum of the guesses: ");
    scanf("%d", &max);
    printf("\n");
    higher_bound = max;

    while(response != 2) {
        guess = ((abs((higher_bound - lower_bound)/2) + lower_bound));
        printf("Is this your number? : %d\n", guess);
        scanf("%d", &response);
        
        // Too High
        if(response == 0){
            higher_bound = guess;
            continue;
        }

        // Too Low
        else if (response == 1) {
            lower_bound = guess; 
            continue;
        }

    }
    printf("I got it right yes! Fuck my ass! \n");
    return 0;
}
            

