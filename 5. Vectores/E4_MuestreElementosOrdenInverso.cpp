//4. Programa que defina un vector y muestre sus elementos en orden inverso.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<<"Cuantos numeros desea ingresar: ";cin>>n;
    int vector[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero: ";cin>>vector[i];
    }
    cout<<"Los elementos del vector en orden inverso son: "<<endl;
    for(int i=n;i>0;i--){
        cout<<vector[i-1]<<" ";
    }
    cout<<"\nPresione una tecla para continuar..."<<endl;
    getch();
    return 0;
}