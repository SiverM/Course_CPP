/*
    3. Realizar un programa que lea de la entrada estándar los siguientes datos de una persona:
        Edad: dato de tipo entero.
        Sexo: dato de tipo caracter.
        Altura en metros: dato de tipo real.
    Tras leer los datos, el programa debe mostrar en la salida estándar.
*/
#include<iostream>
using namespace std;
int main(){
    int Edad;
    char Sexo[10];
    float Altura;
    cout<<"Ingrese su edad: ";
    cin>>Edad;
    cout<<"Ingrese su sexo: ";
    cin>>Sexo;
    cout<<"Ingrese su altura: ";
    cin>>Altura;
    cout<<"\nSu edad es de "<<Edad<<" anios."<<endl;
    cout<<"Su sexo es "<<Sexo<<endl;
    cout<<"Su altura es de "<<Altura<<" metros";
    return 0;
}