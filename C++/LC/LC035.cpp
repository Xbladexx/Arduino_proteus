#include<iostream>
using namespace std;
int Num , Digi;
int main()
{
    cout<<"Ingrese un numero: ";
    cin>>Num;

    while ( Num > 0  )
    {
        Num-- ;
        Digi = Digi*10;
        Digi = Num%10;
        cout<<Digi<<endl;
        Num = Num / 10;
        
    }
    
    
    return 0;
}
