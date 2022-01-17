#include<iostream>

using namespace std;

float Pdscto1 = 0.20 , Pdscto2 = 0.10 , Pimpto = 0.15 , C , Dscto , Impuesto , Importe ; 

int main()
{ 
    
    cout<<"Ingresar Consumo: ";
    cin>>C;

    if (C > 30)
    {
        Dscto = C * Pdscto1;
    }
    else
    { 
        Dscto = C * Pdscto2;
    }

    Impuesto = (C - Dscto)* Pimpto;

    Importe = C - Dscto + Impuesto;

    cout<<"Consumo: "<<C<<endl;
    cout<<"Descuento: "<<Dscto<<endl;
    cout<<"Inpuesto: "<<Impuesto<<endl;
    cout<<"Importe a pagar: "<<Importe<<endl;








    return 0;
}
