//1. Programa que defina un vector y sume sus elementos.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,suma=0;
    cout<<"Cuantos numeros desea ingresar: ";cin>>n;
    int vector[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero: ";cin>>vector[i];
        suma+=vector[i];
    }
    cout<<"La suma de todos los elementos es: "<<suma<<endl;
    
    cout<<"Presione una tecla para continuar..."<<endl;
    getch();
    return 0;
}