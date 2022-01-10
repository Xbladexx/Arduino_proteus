#include<iostream>

using namespace std;

float a , b , c , d , e , f , resultado = 0; 
int main()
{
	cout<<"Dirigite el valor de a: "; cin>>a;
	cout<<"Dirigite el valor de b: "; cin>>b;
	cout<<"Dirigite el valor de c: "; cin>>c;
	cout<<"Dirigite el valor de e: "; cin>>e;
	cout<<"Dirigite el valor de f: "; cin>>f;

	resultado= (a+(b/c))/(d+(e/f));
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;

	return 0;

}