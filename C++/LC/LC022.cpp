#include<iostream>
using namespace std;
char Ins , Cole;
float PdnA = 0.50 , PdnB = 0.40 , Pdnc = 0.30 , PdpA = 0.25 , PdpB = 0.20 , PdpC = 0.15 , Cuota , Dscto , Importe;

int main()
  {
  	cout<<"Ingresar Colegio[N|P]: ";
  	cin>>Cole;
  	cout<<"Ingresar instituto[A|B|C]: ";
  	cin>>Ins;
  	cout<<"Ingresar precio: ";
  	cin>>Cuota;

  	switch (Ins)
  	{ 
  	case 'A' : 
  	if (Cole == 'N')
  	{
  		Dscto = Cuota * PdnA;
  	}
  	else 
  	{ 
  		Dscto = Cuota * PdpA;
  	}
  	case 'B' :
  	if (Cole == 'N')
  	{
  		Dscto = Cuota * PdnB;
  	}
  	else 
  	{
  		Dscto = Cuota * PdpB;
  	}
  	case 'C' :
  	if (Cole == 'N')
  	{ 
  		Dscto = Cuota * Pdnc; 
  	}
  	else 
  	{ 
  		Dscto = Cuota * PdpC; 
  	}
  	//default: cout<<"Categoria no establecida";break;
  	}

  	Importe= Cuota - Dscto;
  	cout<<"Importe a pagar es: "<<Importe<<endl;
  	return 0;
  }  