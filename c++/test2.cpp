#include <iostream>

int main(){
    char a = 'a';
    char* pointer_to_a = new char;
    pointer_to_a = &a;
    std::cout << "Here is the value of pointer_to_a: " << pointer_to_a << "\n";
    std::cout << "Here is the value of *pointer_to_a: " << *pointer_to_a << "\n";
    return 0;
}

// So printing out just pointer_to_a will print out the pointer itself and not the thing it is pointing to. It seems that assignment of pointers is where the notation deviates from its intuitive structure.
