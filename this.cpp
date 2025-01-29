#include<iostream>
using namespace std;

class Persona{
private:
    string name;
    int age;
public:
    Persona(string name, int age){
        this->name = name;
        this->age = age;
    }
    Persona &establecerNombre(string name){
        this->name = name;
        return *this;
    }
    Persona &establecerEdad(int age){
        this->age=age;
        return *this;
    }
    void saludar(){
        cout<<"hola mi nombre es "<<name<<", tengo "<<age<<endl;
    }
};


int main(){
    Persona *p = new Persona("Jonathan", 29);
    p->saludar();
    p->establecerNombre("Jovenver").establecerEdad(30);
    p->saludar();
}