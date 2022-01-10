#include<iostream>
#include<string.h>
#include<conio.h>// getch();

using namespace std;

char nombre[50]= "juan", nombre01[50], nombre04[50], nombre05[50];
string nombre03 ("PEDRO espero que estes bien"), nombre02 = "ALEXA como has estado";
float numero (5), numero1 = 3;

int main(){

cout<<"Escriba el primer nombre: "; gets(nombre01);//Dominante
cout<<"Escriba el nombre: "; gets(nombre04);//el gets solo puede ser usado con char
cout<<"Escriba el una palabra: "; gets(nombre04);//el gets solo puede ser usado con char
cout<<"Escriba el segundo nombre: "; cin>>nombre05; //dominado


cout<<"El nombre que ingresaste es: "<<nombre01<<endl;
cout<<"Hola "<<nombre<<endl;
cout<<"Hola "<<nombre02<<endl;
cout<<"Hola "<<nombre03<<endl;
cout<<"Hola "<<nombre04<<endl;
cout<<"Hola "<<nombre05<<endl;
cout<<numero<<endl;
cout<<numero1<<endl;
getch(); //Pone en pausa el programa
return 0;
}