#include <iostream>


class Payment {
    private:
        float bakiye;
    public:
        std::string paraBirimi;

        void setBakiye(float tutar) {
            if (tutar > 0)
                this->bakiye= tutar;
            else
                this->bakiye= 0.1;
        }

        void pay() {
            std::cout << this->bakiye << this->paraBirimi << " : Odeme Alindi!\n";
        }

        friend void degistir(Payment *);
        friend class Test;
};

void degistir(Payment *ptr) {
    ptr->bakiye= 50;
}

class Test {
    public:
        void degistir(Payment *ptr) {
            ptr->bakiye= 50;
        }
};


int main() {
    Payment payment;
    
    degistir(&payment);
    payment.paraBirimi= "TL";
    payment.pay();

    Test test;
    test.degistir(&payment);
    payment.paraBirimi= "TL";
    payment.pay();

    return 0;
}
