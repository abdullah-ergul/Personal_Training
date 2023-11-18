#include <iostream>


// int max(int a, int b){
//     return (a>b) ? a : b;
// }

// float max(float a, float b){
//     return (a>b) ? a : b;
// }

// double max(double a, double b){
//     return (a>b) ? a : b;
// }

template<typename Type>

Type max(Type a, Type b){
    return (a>b) ? a : b;
}


int main(){
    std::cout << max(10, 5) << "\n";
    std::cout << max(1.3, 5.8) << "\n";

    std::cout << max<>(27, 13) << "\n";
    std::cout << max<int>(1, 9) << "\n";

    return 0;
}
