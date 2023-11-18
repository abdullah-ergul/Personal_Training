#include <iostream>


class Hayvan {  // soyut sinif
    public:
        virtual void sesCal()= 0;
};

class Kopek : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Hav Hav!";
        }
};

class Kedi : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Miyav";
        }
};

class Ordek : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Vak Vak";
        }
};

class Fare : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Viv Vik";
        }
};

void tumSesCal(Hayvan *hPtr) {
    hPtr->sesCal();
}


int main() {
    // Hayvan hayvan;  // ! Abstract Sınıftan obje üretilemez

    Kopek kopek;
    Kedi kedi;
    Ordek ordek;
    Fare fare;

    tumSesCal(&kopek);

    return 0;
}
