#include <iostream>


class Silah {
    private:
        int deger= 10;
    
    public:
        int get1() const {
            return deger;
        }

        int *get2() {
            return &deger;
        }

        const int *get3() {
            return &deger;
        }
};


int main() {
    Silah silah;

    std::cout << silah.get1() << "\n";

    *(silah.get2())= 20;
    std::cout << silah.get1() << "\n";

    const int *test= silah.get3();

    return 0;
}
