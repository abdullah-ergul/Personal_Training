#include <iostream>

namespace deneme {
    int sayi= 10;

    void merhaba() {
        std::cout << "Deneme'den Merhaba\n";
    }
}

void merhaba() {
    std::cout << "Merhaba\n";
}


int main() {
    merhaba();

    deneme::merhaba();
    std::cout << deneme::sayi;

    return 0;
}
