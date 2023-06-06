//8. Programa que calcule x^y sin usar pow, donde x y y son enteros positicos.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x,y,resultado=1;
    do{
        cout<<"Ingrese los valores de x y de la potencia y"<<endl;
        cout<<"Ingrese un numero: ";cin>>x;
        cout<<"Ingrese la potencia: ";cin>>y;
    }while(x<0||y<0);
    for(int i=1;i<=y;i++){
        resultado=resultado*x;
    }
    cout<<"El resultado de x^y es: "<<resultado<<endl;
    getch();
    return 0;
}