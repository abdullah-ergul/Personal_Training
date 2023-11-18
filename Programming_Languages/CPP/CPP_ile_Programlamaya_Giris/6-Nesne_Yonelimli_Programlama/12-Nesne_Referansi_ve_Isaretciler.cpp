#include <iostream>


class Silah{
    protected:
        int deger;
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;
};

class Ak47 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        bool durbun;

        void ateset(){
            ///
        }
};

class Pistol : public Silah{
    public:
        int kurmaKoluDeseni;

        void ateset(){
                ///
            }
};

class M4A1 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        int kurmaPozisyonu;

        void ateset(){
                ///
            }
};


int main(){
    int sayi= 10;
    int &deneme= sayi;  // Referans

    deneme= 5;  // Referansla veriyi degistirdik
    std::cout << sayi;  // Sayi degisti

    //----------------------------

    Ak47 ak47;
    Ak47 *akPtr= &ak47;  // Pointer

    std::cout << akPtr;  // Bellek adresini yazdirdik.


    Ak47 &akRef= ak47;  // Referans

    return 0;
}