//9. Sumatoria de un numero n leido de teclado
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,suma=0;
    cout<<"Ingrese un valor para n: ";cin>>n;
    do{
        cout<<"El valor de n debe ser mayor a cero."<<endl;
        cout<<"Ingrese un valor para n: ";cin>>n;
    }while(n<=0);
    for(int i=1;i<=n;i++){
        suma=suma+i;
    }
    cout<<"La sumatoria es: "<<suma<<endl;
    getch();
    return 0;
}