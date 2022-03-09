#include<iostream>
using namespace std;
float a , b, c, d, e, f , resultado;
int main()
{
    cout<<"Dirige el numero de a: "; cin>>a;
    cout<<"Dirige el numero de b: "; cin>>b;
    cout<<"Dirige el numero de c: "; cin>>c;
    cout<<"Dirige el numero de d: "; cin>>d;
    cout<<"Dirige el numero de e: "; cin>>e;
    cout<<"Dirige el numero de f: "; cin>>f;

    resultado = (a + (b/c)) /  (d + (e/f));
    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}
