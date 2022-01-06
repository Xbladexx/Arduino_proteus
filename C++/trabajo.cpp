#include <iostream>

using namespace std;

float nota1 , nota2 , nota3 , nota4 , total;

int main()
{
	cout<<"Ingrese la nota1: ";
	cin>>nota1;
	cout<<"Ingrese la nota2: ";
	cin>>nota2;
	cout<<"Ingrese la nota3: ";
	cin>>nota3;
	cout<<"Ingrese la nota4: ";
	cin>>nota4;

	total=(nota1+nota2+nota3+nota4)/4;
	cout<<"Su total es: "<<total<<endl;
	return 0;
}
