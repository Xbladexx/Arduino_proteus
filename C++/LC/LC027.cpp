#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int V1 , V2 , Res; 

int main()
{
    for ( V1=1 ; V1<=12 ; V1++)
    {
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Tabla del "<<V1<<endl;
    
    for ( V2=1 ; V2<=12 ; V2++)
    {
        Res = V1 * V2;
        cout<<V1<<" * "<<V2<<" = "<<Res<<endl;
    }

    }
    
    system ("pause");
    return 0;
}
