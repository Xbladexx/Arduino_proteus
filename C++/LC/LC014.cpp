#include<iostream>

using namespace std;

float Pdscto = 0.20 , Pimpto = 0.15 , C , Dscto , Impuesto , importe ;

int main()
{
    cout<<"Ingresar consumo: ";
    cin>>C;

    if (C > 30)
    {
        Dscto = C * Pdscto;
    }
    else  
    {
        Dscto = 0;
    }
    // CALCULAR IMPUESTO
    Impuesto = (C - Dscto)*Pimpto;
    // CALCULAR IMPORTE A PAGAR
    importe = C - Dscto + Impuesto;
    
    // SALIDA DE DATOS 

    cout<<"Consumo: "<<C<<endl;
    cout<<"Descuento: "<<Dscto<<endl;
    cout<<"Impuesto: "<<Impuesto<<endl;
    cout<<"Importe a pagar: "<<importe<<endl;











    return 0;
}
