#include <iostream>


class Silah {
    protected:
        int deger;

    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;
};

class Ak47 : public Silah {
    public:
        bool seriTek;
        double kayisUzunlugu;
        bool durbun;

        void ateset() {
            ///
        }
};

class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void ateset() {
                ///
            }
};

class M4A1 : public Silah {
    public:
        bool seriTek;
        double kayisUzunlugu;
        int kurmaPozisyonu;

        void ateset() {
                ///
            }
};

void yazdir(Silah *silahPtr) {
    std::cout << silahPtr->isim << "\n";
}


int main() {
    Silah silah; silah.isim= "silah";
    yazdir(&silah);

    Ak47 ak47; ak47.isim= "ak47";
    Pistol pistol; pistol.isim= "pistol";
    M4A1 m4a1; m4a1.isim= "m4a1";
    yazdir(&ak47);
    yazdir(&pistol);
    yazdir(&m4a1);

    return 0;
}
