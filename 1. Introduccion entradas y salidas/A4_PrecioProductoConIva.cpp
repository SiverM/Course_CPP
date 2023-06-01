/*
    2. Escribir un programa que de la entrada estándar el precio de un producto y muestre
       en salida estándar el precio del producto al aplicarle el IVA
*/
#include<iostream>
using namespace std;
int main(){
    float precio,iva,precioFinal;
    cout<<"Digite el precio del producto: ";
    cin>>precio;
    //suponiendo que el ina es del 13%
    iva=precio*0.13;
    precioFinal=precio+iva;
    cout<<"El precio final es: "<<precioFinal<<endl;
    return 0;
}