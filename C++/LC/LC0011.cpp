#include<iostream>

using namespace std;

// const igv=0.18;

char Cod[100] , Arti[100];

float igv=0.18 , Prec , venta , monto,cant;

int main()
{
    cout<<"Ingrese codigo: ";
    cin>>Cod;
   
    cout<<"Ingrese articulo: ";
    cin>>Arti;
  
    cout<<"Ingrese precio: ";
    cin>>Prec;
    cout<<"Ingrese Cantidad: ";
    cin>>cant;

    venta=Prec*cant;
    monto=venta+(venta*igv);

    cout<<"El total de venta es: "<<venta<<endl;
    cout<<"El montol total de ventas es: "<<monto<<endl;

    return 0;
}
