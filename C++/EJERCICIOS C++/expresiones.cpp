#include<iostream>
using namespace std;
float x , y , aux;
int main()
{
    cout<<"Escriba el valor de x: "; cin>>x;
    cout<<"Escriba el valor de y: "; cin>>y;
    aux = x;
    x = y;
    y = aux;
    cout<<"El valor de x : "<<x<<endl;
    cout<<"El valor de y : "<<y<<endl;
    return 0;
}
