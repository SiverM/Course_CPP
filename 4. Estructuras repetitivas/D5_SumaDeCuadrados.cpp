//5. Calcule y muestre la suma de los cuadrados de los primeros 10 numeros enteros mayores que cero.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int cuadrado=0;
    for(int i=1;i<=10;i++){
        cuadrado=cuadrado+pow(i,2);
    }
    cout<<"La suma de los cuadrados de los primeros 10 numeros es: "<<cuadrado<<endl;
    getch();
    return 0;
}