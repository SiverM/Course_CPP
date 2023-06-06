//4. Programa que permita ingresar valores enteros hasta que se ingrese un valor de cero, y muestre cuantos valores mayores a cero se ingresaron
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero,contador=0;
    do{
        cout<<"Ingrse un numero: ";cin>>numero;
        if(numero>0){
            contador++;
        }
    }while(numero!=0);
    cout<<"Se ingresaron un total de "<<contador<<" numeros mayores a cero."<<endl;
    getch();
    return 0;
}