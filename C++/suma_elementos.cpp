#include <iostream>
#include <conio.h>

using namespace std;

int numeros[] = {1,2,3,4,5};
int suma = 0;

int main()
{
	for(int i=0;i<5;i++)
	{
		suma += numeros[i];
	}
    cout<<"La suma de  los elementos es: "<<suma<<endl;

    getch();
	return 0;
}