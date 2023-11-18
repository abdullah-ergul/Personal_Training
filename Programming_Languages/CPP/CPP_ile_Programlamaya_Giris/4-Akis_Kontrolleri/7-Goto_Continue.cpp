#include <iostream>

int main(){
    int a,b;
    char choice;
    while(true){
        std::cout << "Enter 1st Number: "; std::cin >> a;
        std::cout << "Enter 2nd Number: "; std::cin >> a;
        std::cout << "Enter a Operation: "; std::cin >> choice;

        switch (choice){
        case '+':
            std::cout << a+b << "\n";
            break;

        case '-':
            std::cout << a-b << "\n";
            break;

        case 'e':
            goto stop;
        
        default:
            std::cout << "Can't Find Operation.\n";
            break;
        }
    }

    stop:
        std::cout << "Stop\n";

    return 0;
}