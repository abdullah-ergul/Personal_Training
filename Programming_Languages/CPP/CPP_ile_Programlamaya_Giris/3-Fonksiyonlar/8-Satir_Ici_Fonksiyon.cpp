#include <iostream>

inline int sum(int, int);


int main(){
    int num= sum(1,10);
    std::cout << num;

    return 0;
}

inline int sum(int q, int p){
    return q+p;
}
