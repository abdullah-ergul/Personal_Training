#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int c_age, c_standard;
        string c_first_name, c_last_name, str;
    public:
        void set_age(int age){
            c_age= age;
        }
        void set_standard(int standard){
            c_standard= standard;
        }
        void set_first_name(string first_name){
            c_first_name= first_name;
        }
        void set_last_name(string last_name){
            c_last_name= last_name;
        }
        
        int get_age(){
            return c_age;
        }
        int get_standard(){
            return c_standard;
        }
        string get_first_name(){
            return c_first_name;
        }
        string get_last_name(){
            return c_last_name;
        }
        string to_string(){
            stringstream a; a << c_age;
            stringstream b; b << c_standard;
            return a.str() + "," + c_first_name + "," + c_last_name + "," + b.str();
        }
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}