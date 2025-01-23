#include<iostream>
#include<string>
using namespace std;

class Persona{
private:
    string name;
    int age;
public:
    Persona(string n, int a) : name(n),age(a) {

    }
    void saludar(){
        cout<<"*****************************************"<<endl<<endl;
        cout<<"          BIENVENIDO "<<name<<endl<<endl;
        cout<<"*****************************************"<<endl<<endl;
        cout<<" Tu edad: "<<age<<" es correcto?"<<endl<<endl;
    }
};

int main(){
    Persona p1 = Persona("Jonathan", 29);
    p1.saludar();
}