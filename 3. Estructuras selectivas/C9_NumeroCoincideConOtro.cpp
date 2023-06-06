//9. Determine si un numero leido de teclado coincide con otros tres leidos anteriormente por teclado
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,numero;
    cout<<"Introdusca primer numero: ";cin>>n1;
    cout<<"Introdusca segundo numero: ";cin>>n2;
    cout<<"Introdusca tercer numero: ";cin>>n3;
    cout<<"**************************"<<endl;
    cout<<"Introdusca un numero a buscar: ";cin>>numero;
    if(numero==n1){
        cout<<"El numero coincide con el primer numero."<<endl;
    }
    else if(numero==n2){
        cout<<"El numero coincide con el segundo numero."<<endl;
    }
    else if(numero==n3){
        cout<<"El numero coincide con el tercer numero."<<endl;
    }
    else{
        cout<<"El numero no coincide con ningun numero."<<endl;
    }
    return 0;
}