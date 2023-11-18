#include <iostream>

class Hesapla{
    public:
        double genislik;
        double yukseklik;
        double alan;

        void giris(){
            std::cout << "Yukseklik giriniz: "; std::cin >> yukseklik;
            std::cout << "Genislik giriniz: "; std::cin >> genislik;
        }

        void hesapla(){
            alan= yukseklik * genislik;
            std::cout << "Cismin Alani: " << alan << "\n";
        }
};


int main(){
    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();

    return 0;
}