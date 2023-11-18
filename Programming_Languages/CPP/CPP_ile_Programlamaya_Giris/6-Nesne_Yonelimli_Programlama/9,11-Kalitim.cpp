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
    Ak47 ak47;
    ak47.isim= "AK47 Yeni Dizayn";
    ak47.renk= "Kirmizi";
    // ak47.deger= 10;  // Silah sinifi icerisinde protected olduğu için erişilemez

    M4A1 m1;
    m1.isim= "M1A1 Yeni Silah";

    return 0;
}
