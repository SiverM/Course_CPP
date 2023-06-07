//2. Programa que defina un vector y multiplique sus elementos.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,producto=1;
    cout<<"Cuantos numeros desea ingresar: ";cin>>n;
    int vector[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero: ";cin>>vector[i];
        producto*=vector[i];
    }
    cout<<"El producto de todos los elementos es: "<<producto<<endl;
    
    cout<<"Presione una tecla para continuar..."<<endl;
    getch();
    return 0;
}