#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

float practica , parcial , final , Promedio ;

char cursoAlumno[100];


int main()
{
	system("cls");
	cout<<"Nombre del alumno: ";
	cin>>Alumno;
	cout<<"Nombre del curso: ";
	cin>>Curso;
	printf("Promedio de practicas: ");
	scanf("%f",&practica);
	printf("Examen parcial: ");
	scanf("%f",&parcial);
	printf("Examen final: ");
	scanf("%f",&final);

	Promedio=((practica*2)+(parcial*1)+(final*3))/6;

	printf("Promedio final es: %1.f \n",Promedio);

	getch();
	
}