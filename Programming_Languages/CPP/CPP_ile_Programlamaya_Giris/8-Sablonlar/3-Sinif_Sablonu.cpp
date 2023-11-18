#include <iostream>


template<typename Type>

class Mat {
    public:
        Type a{};
        Type b{};

        Type topla() {
            return a+b;
        }
};


int main() {
    Mat<int> mat1;
    mat1.a= 10;
    mat1.b= 20;
    std::cout << mat1.topla() << "\n";

    Mat<float> mat2;
    mat2.a= 48.9;
    mat2.b= 76.2;
    std::cout << mat2.topla()<< "\n";

    return 0;
}
