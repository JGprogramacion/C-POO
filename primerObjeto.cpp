#include<iostream>
#include<string>
using namespace std;

class Persona {
    //Propiedades de la Persona.
    //Al utilizar la palabra public, se puede ingresar desde afuera al atributo.
    public:
        string nombre = "Jonathan";
        int edad = 26;
    //Acciones Por medio de funciones.
    void saludar(){
        cout<<nombre<<endl;
    }
};


int main(){
    Persona p1 = Persona();
    Persona p2 = Persona();

    cout<<p1.edad<<endl;
    p1.saludar();
    p2.nombre = "David";
    p2.edad = 29;
    p2.saludar();
}