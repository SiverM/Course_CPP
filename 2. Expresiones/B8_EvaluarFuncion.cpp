//8. Programa que calcule el valor que toma la funcion f(x,y)
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x,y,f;
    cout<<"Ingrese el valor de x: ";cin>>x;
    cout<<"Ingrese el valor de y: ";cin>>y;
    f=(sqrt(x))/(pow(y,2)-1);
    cout.precision(3);
    cout<<"El resultado de la funcion f es: "<<f<<endl;
    return 0;
}