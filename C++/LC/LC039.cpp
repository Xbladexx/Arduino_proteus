#include<iostream>

using namespace std;
int codigo , cantidad;
float precio , importe;
int main()
{
    cout<<"Computo de ineventario\n";
    cout<<"------------------------------------------\n";
    cout<<"Para terminar digitar -999\n";
    cout<<"-------------------------------------------\n";

    while (codigo != -999)
    {
        cout<<"Seleccione el departamento\n";
        cout<<"¿Cual es el siguiente codigo del producto?: ";
        cin>>codigo;
        if ( codigo == -999 )
        {
        }
        cout<<"¿Cuantas unidades se compraron?: ";
        cin>>cantidad;
        cout<<"¿Cual es el precio unitario del articulo?: ";
        cin>>precio;
        cout<<cantidad<<" unidades de #"<<codigo<<" representa "<<precio<<endl;
        
    }
        cout<<"Fin del computo"<<endl;
 
    return 0;
}
