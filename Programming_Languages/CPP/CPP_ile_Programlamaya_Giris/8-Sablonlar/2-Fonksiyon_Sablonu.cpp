#include <iostream>


template<typename Type1, typename Type2>

Type1 max(Type1 a, Type2 b){
    return (a>b) ? a : b;
}


int main(){
    std::cout << max<int, float>(10, 6.8f);

    return 0;
}
