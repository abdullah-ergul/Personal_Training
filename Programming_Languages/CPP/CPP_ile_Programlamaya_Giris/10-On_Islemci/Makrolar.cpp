#include <iostream>

#define SAYI 1

#define TOPLA(a, b) (a+b)

#define DEBUG


int main() {
    // --------------
    
    std::cout << SAYI + SAYI;

    // --------------

    std::cout << TOPLA(10, 5);

    // --------------

    #ifdef DEBUG
        std::cout << "Dev Mesajlari\n";
    #endif // DEBUG

    // --------------

    #ifndef DEBUG
        std::cout << "- Dev Mesajlari\n";
    #endif // DEBUG

    // --------------

    #if 5 > 10
        std::cout << "5 buyuktur 10\n";
    #else 
        std::cout << "5 kucuktur 10\n";
    #endif

    // --------------

    return 0;
}