/*
    1. Escribe un programa que lea de entrada estándar dos números y muestre
       en la salida estándar su suma, resta, multiplicación y división.
*/
#include<iostream>
using namespace std;
int main(){
    int n1,n2,suma=0,resta=0,mult=0,div=0;
    cout<<"Digite un numero: ";
    cin>>n1;
    cout<<"Digite otro numero";
    cin>>n2;
    suma=n1+n2;
    resta=n1-n2;
    mult=n1*n2;
    div=n1/n2;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<mult<<endl;
    cout<<"La division es: "<<div<<endl;
    return 0;
}