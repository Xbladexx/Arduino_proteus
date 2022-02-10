#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    string nombre , correo , password;
    float importe , igv , porcentaje , total;

    cout<<"  WELCOME  "<<endl;
    cout<<"Enter your name: "<<endl;
    cin>>nombre;

    cout<<"Enter email: "<<endl;
    cin>>correo;

    cout<<"Enter password: "<<endl;
    cin>>password;

    cout<<"Enter amount: "<<endl;
    cin>>importe;

    cout<<"Enter IGV: "<<endl;
    cin>>porcentaje;

    porcentaje=porcentaje/100;
    igv=importe*porcentaje;
    total=importe+igv;

    cout<<"Su IGV es: "<<igv<<endl;
    cout<<"Su importe a pagar es: "<<total<<endl;


    ofstream archivo;
    archivo.open("registro.txt");
    archivo<<"       WELCOME      "<<endl;
    archivo<<"Username: "<<nombre<<endl;
    archivo<<"Mail: "<<correo<<endl;
    archivo<<"Password: "<<password<<endl;
    archivo<<"Amount entered: "<<importe<<endl;
    archivo<<"IGV entered: "<<porcentaje<<endl;
    archivo<<"Your IGV is: "<<igv<<endl;
    archivo<<"Your amount to pay is: "<<total<<endl;
    archivo.close();
    getch();
    system("start registro.txt");
    return 0;
}
