#include <iostream>

using namespace std;

float  horas , precio , sueldo;
char nombre[50];

int main()
{
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese las horas laboradas: ";
	cin>>horas;
	cout<<"Ingrese el precio de las horas laboradas: ";
	cin>>precio;

	sueldo=horas*precio;
	cout<<nombre<<endl;
	cout<<"Su sueldo es: "<<sueldo<<endl;

	return 0;

}


	

