//5. Determinar si un numero es positivo o negativo
#include<iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Ingrese un numero: ";cin>>numero;
    if(numero==0){
        cout<<"El numero ingresado es cero."<<endl;
    }
    else{
        if(numero>0){
            cout<<"El numero ingresado es positivo."<<endl;
        }
        else{
            cout<<"El numero ingresado es negativo."<<endl;
        }
    }
    return 0;
}