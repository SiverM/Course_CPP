//6. Lea la temperatura de un dia en un intervalo de 4 horas, calcule la temperatura media, determine la temepatura mas alta y mas baja.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    float temperatura,media,suma=0,t_alta,t_baja,band=0;
    int h_alta,h_baja;
    for(int i=1;i<=6;i++){
        cout<<"Ingrese la temperatura en grados celcius de la hora "<<i*4<<": ";cin>>temperatura;
        suma=suma+temperatura;
        if(band==0){
            t_alta=temperatura;
            t_baja=temperatura;
            band=1;
        }
        if(temperatura>=t_alta){
            t_alta=temperatura;
            h_alta=i*4;
        }
        if(temperatura<=t_baja){
            t_baja=temperatura;
            h_baja=i*4;
        }
    }
    media=suma/6;
    cout<<"La temperatura media en el dia fue de: "<<media<<" grados celcius."<<endl;
    cout<<"La temperatura mas alta fue de "<<t_alta<<" grados celcius a las "<<h_alta<<" horas."<<endl;
    cout<<"La temperatura mas baja fue de "<<t_baja<<" grados celcius a las "<<h_baja<<" horas."<<endl;

    getch();
    return 0;
}