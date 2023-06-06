//13. Calcule la suma de 2^1+2^2+2^3+...+2^n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int numero,suma=0;
    cout<<"Ingrese la maxima potencia: ";cin>>numero;
    for(int i=1;i<=numero;i++){
        suma+=pow(2,i);
    }
    cout<<"La suma es: "<<suma<<endl;
    cout<<"Presione una tecla para continuar."<<endl;
    getch();
    return 0;
}