#include <iostream>
#include <conio.h>

using namespace std;

int numeros[100],n,mayor=0;

int main()
{
	cout<<"Dirigete el numero de elementos del arreglo: ";
	cin>>n;

	for (int i=0;i<n;i++)
	{
		cout<<i+1<<". Dirigete un numero: ";
		cin>>numeros[i];


		if (numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
	}

	cout<<"\nEl mayor elemento es: "<<mayor<<endl;

	getch();
	return 0;
}