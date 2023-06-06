//11. Determine la factorial de un numero.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero,producto=1;
    cout<<"Ingrese un numero para evaluar su factorial: ";cin>>numero;
    for(int i=1;i<=numero;i++){
        producto=producto*i;
    }
    cout<<"La factorial de "<<numero<<" es: "<<producto<<endl;
    cout<<"Presione una tecla para finalizar.";
    getch();
    return 0;
}