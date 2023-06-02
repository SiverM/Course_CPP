//7. Determinar la hipotemusa de un triangulo dado sus catetos.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float cat1,cat2,hipo;
    cout<<"Ingrese primer cateto: ";cin>>cat1;
    cout<<"Ingrese segundo cateto: ";cin>>cat2;
    hipo=sqrt(pow(cat1,2)+pow(cat2,2));
    cout.precision(2);
    cout<<"La hipotemusa del triangulo es: "<<hipo<<endl;
    return 0;
}