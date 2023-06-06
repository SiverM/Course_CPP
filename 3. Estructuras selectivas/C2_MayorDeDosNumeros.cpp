//2. Determine el mayor de dos numeros
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Ingrese numero 1: ";cin>>n1;
    cout<<"Ingrese numero 2: ";cin>>n2;
    if(n1==n2){
        cout<<"Ambos numeros son iguales.";
    }
    else{
        if(n1>n2){
            cout<<"El mayor es "<<n1;
        }
        else{
            cout<<"El mayor es "<<n2;
        }
    }
    return 0;
}