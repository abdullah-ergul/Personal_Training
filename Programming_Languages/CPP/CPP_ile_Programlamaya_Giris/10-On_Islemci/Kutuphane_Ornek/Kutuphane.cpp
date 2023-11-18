#include "mylib.h"
#include "mat.h"


// mylib.h  :

int topla(int num1, int num2) {
    return num1 + num2;
}


// mat.h  :

Mat::Mat(int a, int b) : a(a), b(b) {}

int Mat::sum() {
    return this->a + this->b;
}
