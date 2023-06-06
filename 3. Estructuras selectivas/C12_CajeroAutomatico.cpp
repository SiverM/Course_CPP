//12. Programa que simule un cajero automatico con un inicial de 1000 dolares
#include<iostream>
using namespace std;
int main(){
    int opcion;
    float extra,retiro,saldo=1000;

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero cuenta."<<endl;
    cout<<"2. Retirar dinero de la cuenta."<<endl;
    cout<<"3. Consulta saldo de la cuenta."<<endl;
    cout<<"4. Salir."<<endl;
    cout<<"Elija cuna opcion: ";
    cin>>opcion;
    switch(opcion){
        case 1: cout<<"Ingrese monto a depositar: ";cin>>extra;
                saldo=saldo+extra;
                cout<<"Dimero en cuenta: "<<saldo<<" Dolares."<<endl;
                break;
        case 2: cout<<"Ingrese monto a retirar: ";cin>>retiro;
                if(retiro<=saldo){
                    saldo=saldo-retiro;
                    cout<<"Dimero en cuenta: "<<saldo<<" Dolares."<<endl;
                }
                else{
                    cout<<"El monto a retirar supera a su saldo, no se puede realizar la transaccion."<<endl;
                }
                break;
        case 3: cout<<"El saldo en su cuenta es de: "<<saldo<<" Dolares."<<endl;
                break;
        case 4: break;
    }
    return 0;
}