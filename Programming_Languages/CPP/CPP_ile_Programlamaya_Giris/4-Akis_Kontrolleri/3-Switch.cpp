#include <iostream>

int main(){
    int chooice;
    std::cout << "Enter a Value: "; std::cin >> chooice;

    switch (chooice){
    case 1:
        std::cout << "ONE\n";
        break;
    
    case 2:
        std::cout << "TWO\n";
        break;

    default:
        std::cout << "Cant Find Number\n";
        break;
    }

    return 0;
}
