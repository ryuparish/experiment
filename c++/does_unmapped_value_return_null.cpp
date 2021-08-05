#include <iostream>
#include <map>

int main(){
    std::map<char, int> char_map;
    if(char_map['b'] == NULL){
        std::cout << "It returns null\n";
    }
    std::cout << "Here is the output after indexing again with the same input: " << char_map['b'] << "\n";
    return 0;
}
