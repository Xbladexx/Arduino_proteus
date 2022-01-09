#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

float precio , Sueldo, Dscto , Neto , horas;
char Apellidos y nombres[100];

int main()
{
	system("cls");
	cout<<"Ingrese sus Apellidos y nombres: ";
	cin>>Apellidos y nombres;
	printf("Ingrese las horas laboradas: ");
	printf("%f",&horas);
	printf("Ingrese el precio de las horas laboradas: ");
	printf("%f",&precio);

	Sueldo=horas*precio;
	Dscto=Sueldo*0.12;
	Neto=Sueldo-Dscto;

	printf("El sueldo basico es: %1.f \n",Sueldo);
	cout<<"El descuento de ley es: "<<Dscto<<endl;
	printf("El neto a pagar es: %1.f \n",Neto);

	getch();
}