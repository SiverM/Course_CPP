//7. Programa que lecture valores hasta que se ingrese un valor en el rango [20-30] o el valor de cer0.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero,suma=0;
    do{
        cout<<"Ingrese un valor entero: ";cin>>numero;
        if(numero>0){
            suma+=numero;
        }
    }while((numero<=20||numero>=30)&&numero!=0);
    cout<<"La suma de todos los numeros mayores a cero son: "<<suma<<endl;
    getch();
    return 0;
}