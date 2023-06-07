//3. Programa que defina un vector y sus elementos con mas sus indices o posiciones.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<<"Cuantos numeros desea ingresar: ";cin>>n;
    int vector[5];
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero: ";cin>>vector[i];
    }
    cout<<"Los elementos del vector son: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"vector[ "<<i<<" ] = "<<vector[i]<<endl;
    }
    cout<<"Presione una tecla para continuar..."<<endl;
    getch();
    return 0;
}