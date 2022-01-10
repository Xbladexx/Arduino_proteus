#include <iostream>
using namespace std;
float notapractica , notateorica , notaparticipacion , notaFinal ;

int main()
{
	cout<<"Ingrese la nota de la practica: ";
	cin>>notapractica;
	cout<<"Ingrese la nota teorica: ";
	cin>>notateorica;
	cout<<"Ingrese la nota de participacion: ";
	cin>>notaparticipacion;

	notapractica= notapractica * 0.30;// notapractica *= 0.30
	notateorica *= 0.60;// notateorica = notateorica * 0.60;
	notaparticipacion *= 0.10;//notaparticipacion = notaparticipacion * 0.10;

	notaFinal = notaparticipacion + notateorica + notapractica; 

	cout<<"La nota  final es: "<<notaFinal;

	return 0;
}