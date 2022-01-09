#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

float Precio , Ganancia , Pventa , Valoriza , stock ;

char Descrip[100];

int main()
{
	systeam("cls");
	cout<<"Descripcion del articulo: ";
	cin>>Descrip;
	printf("Precio de compra: ");
	scanf("%f",%Precio);
	printf("Porcentaje de Ganancia: ");
	scanf("%f",%Ganancia);
	printf("Numeros de unidades en stock: ");
	scanf("%f",%stock);

	Pventa=Precio+Precio*(Ganancia/100);
	Valoriza=Pventa*stock;

	printf("El precio de venta es: %1.f \n",Pventa);
	printf("La valorizacion es: %1.f \n",Valoriza);


	getch();
}