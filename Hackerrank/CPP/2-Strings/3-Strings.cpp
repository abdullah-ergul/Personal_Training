#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    char temp;

	std::cin >> str1;
    std::cin >> str2;

    std::cout << str1.length() << " " << str2.length() << "\n";
    std::cout << str1 << str2 << "\n";

    temp = str1[0]; str1[0]= str2[0]; str2[0]= temp;

    std::cout << str1 << " " << str2;

    return 0;
}