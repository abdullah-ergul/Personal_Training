#include <iostream>

void sum(int, int);
void sum(double, double);


int main(){
    int a, b;

    std::cout << "Enter 2 Numbers: "; std::cin >> a >> b;
    sum(a,b);

    return 0;
}

void sum(int p, int q){
    std::cout << "INT: " << p << "+" << q << "= " << p+q << "\n";
}

void sum(double p, double q){
    std::cout << "DOUBLE: " << p << "+" << q << "= " << p+q << "\n";
}
