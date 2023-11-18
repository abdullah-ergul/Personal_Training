#include <iostream>


class Silah{
    protected:
        int deger;
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        virtual void ateset()= 0;
};

class Ak47 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        bool durbun;

        void ateset(){
            std::cout << "bombom\n";
        }
};

class Pistol : public Silah{
    public:
        int kurmaKoluDeseni;

        void ateset(){
                std::cout << "bambam\n";
            }
};

class M4A1 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        int kurmaPozisyonu;

        void ateset(){
                std::cout << "bumbum\n";
            }
};

void atesEt(Silah *silahPtr) {
    silahPtr->ateset();
}


int main() {
    Ak47 ak47;
    Pistol pistol;
    M4A1 m1;

    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1);

    return 0;
}
