//3. Tabla de multiplicar de un numero entero ingresado por teclado de entre 1 y 10
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero;
    do{
        cout<<"Digite un numero: ";cin>>numero;
    }while(numero<1 || numero>10);
    for(int i=1;i<=10;i++){
        cout<<i<<" * "<<numero<<" = "<<i*numero<<endl;
    }
    getch();
    return 0;
}