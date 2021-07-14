#include <iostream>

int main(){
    int myNums[] = {1, 2, 3, 4, 5};
    int a = 0;
    std::cout << "Here is the list of integers\n";
    for(int i = 0; i < sizeof(myNums)/sizeof(myNums[0]); ++i){
        std::cout << myNums[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Here is the number that is returned with ++a: ";
    std::cout << myNums[++a] << "\n";
    a--;
    std::cout << "Here is the number that is returned with a++: ";
    std::cout << myNums[a++] << "\n";
    return 0;
}
