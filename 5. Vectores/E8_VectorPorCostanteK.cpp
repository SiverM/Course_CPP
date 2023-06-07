//8. Programa que defina un vector y lo multiplique por una cinstante k.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Ingresar la longitud del vector: ";cin>>n;
    int vector[n];
    int vector1[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese un valor en la posicion "<<i<<" -> ";cin>>vector[i];
    }
    cout<<"Ingresar la constante k: ";cin>>k;
    for(int i=0;i<n;i++){
        vector1[i]=vector[i]*k;
    }
    cout<<"     Vector     |     vector*"<<k<<endl;
    for(int i=0;i<n;i++){
    cout<<"       "<<vector[i]<<"                 "<<vector1[i]<<endl;
    }
    cout<<"\nPresione una tecla para continuar..."<<endl;
    getch();
    return 0;
}