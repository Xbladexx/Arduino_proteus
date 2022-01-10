#include <iostream>

using namespace std; 

int numero ;

int main()
{
	cout<<"Dirigete un numero entre 1-5: ";
	cin>>numero;

	switch(numero){
		case 1: cout<<"Es el numero 1";break;//break es igual a ruptura del programa
		case 2: cout<<"Es el numero 2";break;
		case 3: cout<<"Es el numero 3";break;
		case 4: cout<<"Es el numero 4";break;
		case 5: cout<<"Es el numero 5";break;
		default: cout<<"No esta en el rango de 1-5";break;

	}

	return 0;
}