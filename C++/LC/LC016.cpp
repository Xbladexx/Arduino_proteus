#include<iostream>

using namespace std;

float Pdscto1=0.30 , Pdscto2=0.20, Pdscto3=0.15 , Pdscto4=0.10 , Pimpto=0.15 , C , Dscto , Impuesto , importe ;

int main()
{
    cout<<"Ingresar consumo: ";
    cin>>C;

    if (C > 100)
    {
        Dscto = C * Pdscto1;
    }
    if (C > 60)
    { 
        Dscto =  C * Pdscto2;  
    }
    if (C > 30)
    {
        Dscto = C * Pdscto3;
    }
    else
    {
        Dscto = C * Pdscto4;
    }

    Impuesto = (C - Dscto)*Pimpto;
    importe = C - Dscto + Impuesto;

    cout<<"Consumo: "<<C<<endl;
    cout<<"Descuento: "<<Dscto<<endl;
    cout<<"Impuesto: "<<Impuesto<<endl;
    cout<<"Importe a pagar: "<<importe<<endl;

    return 0;
}
