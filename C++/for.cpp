#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int i,numero;
void iteracion(){//funcion
    for(i=1; i<=numero; i++){
        cout<<i<<endl;
        Sleep(1000);
    } 
     for(i=numero-1; i>=1; i--){
        cout<<i<<endl;
        Sleep(1000);
    }
}

int main() //funcion principal
{ 
    cout<<"Ingresa el numero de interacion: "; cin>>numero;

    iteracion();
            
    getch();
    return 0;
    
}