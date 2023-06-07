//5. Programa que defina un vector y el elemento mayor del vector.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,mayor=0;
    cout<<"Cuantos numeros desea ingresar: ";cin>>n;
    int vector[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero: ";cin>>vector[i];
        if(vector[i]>=mayor){
            mayor=vector[i];
        }
    }
    cout<<"El elemento mayor del vector es: "<<mayor<<endl;
    cout<<"\nPresione una tecla para continuar..."<<endl;
    getch();
    return 0;
}