#include<iostream>// cout , cin
#include<conio.h> //Pertenece con getch();
#include<stdio.h>//printf , scanf
#include<cstdlib> //System("cls"); --- system("pause");
using namespace std;
float a,b,c;
int main()
{
	
	system("cls");//Limpiar pantalla
	printf("Ingrese un numero: ");
	scanf("%f",&a);
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	c=a+b;
	printf("El resultado es:  %1.f \n",c );
	cout<<"El resultado es: "<<c<<endl;
	getch();
	//system("pause");
	
}