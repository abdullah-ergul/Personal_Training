#include <iostream>


class Silah {
    public:
        Silah() {
            std::cout << "Olustu\n";
        }
        ~Silah() {
            std::cout << "Silindi\n";
        }
};


int main() {
    // * Heap'te obje olusturma
    Silah *silah= new Silah;
    delete silah;

    // * Heap'te dizi oluşturma
    int adet;
    std::cout << "dizinin eleman sayisi: "; std::cin >> adet;
    int *dizi= new int[adet];
    for(int i=0; i<adet; i++)
        std::cin >> dizi[i];
    
    std::cout << "Girilen elemanlar:\n";
    for(int i=0; i<adet; i++)
        std::cout << i+1 << ". = " << dizi[i] << "\n";

    delete[] dizi;

    return 0;
}
