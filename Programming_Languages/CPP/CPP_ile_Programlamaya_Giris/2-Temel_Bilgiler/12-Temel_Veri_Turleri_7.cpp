#include <iostream>


int main(){
    float a= 5.7;

    std::cout << a << "\n";
    std::cout << static_cast<int>(10.5) << "\n";
    std::cout << static_cast<float>(30) << "\n";
    std::cout << static_cast<int>(a) << "\n";

    return 0;
}
