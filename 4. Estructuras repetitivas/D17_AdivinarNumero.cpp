//17. Adivinar un numero que se encuentra en el rango de [1-100].
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int aleatorio,numero,contador=0;
    srand(time(NULL));
    aleatorio=1+rand()%(100);
    do{
        cout<<"Ingrese un valor:";cin>>numero;
        if(numero<aleatorio){
            cout<<"El numero buscado es mayor al numero ingresado."<<endl;
        }
        if(numero>aleatorio){
            cout<<"El numero buscado es menor al numero ingresado."<<endl;
        }
        contador++;
    }while(numero!=aleatorio);
    //cout<<"El numero buscado es: "<<aleatorio<<endl;
    cout<<"Felicidades, el valor ingresado es: "<<numero<<endl;;
    cout<<"Lograste encontrar el valor en "<<contador<<" intentos";
    cout<<"\n";
    system("pause");
    return 0;
}
