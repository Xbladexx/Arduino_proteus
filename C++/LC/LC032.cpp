#include<iostream>
using namespace std;
float Ht , Tn , He , Sbasico , Bonif , Sbruto , Dscto , Sneto ;
int  N , Num;
char codigo[100];
int main()
{
    cout<<"Numero de obreros: ";
    cin>>N;

    for ( Num = 1; Num <= N; Num++)
    {
        cout<<"codigo: ";
        cin>>codigo;
        cout<<"Horas trabajadas: ";
        cin>>Ht;
        cout<<"Tarifa x hora: ";
        cin>>Tn;
        cout<<"Horas extras: ";
        cin>>He;
    }

    Sbasico = Ht * Tn + He * (Tn * 1.5);
    Bonif = Sbasico * 0.2;
    Sbruto = Sbasico + Bonif;
    Dscto = Sbruto * 0.07;
    Sneto = Sbruto - Dscto;

    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Sueldo Basico: "<<Sbasico<<endl;
    cout<<"Bonificacion: "<<Bonif<<endl;
    cout<<"Sueldo Bruto: "<<Sbruto<<endl;
    cout<<"Descuento: "<<Dscto<<endl;
    cout<<"Sueldo neto: "<<Sneto<<endl;

    return 0;
}
