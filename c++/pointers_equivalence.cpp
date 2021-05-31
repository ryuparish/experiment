#include <iostream>

void print_values(int& a, int& b, int* pointer){
    std::cout << "Value of a: " << a << "\n";
    std::cout << "Value of b: " << b << "\n";
    std::cout << "Value of pointer: " << *pointer << "\n";
}

int main() {
    int a = 1, b = 2;
    int* pointer = (int*)malloc(sizeof(int));

    std::cout << "Setting pointer to point to a\n";
    pointer = &a;
    print_values(a, b, pointer);

    std::cout << "Setting pointer to point to b\n";
    pointer = &b;
    print_values(a, b, pointer);

    std::cout << "Changing value of the value pointed to by the pointer\n";
    *pointer = 420;
    print_values(a, b, pointer);
    return 0;
}

