 #include <iostream>
 
 using namespace std;
float  vol_rele , wats_foco , rbo, IC, VRB, CT=0.7 , IB, RB,KRB,VLED=2,ILED=0.01,VRC,RC,KRC;
 int main()
 {

   while(true){
     cout<<"Ingrese el voltaje del relay: ";cin>>vol_rele;
     cout<<"Ingrese los wats del foco: ";cin>>wats_foco;
     cout<<"Ingrese la resistencia de bobina del relay: ";cin>>rbo;

     //calculo 1
     // La IC es la tensidad de corriente
     // La VB es el Voltaje de Bobina
     // La VRB es el voltaje de resistencia de bobina
     //CT Consumo del Transitor
     // IB es igual a intensidad de bobina
     // RB es igual a resistencia de base
     IC= vol_rele/rbo;
     //Calculo 2
     VRB=vol_rele-CT;
     //calculo 3
      IB=IC/wats_foco;
     //calculo 4
      RB=VRB/IB;
      KRB=RB/1000;
     //calculo 5
      VRC=vol_rele-VLED;
      RC=VRC/ILED;
      KRC=RC/1000;
     //cout.precision(2);
     cout<<"La instensidad del corriente es : "<<IC<<"A"<<endl;
     cout<<"El voltaje de la resistencia de bobina es : "<<VRB<<"V"<<endl;
     //cout.precision(2);
     cout<<"La intensidad de bobina es : "<<IB<<"A"<<endl;
     //cout.precision(0);
     cout<<"La resistencia de base es : "<<RB<<"ohm"<<endl;
     cout<<"La resistencia de base es : "<<KRB<<"k"<<endl;
     cout<<"El voltaje de resistencia del colector es : "<<VRC<<"V"<<endl;
     cout<<"La resistencia del colector es : "<<RC<<"ohm"<<endl;
     cout<<"La resistencia del colector es : "<<KRC<<"K"<<endl;

     char StrRp;
     cout<< "Continua S/N: ";
     cin>> StrRp;

     if (StrRp == 's' || StrRp == 'S') 
             ;
               
      else if (StrRp == 'n' || StrRp == 'N') 
            break;

      else 

      cout << "Elegiste la letra incorrecta. \nContinuamos."<<endl;

  
  }
return 0;
 }
