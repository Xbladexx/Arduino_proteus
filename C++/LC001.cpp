#include <iostream>

using namespace std;

float A , B , S , R , P , D;

int main()
{
	cout<<"Ingrese valor de A: ";
	cin>>A;
	cout<<"Ingrese valor de B: ";	
	cin>>B; 

	S=A+B;
	R=A-B;
	P=A*B;
	D=A/B;

	cout<<S<<endl;
	cout<<"El resultado de S: "<<S<<endl;
	cout<<R<<endl;
	cout<<"El resultado de R: "<<R<<endl;
	cout<<P<<endl;
	cout<<"El resultado de P: "<<P<<endl;
	cout<<D<<endl;
	cout<<"El resultado de D: "<<D<<endl;

	return 0;
}