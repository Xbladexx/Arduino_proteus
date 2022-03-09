#include<iostream>
#include<math.h>
using namespace std;
float x , y , resultado=0;
int main()
{
    cout<<"Dirige el valor de x: "; cin>>x;
    cout<<"Dirige el valor de y: "; cin>>y;
    
    resultado = (sqrt(x))/(pow(y,2)-1);
    cout<<"\nEl resultado es: "<<resultado;
    return 0;

}
