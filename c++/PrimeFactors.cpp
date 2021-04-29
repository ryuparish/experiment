#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int main() {
    int factee;
    // Convention i = outer loop global main variable, j = inner loop main variable, k = the last prime in case there is a duplicate (no duplicates in this version), l is the original number that will get factored down
    std::cout << "Give me a number and I shall give you its prime factors: ";
    std::cin >> factee;
    int orig = factee;
    
    /* Checking for any factors of two if it is an even number */
    while (factee % 2 == 0) {
        factee /= 2;
        std::cout << 2 << " is a factor of " << orig << "\n";
    }

    /* Checking for any odd factors greater than 3. There would be no duplicates since a duplicate such as the number 3 (3 ,3) would be a multiple of 2. */
    for (int i = 3; i <= factee/2; i = i + 2) {
        if(factee % i == 0){
            std::cout << i << " is a factor of " << orig << "\n";
            factee /= i;
        }
    }

    if (factee > 2) {
        std::cout << factee << " is a factor of " << orig << "\n";
    }
}
