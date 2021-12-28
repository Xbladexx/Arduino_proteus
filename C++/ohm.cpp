 #include<iostream>

 using namespace std;

 int main()
{
   float Amperio_total, mlA, Amp=1000000,vol,resitencia;
   cout<<"ingrese el numero en el mlA: "; cin>>mlA;
   Amperio_total = mlA/Amp;
   cout<<"ingrese el voltaje: "; cin>>vol;
   resitencia = vol/Amperio_total;
   cout<<"El Amperio es: "<<Amperio_total<<"A"<<endl;
   cout<<"la resistencia es: "<<resitencia<<" ohm"<<endl;
   return 0;
 }