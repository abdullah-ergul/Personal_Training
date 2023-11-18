#include <iostream>


class Silah {
    public:
        int *a= nullptr;
        int *b= nullptr;

        Silah(int num1, int num2) {
            a= new int;
            b= new int;

            *a= num1;
            *b= num2;
        }

        ~Silah() {
            delete a;  // Obje silinince heapte tutulan a ve b verilerinin bellekten silinmesi gerektir.
            delete b;
            std::cout << "Silindi\n";
        }
};


int main() {
    Silah *silah= new Silah(15, 72);
    
    delete silah;

    return 0;
}
