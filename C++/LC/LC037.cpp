#include<iostream>
using namespace std;
char Apenom[100] , curso [100] , Rp = 'S';
float prom , suma = 0 , promp;
int Ncur = 0;

int main()
{
    cout<<"Apellidos y nombres: ";
    cin>>Apenom;

    while (Rp == 'S')
    {
        cout<<"Nombre del curso: ";
        cin>>curso;
        cout<<"Promedio del curso: ";
        cin>>prom;

        suma = suma + prom;
        Ncur = Ncur + 1;

        cout<<"Registrar otro curso (S/N): ";
        cin>>Rp;
    }

    promp = suma/Ncur;
    cout<<"Promedio ponderado: "<<promp<<endl;
    
    return 0;
}
