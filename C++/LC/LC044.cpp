#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
string cod , cur;
char R;
float pp , ep , ef , pf , pg;
int nt=1;

void presenta(){
    system("cls");//limpiar pantalla
    cout<<"Registro de notas\n";
    cout<<"Secretaria Academica\n";
    cout<<"N°"<<nt<<"\n";
    cout<<"---------------------------------------------------\n";
}
void prom(){
    cout<<"---------------------------------------------------\n";
    pf=(pp+ep+ef)/3;
    cout<<"El promedio Final es: "<<pf<<"\n";
    cout<<"---------------------------------------------------\n";
    pg = pg + pf;
}
void promg(){
    pg=pg/(nt - 1);
    cout<<"---------------------------------------------------\n";
    cout<<"Promedio general: "<<pg<<"\n";
    cout<<"---------------------------------------------------\n";
}

int main()
{
    cout<<"Desea ingresar: ";
    cin>>R;
    while (R =='s' || R=='S')
    {
        presenta();
        cout<<"Ingrese codigo: ";
        cin>>cod;
        cout<<"Ingrese curso: ";
        cin>>cur;
        cout<<"Ingrese promedio de practicas: ";
        cin>>pp;
        cout<<"Ingrese Examen parcial: ";
        cin>>ep;
        cout<<"Ingrese Examen final: ";
        cin>>ef;

        prom();
        cout<<"¿Deseas continuar[s|n]?: ";
        cin>>R;

        nt=nt+1;
    }
    
        promg();

    return 0;
}
