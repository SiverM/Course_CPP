//12. Calcule la suma de factoriales desde 1! hasta n!.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero,suma_factorial=0,factorial;
    cout<<"Ingrese un numero: ";cin>>numero;
    for(int i=1;i<=numero;i++){
        factorial=1;
        for(int j=1;j<=i;j++){
            factorial*=j;
        }
        suma_factorial+=factorial;
    }
    cout<<"La suma de las factoriales desde 1! hasta !"<<numero<<" es: "<<suma_factorial<<endl;
    cout<<"Presione una tecla para continuar."<<endl;
    getch();
    return 0;
}
