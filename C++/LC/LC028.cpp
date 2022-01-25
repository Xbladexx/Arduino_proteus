#include<iostream>
#include<stdlib.h>
using namespace std;
int Num , Nd = 0 , Z;

int main()
{
    cout<<"Ingrese numero entero: ";
    cin>>Num;

    for ( Z = 1; Z <= Num ; Z++)
    {
        if (Num%Z == 0)
        {
            //Nd
            //Z++;
            //Nd = Nd + 1
        }    
        else if (Nd == 2)
        {
            cout<<"Numero primo";
        }
        else
        {
            cout<<"No es primo";
        }
        
        
    
    
    }

    return 0;
}
