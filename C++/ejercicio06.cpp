#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char palabra[]="Rafael";
char palabra2[]= {'R','a','f','a','e','l'};
char nombre[30];
int main()
{
	cout<<"Dirigete su nombre: ";
	gets(nombre);

	cout<<nombre<<endl;

	getch();
	return 0;
}