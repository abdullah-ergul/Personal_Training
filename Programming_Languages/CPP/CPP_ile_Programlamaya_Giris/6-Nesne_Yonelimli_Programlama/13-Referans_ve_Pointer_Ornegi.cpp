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

void test(Ak47 &akRef, Ak47 *akPtr){
    akRef.isim= "testFunc";
}


int main(){
    Ak47 ak47;
    ak47.isim= "test";

    Ak47 *akPtr= &ak47;  // Pointer
    akPtr->isim= "test2";
    akPtr->ateset();

    Ak47 &akRef= ak47;  // Referans
    akRef.isim= "test3";

    test(ak47, &ak47);
    test(akRef, akPtr);

    return 0;
}