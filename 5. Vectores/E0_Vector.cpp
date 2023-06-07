//0. Vector de 5 elementos
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<"\nPresione una tecla para continuar..."<<endl;
    getch();
    return 0;
}