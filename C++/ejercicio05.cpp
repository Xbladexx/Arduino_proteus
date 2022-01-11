#include <iostream>

using namespace std;

char letra;

int main()
{
	cout<<"Dirigete un caracter: ";
	cin>>letra;


	switch(letra){ 
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es un vocal minuscula"; break;
		default : cout<<"No es una vocal minuscula"; break;
	}

	return 0;
}