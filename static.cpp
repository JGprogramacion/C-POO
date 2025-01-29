#include<iostream>
using namespace std;

class Persona{
private:
    string name;
    int age;
public:
    static int numero_personas;
Persona(string name, int age);
void saludar();
};

int Persona::numero_personas = 0;

Persona::Persona(string name, int age){
    this->name = name;
    this->age = age;
    numero_personas +=1;
}

void Persona::saludar(){
    cout<<"hola, soy "<<name<<", mi edad es "<<age<<endl;
}

int main(){
    Persona *p = new Persona("Diana",29);
    Persona *p2 = new Persona("Jovenver",30);
    Persona *p3 = new Persona("Jonathan",30);
    p->saludar();
    p2->saludar();
    cout<<Persona::numero_personas;

}