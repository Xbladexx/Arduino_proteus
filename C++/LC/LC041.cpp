#include<iostream>
#include<string.h>
using namespace std;
string planeta[9] {"Mercurio", "Venus", "Tierra","Marte","Jupiter", "Saturno", "Urano", "Neptuno", "Pluton"};
int main(){
    int Num;

    cout<<"Ingresa Numero del planeta: ";
    cin>>Num;
    if(Num>=1 && Num<10){//&& significa una "Y"
        cout<<"El nombre del planeta es: "<<planeta[Num-1];
    
    }

    else{
        cout<<"El numero no es valido";

    }
    
}
