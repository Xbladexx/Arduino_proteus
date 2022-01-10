#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

float   horas , precio , Sueldo, Dscto , Neto  ;
char Apellidos_nombres[100];

int main()
{
	system("cls");
	cout<<"Ingrese sus Apellidos y nombres: ";
	cin>>Apellidos_nombres;
	printf("Ingrese las horas laboradas: ");
	scanf("%f",&horas);
	printf("Ingrese el precio de las horas laboradas: ");
	scanf("%f",&precio);

	Sueldo=horas*precio;
	Dscto=Sueldo*0.12;
	Neto=Sueldo-Dscto;

	printf("El sueldo basico es: %1.f \n",Sueldo);
	cout<<"El descuento de ley es: "<<Dscto<<endl;
	printf("El neto a pagar es: %1.1f \n",Neto);
	
	getch();
	
}
