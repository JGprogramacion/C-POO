#include<iostream>
#include<string>
using namespace std;

class Persona{
    public:
        string name;
        int age;
    void saludar (){
        cout<<"**************************************"<<endl<<endl;
        cout<<"         Bienvenido "<<name<<endl<<endl;
        cout<<"**************************************"<<endl<<endl;
    }
};

int main(){
    string nameIn;

    Persona p1 = Persona();
    cout<<"Digite su nombre: ";
    cin>>nameIn;
    p1.name = nameIn;
    p1.saludar();
}