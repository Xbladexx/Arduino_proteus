#include<iostream>
using  namespace std;
float practica , teorica , participacion , nota;
int main()
{
    cout<<"Dirige la nota de practica: "; cin>>practica;
    cout<<"Dirige la nota de teorica: "; cin>>teorica;
    cout<<"Dirige la nota de participacion: "; cin>>participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;
    nota = practica + teorica + participacion;

    cout<<"La nota final es: "<<nota<<endl;

    return 0;
}
