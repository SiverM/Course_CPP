//9. Programa que resuelve una ecuacion de segundo grado.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,x1,x2;
    cout<<"La ecuacion de segundo grado es: ax^2+bx+c=0"<<endl;
    cout<<"Ingrese el valor del coeficiente a: ";cin>>a;
    cout<<"Ingrese el valor del coeficiente b: ";cin>>b;
    cout<<"Ingrese el valor del coeficiente c: ";cin>>c;
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"El resultado de la primera raiz es: "<<x1<<endl;
    cout<<"El resultado de la segunda raiz es: "<<x2<<endl;
    return 0;
}