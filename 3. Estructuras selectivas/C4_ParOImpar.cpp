//4. Determinar si un numero es par o impar
#include<iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Ingrese un numero: ";cin>>numero;
    if(numero<=0){
        cout<<"El numero "<<numero<<" es menor o igual a cero";
    }
    else{
        if(numero%2==0){
            cout<<"El numero "<<numero<<" es par";
        }
        else{
            cout<<"El numero "<<numero<<" es impar";
        }
    }
    return 0;
}