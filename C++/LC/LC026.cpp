#include<iostream>
#include<stdlib.h>
using namespace std;

float sueldo , promedio , suma;
int i;

int main()
{
    for ( i=1; i<=8 ; i++)
    {     
        cout<<"Ingrese sueldo: ";
        cin>>sueldo;
        suma =  suma + sueldo;
    }
    
    promedio = suma/8;
    
    cout<<"La sumatoria es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;

    return 0;

}
