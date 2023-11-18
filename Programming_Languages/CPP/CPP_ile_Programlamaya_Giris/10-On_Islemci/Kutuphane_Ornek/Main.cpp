#include <iostream>
#include "mylib.h"
#include "mat.h"

// int topla(int, int);

int main() {
    std::cout << topla(5, 3) << "\n";

    // -------------

    Mat mat(10, 10);
    std::cout << mat.sum() << "\n";

    return 0;
}
