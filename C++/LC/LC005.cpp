#include<iostream>

using namespace std;

int suma,Num;

int main()
{
	cout<<"Ingreso de numero entero: ";
	cin>>Num;

	suma=(Num *(Num+1))/2;
	
	cout<<"La suma es: "<<suma<<endl;

	return 0;
}