//18. Programa que descomponga en factores primos un numero.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int numero,aux,contador=0;;
    cout<<"Ingrese un numero: ";cin>>numero;
    cout<<numero<<" = 1";
    aux=numero;
    for(int i=2;i<=numero;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                contador++;
            }
        }
        if(contador<=2){
            while(aux%i==0){
                cout<<" * "<<i;
                aux=aux/i;
            }
        }
        contador=0;
    }
    cout<<"\n";
    system("pause");
    return 0;
}