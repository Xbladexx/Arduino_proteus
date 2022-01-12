#include <iostream>
#include <conio.h>

using namespace std;

int n,suma=0;

int main()
{
	cout<<"Dirigete un numero: ";
	cin>>n;


	for(int i=1;i<=n;i++)
	{

		suma+= i;
	}
	cout<<"\nLa suma es: "<<suma<<endl;

	getch();
	return 0;
}