#include<iostream>
using namespace std;
int Num , Nd = 0 , Z;

int main()
{
    cout<<"Ingrese numero entero: ";
    cin>>Num;

    for ( Z = 1; Z <= Num ; Z++)
    {
        if (Num%Z == 0)
        {
            //cout<<Z<<endl;
            
            //Nd = Nd + 1;
            Nd++;
        }

    }
        if (Nd > 2)
        {
            cout<<"\n No es primo";
        }
        else
        {
            cout<<"\n Si es primo";
        }   
    
    

    return 0;
}
