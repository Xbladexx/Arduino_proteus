#include<iostream>

using namespace std;

float Area,P , A ,B ,C;

int main()
{
    cout<<"Ingresar lado 1: ";
    cin>>A;
    cout<<"Ingresar lado 2: ";
    cin>>B;
    cout<<"Ingresar lado 3: ";
    cin>>C;

    P = (A+B+C)/2;
    Area=  (P*(P-A)*(P-B)*(P-C)); 

    cout<<"El area es: "<<Area<<endl;







    return 0;
}
