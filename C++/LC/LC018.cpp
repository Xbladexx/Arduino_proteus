#include<iostream>

using namespace std;

int H , M , S;

int main()
{     
    cout<<"Ingrese la cantidad de segundos: ";
    cin>>S;

    H = 0;
    M = 0;

    if (S >= 60)
    {
        M = (S/60);
        S = (S%60);
    }
    if (M >= 60)
    {
        H = (M/60);
        M = (M%60);
    }
    
    cout<<"Horas: "<<H<<endl;
    cout<<"Minutos: "<<M<<endl;
    cout<<"Segundos: "<<S<<endl;


    return 0;
}
