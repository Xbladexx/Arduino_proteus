#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>//getch()

using namespace std;
 
 int main()
 {
     string nombre, pass, correo, web;
     int edad;
    cout<<"Ingrese su nombre de usuario"<<endl;
    cin >>nombre;
    cout<<"Ingrese la pasword"<<endl;
    cin>>pass;
    cout<<"Ingres correo: "<<endl;
    cin>>correo;
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;
    cout<<"Ingrese su web"<<endl;
    cin>>web;
     web = pass - edad;
    //Imprimir recibo
    ofstream archivo;
    archivo.open("registro.txt");
    archivo <<"Nombre de usuario: "<<nombre<<endl;
    archivo<<"Pasword: "<<pass<<endl;
    archivo<<"EL correo es: "<<correo<<endl;
    archivo<<"Tu edad es: "<<edad<<endl;
    archivo<<"Tu Web es: "<<web<<endl;
    archivo.close();
    getch();
    system("start registro.txt");
    return 0;
 }
 
