//3. Escribe la siguiente expresión matemática como expresión en C++
#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,resultado=0;
    cout<<"Ingrese el valor para a: ";cin>>a;
    cout<<"Ingrese el valor para b: ";cin>>b;
    cout<<"Ingrese el valor para c: ";cin>>c;
    cout<<"Ingrese el valor para d: ";cin>>d;
    resultado=a+(b/(c-d));
    cout.precision(2);
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}