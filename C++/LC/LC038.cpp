#include<iostream>
using namespace std;
int seleccion;
int main()
{
    while ((seleccion<1) || (seleccion>3))
    {
        cout<<"Seleccione el departamento"<<endl;

        cout<<"1. Contabilidad"<<endl;

        cout<<"2. Ingenieria"<<endl;

        cout<<"3. Marketing"<<endl;

        cout<<"¿Seleccione el area?"<<endl;

        cin>>seleccion;

    }
    switch (seleccion)
    {
    case(1):
        cout<<"Alejandro Sanz"<<endl;break;
    case(2):
        cout<<"Britney Spears"<<endl;break;
    case(3):
        cout<<"Bob Marley"<<endl;break;
    }
   
    cout<<"Identificacion correcta"<<endl;
    
    return 0;
}
