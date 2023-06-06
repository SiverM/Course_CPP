//13. Hacer un menu con tres opciones
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int opcion,numero1;
    float numero,cubo;
    cout<<"\t***MENU***"<<endl;
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. numero par o impar"<<endl;
    cout<<"3. Salir "<<endl;
    cout<<"Elija una opcion: ";
    cin>>opcion;
    switch(opcion){
        case 1: cout<<"Digite un numero: ";cin>>numero;
                cubo=pow(numero,3);
                cout<<"El cubo del numero es: "<<cubo<<endl;
                break;
        case 2: cout<<"Digite un numero: ";cin>>numero;
                if((numero1%2)==0){
                    cout<<"El numero ingresado es par."<<endl;
                }
                else{
                    cout<<"El numero ingresado es impar."<<endl;
                }
                break;
        case 3: break;
    }
    return 0;
}