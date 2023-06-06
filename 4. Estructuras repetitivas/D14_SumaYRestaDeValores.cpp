//14. Calcular el resultado de 1-2+3-4+5-6...n.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero,suma=0,band=0;
    cout<<"Ingrese un numero mayor a cero: ";cin>>numero;
    while(numero<=0){
        cout<<"El valor ingresado no es mayor que cero."<<endl;
        cout<<"Ingrese un numero mayor a cero: ";cin>>numero;
    }
    for(int i=1;i<=numero;i++){
        if(band==0){
            suma=suma+i;
            band=1;
        }
        else{
            suma=suma-i;
            band=0;
        }
    }
    cout<<"La suma total es: "<<suma<<endl;
    cout<<"Presione una tecla para continuar."<<endl;
    getch();
    return 0;
}