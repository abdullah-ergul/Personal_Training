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
    // ! Silah silah;
    // ! silah.isim= "Silah1";
    // ! silah.mermiKapasitesi= 500;
    // ! silah.renk= "Siyah";

    // ! Ak47* ak47ptr= (Ak47*) &silah;
    // ! std::cout << ak47ptr->seriTek;

    Ak47 ak47;
    ak47.seriTek= 1;
    ak47.isim= "123";

    Silah *silahPtr= &ak47;
    Ak47 *ak47ptr= (Ak47*) silahPtr;
    std::cout << ak47ptr->seriTek;

    return 0;
}