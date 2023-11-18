#include <iostream>
#include <string>

class Payment{
    public:
        double tutar;
        std::string paraBirimi;
        std::string hashCode= "15682887";

        Payment(double deposite){
            // Değişken oluşturulurken içerisine 1 double atılırsa çalışır
            tutar= 0.0;
            std::string paraBirimi= "TL";
            std::cout << "Double'li Yap\n";
        }

        Payment(){
            // Değişken oluşturulurken içerisine değer atılmazsa çalışır
            tutar= 0.0;
            std::string paraBirimi= "TL";
            std::cout << "Degiskensiz Yap\n";
        }

        ~Payment(){
            // Yıkıcı Metod
            std::cout << "Bitti!\n";
        }

        void pay(){
            std::cout << "Odeme Alindi!\n";
        }
};


int main(){
    Payment pay(370.40);
    pay.tutar= 10.20;
    pay.paraBirimi=  "TL";
    pay.pay();

    return 0;
}