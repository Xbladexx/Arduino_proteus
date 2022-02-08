#include<iostream>
#include<stdlib.h>// me crea los system("cls"); , system("PAUSE"); 
#include<conio.h>// este usa a getch() obtener caracter
#include<ctime>//crear el delay
using namespace std;
void cabecera()
{
    cout<<"------------------------------------------------------\n";
    cout<<"Instituto  de Educacion  Superior Computronic Tech\n";
    cout<<"Lideres en Computacion\n";
    cout<<"Av. Uruguay 360 - Lima\n";
    cout<<"Telefono: 424-5715/Fax323-5750\n";
    cout<<"------------------------------------------------------\n";
    cout<<"------------------------------------------------------\n";
}
void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
  //for(int inicio; final; progreso++)
}

int main()
{
    cabecera();
    cout<<"Computacion y Sistemas\n";
    delay(5);
    //getch();
    //system("PAUSE");
    system("cls");//Limpiar pantalla clear screen
    cabecera();
    cout<<"Curso libres de Computacion\n";
    return 0;
}
