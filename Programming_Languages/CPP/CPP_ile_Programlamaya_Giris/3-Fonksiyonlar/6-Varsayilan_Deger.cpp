#include <iostream>
#include <string>

void sendMsg(std::string msg1, std::string msg2 = "Merhaba");


int main(){
    char msg[10];

    std::cout << "Enter a Message: "; std::cin >> msg;
    sendMsg(msg);

    return 0;
}

void sendMsg(std::string msg1, std::string msg2){
    std::cout << msg1 << " " << msg2;
}
