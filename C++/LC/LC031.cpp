#include<iostream>
using namespace std;
int i;
float suma , promedio , nota , Nmin=20 , Nmax=0 , Nnotas=10;
int main()
{
    for ( i = 1; i <= Nnotas; i++)
    {
        cout<<"Ingrese nota: ";
        cin>>nota;
    
    if (nota > Nmax)
    {
        Nmax = nota;
    }
    if (nota < Nmin)
    {
        Nmin = nota;
    }
        suma = suma+nota;
        //suma += nota;
    }
        
        promedio = suma / Nnotas;

        cout<<"Maxima nota: "<<Nmax<<endl;
        cout<<"Minima nota: "<<Nmin<<endl;
        cout<<"Promedio: "<<promedio<<endl;
    

    return 0;
}
