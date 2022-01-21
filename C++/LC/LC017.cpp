#include<iostream>

using namespace std;

int A , B , C , D , mayor ;

int main()
{
    cout<<"Ingresa primer valor: ";
    cin>>A;

    cout<<"Ingresa segundo valor: ";
    cin>>B;

    cout<<"Ingresa tercer valor: ";
    cin>>C;

    cout<<"Ingresa cuarto valor: ";
    cin>>D;

    mayor = A; 

    if (B > mayor)
    {
        mayor = B;
    }
    if (C > mayor)
    {
        mayor = C;
    }
    if (D > mayor)
    {
        mayor = D;
    }
    
    cout<<"El mayor es: "<<mayor<<endl;


    return 0;
}
