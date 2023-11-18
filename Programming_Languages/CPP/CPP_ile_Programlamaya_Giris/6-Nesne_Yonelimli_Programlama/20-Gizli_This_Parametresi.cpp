#include <iostream>
#include <string>


class Silah {
    protected:
        int deger;
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        Silah(std::string isim, int mermiKapasitesi) {
            this->isim= isim;
            this->mermiKapasitesi= mermiKapasitesi;
        }

        Silah(std::string isim) {
            this(iism, 0);
        }
};

class Ak47 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        bool durbun;

        Ak47(std::string isim, int mermiKapasitesi, bool durbun) : Silah(isim, mermiKapasitesi) {
            this->durbun= durbun;
        }

        void ateset(){
            ///
        }
};


int main() {
    Silah silah("silah", 40);

    Ak47 ak47("ak47", 30, true);

    return 0;
}