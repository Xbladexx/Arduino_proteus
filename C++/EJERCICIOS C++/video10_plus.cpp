#include<iostream>
#include<math.h>
using namespace std;
float a , b , c , x;
int main()
{
    cout<<"Dirige el valor de a: "; cin>>a;
    cout<<"Dirige el valor de b: "; cin>>b;
    cout<<"Dirige el valor de c: "; cin>>c;

    x = -b + (sqrt(pow(b,2)-4*a*c)) / 2*a;
    cout<<"\nEl valor de x es: "<<x;
    return 0;
}
