#include <iostream>

// Remember this program will give you an error. Every reference must have a value to be bound to. A reference bound to a NULL value is typically like a pointer.
// A pointer is basically a reference value with a disguise, pointing to at LEAST a null value. But a reference WITHOUT a value is not possible and a referecne to another reference does not count as pointing to a value, therefore there is an error.
int main(){
    int a = 1;
    int &b = &a;
    return 0;
}
