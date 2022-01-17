#include<iostream>

using namespace std;

char Mar ;

float Pdscto1= 0.10 , Pdscto2= 0.15 , Pdscto3= 0.20 , Pdscto4= 0.25 , Pdscto5= 0.30 , cant , prec , pbruto , dscto , importe ;

int main()
{
    cout<<"Ingresar marca: ";
    cin>>Mar;
    cout<<"Ingresar cantidad: ";
    cin>>cant;
    cout<<"Ingresar precio: ";
    cin>>prec;

    pbruto = cant * prec;

    switch (Mar)
    {
    case 1:
        dscto = pbruto * Pdscto1;break;
    case 2:
        dscto = pbruto * Pdscto2;break;
    case 3:
        dscto = pbruto * Pdscto3;break;
    case 4:
        dscto = pbruto * Pdscto4;break;
    case 5:
        dscto = pbruto * Pdscto5;break;
    }
    importe = pbruto - dscto;

    cout<<"Importe bruto: "<<pbruto<<endl;
    cout<<"Descuento: "<<dscto<<endl;
    cout<<"Importe a pagar: "<<importe<<endl;

    return 0;
   
    // FALTA ACABAR !!!!!!!!!!!
}
