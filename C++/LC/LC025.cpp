#include<iostream>
#include<stdlib.h>
using namespace std;
int Num, i , Res ;
int main()
{
    //do{ 
    cout<<"Ingresar numero : ";
    cin>>Num;
    //while((Num<1) || (Num>10));

    for ( i=1 ; i<=12 ; i++ ){
    Res= Num * i;
    cout<<Num<<" * "<<i<<" = "<<Res<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}
