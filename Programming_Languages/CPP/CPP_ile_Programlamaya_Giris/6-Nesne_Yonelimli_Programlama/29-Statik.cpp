#include <iostream>


class Kitap {
    public:
        static int adet;

        Kitap() {
            adet++;
        }

        static int get() {
            return adet;
        }
};
int Kitap::adet= 0;

void test() {
    static int a= 0;
    a++;
    std::cout << a << "\n";
}


int main() {
    test();
    test();
    test();
    std::cout << "-----------\n";

    Kitap k1;
    Kitap k2;
    Kitap k3;

    std::cout << k1.adet << "\n";

    std::cout << k1.get() << "\n";

    return 0;
}
