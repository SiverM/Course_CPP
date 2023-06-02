//5. Programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3,n4,promedio=0;
    cout<<"Ingrese nota final del alumno 1: ";cin>>n1;
    cout<<"Ingrese nota final del alumno 2: ";cin>>n2;
    cout<<"Ingrese nota final del alumno 3: ";cin>>n3;
    cout<<"Ingrese nota final del alumno 4: ";cin>>n4;
    promedio=(n1+n2+n3+n4)/4;
    cout<<"El promedio de las cuatro notas es: "<<promedio<<endl;
    return 0;
}