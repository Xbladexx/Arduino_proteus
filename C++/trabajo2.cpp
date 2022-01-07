#include <iostream>

using namespace std;

float sueldo , nombre , horas , precio;

int main()
{
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese las horas laborales: ";
	cin>>horas;
	cout<<"Ingrese el precio de las horas laborales: ";
	cin>>precio;

	sueldo=horas*precio;
	cout<<"Su sueldo es: "<<sueldo<<endl;
	return 0,
}