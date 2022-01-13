#include<iostream>

using namespace std;

float D,T,V;

int main()
{
	cout<<"Ingresar la distancia: ";
	cin>>D;
	cout<<"Ingresar Tiempo: ";
	cin>>T;

	V=D/T;

	cout<<"La velocidad es: "<<V<<"Km/hr"<<endl;

	return 0;
}