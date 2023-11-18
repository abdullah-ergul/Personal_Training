#include <iostream>


class Payment {
    private:
        double bakiye;

    public:
        void setBakiye(double tutar) {
            if (tutar > 0)
                bakiye= tutar;
            else
                bakiye= 0.1;
        }

        double getBakiye() {
            return bakiye;
        }
};


int main() {
    Payment pay;

    // ! pay.bakiye= 500;
    pay.setBakiye(500);
    std::cout << "Bakiyeniz: " << pay.getBakiye();
    
    return 0;
}
