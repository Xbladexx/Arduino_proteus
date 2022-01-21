#include<iostream>

using namespace std;

int Dia ;

int main()
{
    cout<<"Ingrese el numero del dia: ";
    cin>>Dia;

    switch (Dia)
    {
    case 1:
        cout<<"El dia es Lunes"<<endl;break;
    case 2:
        cout<<"El dia es Martes"<<endl;break;
    case 3:
        cout<<"El dia es Miercoles"<<endl;break;
    case 4:
        cout<<"El dia es Jueves"<<endl;break;
    case 5:
        cout<<"El dia es Viernes"<<endl;break;
    case 6:
        cout<<"El dia es Sabado"<<endl;break;
    case 7: 
        cout<<"El dia es Domingo"<<endl;break;
    default: 
        cout<<"El valor ingresado no es correcto"<<endl;break;
    }
 

    return 0;
}
