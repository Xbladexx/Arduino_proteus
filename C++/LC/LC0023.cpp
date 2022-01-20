#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char Apenom[100] , cate ;
float basico , boni , neto ;

int main()
{
    cout<<"Ingrese apellido y nombres: ";
    cin>>Apenom;
    cout<<"Ingrese sueldo Basico: ";
    cin>>basico;
    cout<<"Ingrese su categoria [A|B|C|D]: ";
    cin>>cate;

    switch (cate)
    {
    case 'A':
        boni = basico * 0.12;break;
    case 'B':
        boni = basico * 0.10;break;
    case 'C':
        boni = basico * 0.08;break;
    case 'D':
        boni = basico * 0.04;break;
    default: 
    cout<<"Categoria no existe";break;
    boni = 0;
    }

    neto = basico + boni;

    cout<<"La bonificacion es: "<<boni<<endl;
    cout<<"El neto a pagar es: "<<neto<<endl;

    return 0;
}
