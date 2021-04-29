#include <iostream>
#include <vector>
#include <cstdlib>
using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProductFast(const vector<int> &numbers) {
    int maxindex1 = -1;
    int maxindex2 = -1;
    /* Finding the first max number */
    for (int i = 0; i < numbers.size(); ++i) {
       if (numbers[i] > numbers[maxindex1])
           maxindex1 = i;
    }

    /* Finding the second max number */
    for (int i = 0; i < numbers.size(); ++i) {
       if ((numbers[i] > numbers[maxindex2]) && (maxindex1 != i))
           maxindex2 = i;
    }
    return ((long long)numbers[maxindex1] * numbers[maxindex2]);
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    long long product = MaxPairwiseProductFast(numbers);
    cout << product << "\n";
    return 0;
}
