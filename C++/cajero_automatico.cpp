#include <iostream>
#include <cstdlib>

using namespace std; 

int  saldo_inicial = 1000,opc;

float extra,saldo = 0,retiro;


int main()
{
	system("cls");
	cout<<"\tBienvenido a su cajero virtual" <<endl;
	cout<<"1. Ingresar dinero en cuenta" <<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. salir" <<endl;
	cout<<"opcion: ";
	cin>>opc;


	switch(opc){
		case 1:
		cout<<"Dirigete la cantidad de dinero a ingresar: ";
		cin>>extra;
		saldo = saldo_inicial + extra;
		cout<<"Dinero en  cuenta: "<<saldo; break;

		case 2:
		cout<<"Dirigete la cantidad de dinero que va a retirar: ";
		cin>>retiro;

		if (retiro > saldo_inicial)
		{
			cout<<"No tiene esa cantidad de dinero";
		}
		else {
			saldo= saldo_inicial - retiro;
			cout<<"\nDinero en cuenta: "<<saldo;break;

			saldo= saldo_inicial - retiro;
			cout<<"\nDinero en cuenta: "<<saldo;break;

		}
		case 3:break;

        }


	return 0;
}