#include <iostream>


class Silah {
    public:
        int a{};

        Silah() {
            std::cout << "Olustu\n";
        }

        ~Silah() {
            std::cout << "Silindi\n";
        }
};


int main() {

    // std::shared_ptr<Silah> ptr= std::make_shared<Silah>();  // ! c++ 11 standart

    // std::cout << ptr->a;
    // std::cout << ptr.get();

    return 0;
}
