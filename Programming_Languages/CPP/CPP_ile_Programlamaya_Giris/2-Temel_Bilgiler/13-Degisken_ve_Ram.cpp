#include <iostream>


int main(){
    int a= 10, *ptr= &a;

    std::cout << a << "\n";

    std::cout << *ptr << "\n";
    std::cout << ptr << "\n";
    std::cout << &ptr << "\n";

    return 0;
}
