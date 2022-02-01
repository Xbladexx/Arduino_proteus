#include<iostream>
using namespace std;
char Rp = 'S' , codigo[100];
float precio , totArt , totGen ;
int Unidad ;

int main()
{
    while (Rp == 'S')
    {
        cout<<"Codigo del articulo: ";
        cin>>codigo;
        cout<<"Precio unitario: ";
        cin>>precio;
        cout<<"Numero de unidades: ";
        cin>>Unidad;

        totArt = precio * Unidad;
        totGen = totGen + totArt;

        cout<<"Registrar otra compra (S/N): ";
        cin>>Rp;
    }
    
    cout<<"\nTotal general de la compra: "<<totGen<<endl;

    return 0;   
}