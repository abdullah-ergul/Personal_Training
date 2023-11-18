#include <iostream>

int divide(int a, int b) {
    try {
        if (b == 0)
            throw 1;
        else if (a < 0 || b < 0)
            throw 2;
        else if (a == 0)
            throw "err3";
        return a/b;
    }
    catch (int err) {
        if (err == 1)
            std::cout << "Error code: " << err << " : Any number can't divide by zero!\n";
        else if (err == 2)
            std::cout << "Error code: " << err << " : This function can't give negative parameter!\n";
        return 0;
    }
    catch (const char *err) {
        std::cout << "Error code: 3 : If 0 divide by any number, result must be 0!\n";
        return 0;
    }
}

int main() {
    std::cout << divide(7, 5);

    return 0;
}