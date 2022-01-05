#include<iostream>

using namespace std;


float importe , IGV, porcentaje , total;

int main()
{
	cout<<"ingrese importe: ";
	cin>>importe;
	cout<<"ingrese IGV: ";
	cin>>porcentaje;
	porcentaje=porcentaje/100;
	IGV=importe*porcentaje;
	total=importe+IGV;

	cout<<"Su IGV es: "<<IGV<<endl;
	cout<<"Su importe a pagar es: "<<total<<endl;



	return 0;
}

