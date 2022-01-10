#include <iostream>

using namespace std; 

float numero , dato = 5;

int main()
{
	cout<<"Dirigete un numero: ";
	cin>>numero;

	if(numero <= dato){//if significa si
		cout<<"El numero es menor o igual a 5";
	}
	else{//sino
		cout<<"El numero es mayor a 5";
	}

	return 0;
}