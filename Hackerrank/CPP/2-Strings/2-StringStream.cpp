#include <sstream>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

int slen(string str){
    char delimiters[] = ",";
    int count=0;
    char *ptr, *astr;
    astr= (char *)calloc(sizeof(str), sizeof(char));
    strcpy(astr, str.c_str());
    ptr = strtok(astr, delimiters);
    while (ptr != NULL){
        count++;
        ptr= strtok(NULL, delimiters);
    }
    return count;
}

int *parseInts(string str) {
    int *fform= (int *) calloc(slen(str),sizeof(int));
    stringstream ss(str);
    char ch;
    int num, i;
    for(i=0; i<slen(str); i++){
        ss >> num >> ch;
        fform[i]= num;
    }
    
	return fform;
}

int main() {
    string str;
    cin >> str;
    cout << slen(str) << "\n";
    // int *integers= (int *)calloc(slen(str),sizeof(int));
    // integers = parseInts(str);
    // for(int i = 0; i < slen(str); i++) {
    //     cout << integers[i] << "\n";
    // }
    
    return 0;
}