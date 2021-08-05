#include <vector>
#include <iostream>

void printVector(std::vector<int>& someVector){
    for(int i = 0; i < someVector.size(); ++i){
        std::cout << someVector[i] << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> myVector1 = {1, 2, 3, 4, 5};
    std::vector<int> myVector2 = {2, 1, 4, 3, 5};
    std::cout << "Here are the vectors:\n";
    printVector(myVector1);
    printVector(myVector2);
    if(myVector1 == myVector2 
