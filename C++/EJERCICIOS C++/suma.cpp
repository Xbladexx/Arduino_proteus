#include<iostream>
using namespace std;
float a , b , c , d , resultado ;
int main()
{
    cout<<"Dirige el valor de a: "; cin>>a;
    cout<<"Dirige el valor de b: "; cin>>b;
    cout<<"Dirige el valor de c: "; cin>>c;
    cout<<"Dirige el valor de d: "; cin>>d;

    resultado = (a+b) / (c+d);

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}
