#include<iostream>
#include<stdlib.h>
using namespace std;
float N , Fac , C;

int main()
{
    cout<<"Ingrese valor Numerico: ";
    cin>>N;

    Fac = 1;

    for ( C = 1; C < N; C++ )
    {
        Fac = Fac * C;
    }

    cout<<"Factorial de "<< N <<" es: "<<Fac<<endl; 
    
    return 0;
}

