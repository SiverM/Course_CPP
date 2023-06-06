//10. Programa que calcule la suma de 1+3+5+...+2n-1
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero,suma;
    cout<<"Ingrese un numero: ";cin>>numero;
    for(int i=1;i<=(2*numero-1);i+=2){
        suma=suma+i;
    }
    cout<<"La suma es: "<<suma<<endl;
    getch();
    return 0;
}