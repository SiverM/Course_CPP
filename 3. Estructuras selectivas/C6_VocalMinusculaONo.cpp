//6. Determinar si un caracter en una vocal minuscula o no.
#include<iostream>
using namespace std;
int main(){
    char letra;
    cout<<"Ingrese un caracter: ";cin>>letra;
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una voval minuscula";break;
        default: cout<<"No es una vocal minuscula";break;
    }
    return 0;
}