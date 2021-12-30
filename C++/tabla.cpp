#include <iostream>
float Valor, Num, Resu, Valor1, Num1, Resu1;

using namespace std;
void Multiplicacion()
{
	cout<<"Tabla del: ";
	cin>>Num1;
	for (int Valor1 = 1; Valor1 <=12; ++Valor1)
	{
		Resu1=Valor1*Num1;
		cout<<Num1<<" x "<<Valor1<<" = "<<Resu1<<endl;
	}
}

void suma()
{
	cout<<"Tabla del: ";
	cin>>Num1;
	for (int Valor1 = 1; Valor1 <=12; ++Valor1)
	{
		Resu1=Valor1+Num1;
		cout<<Num1<<" + "<<Valor1<<" = "<<Resu1<<endl;
	}
}
void resta()
{
	cout<<"Tabla del: ";
	cin>>Num1;
	for (int Valor1 = 1; Valor1 <=12; ++Valor1)
	{
		Resu1=Valor1-Num1;
		cout<<Num1<<" - "<<Valor1<<" = "<<Resu1<<endl;
	}
}
void division()
{
	cout<<"Tabla del: ";
	cin>>Num1;
	for (int Valor1 = 1; Valor1 <=12; ++Valor1)
	{
		Resu1=Valor1/Num1;
		cout<<Num1<<" / "<<Valor1<<" = "<<Resu1<<endl;
	}
}

int main()
{
    /*	
	cout<<"Tabla del: ";
	cin>>Num;
	for (int Valor = 1; Valor <=12; ++Valor)
	{
		Resu=Valor*Num;
		cout<<Num<<" x "<<Valor<<" = "<<Resu<<endl;
	}
	*/

	while (true)
	{ 
	char respuesta;
	
	cout<<"Ingrese opcion de tabla: ";
	cin>>respuesta;

	if (respuesta=='s'||respuesta=='S')
	{
		suma();
	}

	if (respuesta=='r'||respuesta=='R')
	{
		resta();
	}

	if (respuesta=='m'||respuesta=='M')
	{
		Multiplicacion();
	}
	
	if (respuesta=='d'||respuesta=='D')
	{
		division();
	}
	char StrRp; //crea una variable de tipo caracte llamado StrRp
	cout << "Continua S/N:"; //imprime en pantalla el mensaje (continua S/N)
	cin >> StrRp; //Almacena el caracter propuesto en la variable StrRp

	if (StrRp == 's' || StrRp == 'S') // entonces compara StrRp si es igual s |o| S 
		    ; // va continuar el pograma 
	else if (StrRp == 'n' || StrRp == 'N')
	
		break;// el pograma se termina
	else 
		   cout<< "Letra equivocada. \nContinuamos."<<endl;
	
	
	 }
	 return 0;
}


