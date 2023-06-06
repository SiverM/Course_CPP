//3. Determinar el mayor de tres numeros
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Ingrese el primer numero: ";cin>>n1;
    cout<<"Ingrese el segundo numero: ";cin>>n2;
    cout<<"Ingrese el tercer numero: ";cin>>n3;
    if(n1==n2){
        if(n1==n3){
            cout<<"Los tres numeros son iguales.";
        }
        else{
            cout<<"Dos numeros son iguales.";
        }
    }
    else{
        if(n1==n3){
            cout<<"Dos numeros son iguales.";
        }
        else{
            if(n2==n3){
                cout<<"Dos numeros son iguales.";
            }
            else{
                if(n1>n2){
                    if(n1>n3){
                        cout<<"El mayor es "<<n1;
                    }
                    else{
                        cout<<"El mayor es "<<n3;
                    }
                }
                else{
                    if(n2>n3){
                        cout<<"El mayor es "<<n2;
                    }
                    else{
                        cout<<"El mayor es "<<n3;
                    }
                }
            }
        }
    }

    return 0;
}