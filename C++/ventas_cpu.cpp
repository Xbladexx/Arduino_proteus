#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
using namespace std;
float IGV, x , p , m , r , d , t , c , mo , u , te , es, subtotal, solestotal , v , total , otros;
void dolar()
{
    cout<<"\nPor el momento todos los precios a ingresar con sin IGV puede ponerse otros producto diferente a los que dice la idea es que se van a comprar juntos todos los items la factura tiene 8 espacios, se pueden llenar con ceros. \n\n";
}

int main()
{
    system("CLS");
    cout<<"Tipo de cambio de la pagina: \t";
    cin>>x;
    dolar();
    cout<<"Placa Madre: \t\t";
    cin>>m;
    cout<<"Procesador 'CPU': \t";
    cin>>p;
    cout<<"Memoria 'RAM': \t\t";
    cin>>r;
    cout<<"Disco duro: \t\t";
    cin>>d;
    cout<<"Tarjeta de video: \t";
    cin>>t;
    cout<<"Case: \t\t\t";
    cin>>c;
    cout<<"Monitor: \t\t";
    cin>>mo;
    cout<<"Otros\n";
    cout<<" -Unidad Optica: \t";
    cin>>u;
    cout<<" -Teclado/Mouse: \t";
    cin>>te;
    cout<<" -Estabilizador: \t";
    cin>>es;
    otros = u + te + es;
    subtotal =  m + p + r + d + t + c + mo + u + te + es;
    solestotal = subtotal*x; 
    IGV =solestotal*0.18;
    total = solestotal + IGV;
    cout<<"Precio Neto en dolar: \t"<<subtotal<<endl;
    cout<<"Precio Neto en soles: \t"<<solestotal<<endl;
    cout<<"Precio IGV: \t\t"<<IGV<<endl;
    cout<<"Total inc. IGV: \t"<<total<<endl;
    cout<<"\nPara ventas ingresar un valor mayor al sugerido caso contrario ingrese un valor menor o cero.\n";
    
    ofstream archivo;
    archivo.open("registro.txt");
    archivo<<"===============================================================\n";
    archivo<<"               FACTURA/BOLETA(COMPRA PERSONAL)\n";
    archivo<<"===============================================================\n";
    archivo<<"Placa madre:________________________ "<<"$"<<m<<" (S./"<<m*x<<")"<<endl;
    archivo<<"Procesador'CPU':____________________ "<<"$"<<p<<" (S./"<<p*x<<")"<<endl;
    archivo<<"Memoria 'RAM':______________________ "<<"$"<<r<<" (S./"<<r*x<<")"<<endl;
    archivo<<"Disco duro:_________________________ "<<"$"<<d<<" (S./"<<d*x<<")"<<endl;
    archivo<<"Tarjeta de video:___________________ "<<"$"<<t<<" (S./"<<t*x<<")"<<endl;
    archivo<<"Case:_______________________________ "<<"$"<<c<<" (S./"<<c*x<<")"<<endl;
    archivo<<"Monitor:____________________________ "<<"$"<<mo<<" (S./"<<mo*x<<")"<<endl;
    archivo<<"Otros:______________________________ "<<"$"<<otros<<" (S./"<<otros*x<<")"<<endl;
    archivo<<"Sub-total(dolar):___________________ "<<"$"<<subtotal<<endl;
    archivo<<"Sub_total(soles):___________________ "<<"S./"<<solestotal<<endl;
    archivo<<"IGV (18%):__________________________ "<<"S./"<<IGV<<endl;
    archivo<<"Total:______________________________ "<<"S./"<<total<<endl;
    archivo.close();
    getch();
    system("start registro.txt");

    return 0;
}
