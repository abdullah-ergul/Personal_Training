#include <iostream>


class Silah{
    protected:
        int deger;
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        virtual void ateset() {
            std::cout << "baam\n";
        }
};

class Ak47 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        bool durbun;
        
        // * override
        void ateset(){
            // Silah::ateset();  // Parent class'taki override edilmemiş metotu çağırma
            std::cout << "bombom\n";
        }
};

class Pistol : public Silah{
    public:
        int kurmaKoluDeseni;

        // * override
        void ateset(){
                std::cout << "bambam\n";
            }
};

class M4A1 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        int kurmaPozisyonu;

        // * override
        void ateset(){
                std::cout << "bumbum\n";
            }
};



int main() {
    Ak47 ak47;
    Pistol pistol;
    M4A1 m1;

    ak47.ateset();
    pistol.ateset();
    m1.ateset();

    return 0;
}
