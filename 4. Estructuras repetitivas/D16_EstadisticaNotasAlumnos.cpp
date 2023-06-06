/*
    16. En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
    a) alumnos que aprobaron todos los examenes.
    b) alumnos que aprobaron al menos un examen.
    c) alumnos que aprobaron unicamente el ultimo exame.
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int n1,n2,n3,todo=0,uno=0,ultimo=0;
    for(int i=1;i<=5;i++){
        cout<<"Notas alumno numero: "<<i<<endl;
        cout<<"Primera nota: ";cin>>n1;
        cout<<"Segunda nota: ";cin>>n2;
        cout<<"Tercera nota: ";cin>>n3;
        if(n1>50&&n2>50&&n3>50){
            todo=todo+1;
        }
        if(n1>50||n2>50||n3>50){
            uno=uno+1;
        }
        if(n1<=50&&n2<=50&&n3>50){
            ultimo=ultimo+1;
        }
        cout<<"La cantidad de alumnos que aprobaron todos los examenes es de "<<todo<<" alumnos."<<endl;
        cout<<"La cantidad de alumnos que aprobaron al menos un examenes es de "<<uno<<" alumnos."<<endl;
        cout<<"La cantidad de alumnos que aprobaron el ultimo examene es de "<<ultimo<<" alumnos."<<endl;
    }
    cout<<"\n";
    system("pause");
}