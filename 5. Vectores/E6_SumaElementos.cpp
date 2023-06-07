//6. Programa que defina un vector y el elemento mayor del vector.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,posicion,suma=0,mayor=0;
    cout<<"Cuantos numeros desea ingresar: ";cin>>n;
    int vector[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero: ";cin>>vector[i];
        if(vector[i]>=mayor){
            mayor=vector[i];
            posicion=i;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=posicion){
            suma=suma+vector[i];
        }
    }
    if(suma==vector[posicion]){
        cout<<"Existe un elemento cuyo valor equivale a la suma del resto y ese es el: "<<mayor<<endl;
    }
    else{
        cout<<"No existe un elemento cuyo valor equivale a la suma del resto"<<endl;
    }
    cout<<"\nPresione una tecla para continuar..."<<endl;
    getch();
    return 0;
}