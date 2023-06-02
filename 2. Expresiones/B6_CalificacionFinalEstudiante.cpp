//6. Calificacion final de un estudiante, practicas=30%, teoríca=60%, participacio=10%.
#include<iostream>
using namespace std;
int main(){
    float practica,teorica,participacion,total=0;
    cout<<"Ingrese la nota de practicas: ";cin>>practica;
    cout<<"Ïngrese la nota teorica: ";cin>>teorica;
    cout<<"Ingrese la nota de participacion: ";cin>>participacion;
    practica*=0.30;
    teorica*=0.60;
    participacion*=0.10;
    total=practica+teorica+participacion;
    cout<<"La nota final es: "<<total<<endl;
    return 0;
}
