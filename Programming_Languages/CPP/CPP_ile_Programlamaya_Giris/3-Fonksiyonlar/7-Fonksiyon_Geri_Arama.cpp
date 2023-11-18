#include <iostream>


// // 1- int(*fint)(int)
// //     |-> (çağırılacak fonksiyonun tipi) + (* çağırılan fonksiyonun kullanılacak adı) + (çağırılan fonksiyonun parametreleri)

// int sum(int, int);
// int call(int(*fint)(int,int));


// int main(){
//     int num= call(sum);
//     std::cout << num;

//     return 0;
// }

// int sum(int p, int q){
//     return p+q;
// }

// int call(int(*fint)(int,int)){
//     int a= fint(10,10);
//     return a;
// }


//----------------------------------------------


// 2- using fint= int(*)(int)

using fint= int(*)(int,int);

int sum(int p, int q);
int call(fint);


int main(){
    int num= call(sum);
    std::cout << num;

    return 0;
}

int sum(int p, int q){
    return p+q;
}

int call(fint func){
    int a= func(10,10);
    return a;
}
