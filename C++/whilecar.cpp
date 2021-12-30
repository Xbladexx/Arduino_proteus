#include <iostream>
int Valor, Num, Resu;
int main ()
{
        while (true)
        {
                std::cout<<"Tabla del: ";
                std::cin>>Num;
                for (int Valor = 1; Valor<=12; ++Valor)
                {
                        Resu=Valor*Num;
                        std::cout<<Num<<" x "<<Valor<<" = "<<Resu<<std::endl;
                }

                char StrRp;
                std::cout << "Continua S/N:";
                std::cin >> StrRp;

                if (StrRp == 's' || StrRp == 'S')
                        ;
                else if (StrRp == 'n' || StrRp == 'N')
                        break;
                else
                        std::cout << "Elegiste otra letra. \nContinuamos."<<std::endl;
        }
        return 0;
}