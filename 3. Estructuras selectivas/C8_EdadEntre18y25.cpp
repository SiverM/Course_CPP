//8. Determine si una edad introducida de teclado esta entre 18 y 25
#include<iostream>
using namespace std;
int main(){
    int edad;
    cout<<"Ingrese una edad: ";cin>>edad;
    if(edad>=18 && edad<=25){
        cout<<"La edad esta entre 18 y 25 anios."<<endl;
    }
    else{
        cout<<"La edad no esta entre 18 y 25 anios."<<endl;
    }
    return 0;
}