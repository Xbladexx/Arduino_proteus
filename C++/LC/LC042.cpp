#include<iostream>
//#include<string.h>
using namespace std;
float pf, nota[4];
int n;
//string cod , cur ;
char rp;
int main()
{
    //cout<<"Ingrese codigo: ";
    //cin>>cod;
    cout<<"Desea ingresar: ";
    cin>>rp;
    

    while ((rp=='s') || (rp=='S'))
    {
        hola();//llamar ala funcion
        for ( n = 0; n <4; n++)
        {
            cout<<"Ingresar nota: ";
            cin>>nota[n];
            pf +=nota[n];
        }
       /* for ( n = 0; n < 4; n++)
        {
            cout<<"Las notas son: "<<nota[n]<<"\n";
        }*/
        pf=pf/4;
        cout<<"El promedio es: "<<pf;
        cout<<"\n---------------------------------------------";
        cout<<"\n Desea continuar [s|n]: ";
        cin>>rp;
    }
    
    return 0;
}
void hola(){//funcion
cout<<"Hola mundo";
}