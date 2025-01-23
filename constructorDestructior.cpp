#include<iostream>
using namespace std;

class Persona{
    public:
        string name;
        int age;
//Constructor, es un "metodo" que no retorna y debe tener el mismo nombre de la clase."
//Los argumentos del constructor son los datos (argumentos) que se deben ingresar.   
    Persona(string n){
        name = n;
    }
//Destructor, utilizar virgulilla. Es util para limpiar valor en memoria. 
//Se invocan los destructores cuando se termina de usar un objeto.   
    ~Persona(){
        cout<<"Destructor"<<endl;
    }
    void saludar (){
        cout<<"**************************************"<<endl<<endl;
        cout<<"         Bienvenido "<<name<<endl<<endl;
        cout<<"**************************************"<<endl<<endl;
    }
};

int main (){
    Persona p1 = Persona("Jonathan");
    Persona p2 = Persona("David");
    p1.saludar();
    p2.saludar();
}