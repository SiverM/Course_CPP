//7. Concatene vos vectores de caracteres en un tercer vector.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int longitud;
    cout<<"Ingrese la longitud de los vectores: ";cin>>longitud;
    char A[longitud];
    cout<<"Ingresando valores al primer vector"<<endl;
    for(int i=0;i<longitud;i++){
        cout<<"Ingrese caracter en la posicion "<<i<<" : ";cin>>A[i];
    }
    char B[longitud];
    cout<<"Ingresando valores al segundo vector"<<endl;
    for(int i=0;i<longitud;i++){
        cout<<"Ingrese caracter en la posicion "<<i<<" : ";cin>>B[i];
    }
    char C[longitud*2];
    for(int i=0;i<longitud;i++){
        C[i]=A[i];
        C[longitud+i]=B[i];
    }
    cout<<"El vector concatenado es: "<<endl;
    for(int i=0;i<longitud*2;i++){
        cout<<C[i]<<" ";
    }
    cout<<"\n";
    system("pause");
    return 0;
}