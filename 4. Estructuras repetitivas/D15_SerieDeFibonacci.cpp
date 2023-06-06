//15. Programa que realice la serie de fibonacci.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n1=1,n2=1,n3,n=2,cantidad;
    cout<<"Cuantos elementos de la serie de fibonacci desea generar: ";cin>>cantidad;
    cout<<n1<<" ";
    do{
        cout<<n2<<" ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
        n=n+1;
    }while(n<=cantidad);
    cout<<"\n";
    system("pause");
    return 0;
}