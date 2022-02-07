#include<iostream>
using namespace std;
//int Nro[4];
float S , sueldo , Prom , Nro ;

int main()
{
    for ( S = 0; S < 4; S++)
    {
        cout<<"Ingrese sueldo: ";
        cin>>Nro ;
        sueldo = sueldo + Nro;
    }
    /*
    for ( S = 0; S < 4 ; S++)
    {
        cout<<Nro<<endl;
    }*/
    Prom = sueldo / 4;
    cout<<"El sueldo total es: "<<sueldo<<endl;
    cout<<"El promedio de sueldo es: "<<Prom<<endl;
    
    return 0;
}
