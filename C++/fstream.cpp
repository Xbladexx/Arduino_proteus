#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    char cadena[20];//Crea la variable con 128 caracteres
    ofstream fs("nombre.txt");//crear el archivo a guardar
    fs <<"Hola, mundo"<<endl;//escribe en el bloc de notas
    fs.close();//cierra la escritura
    ifstream fe("nombre.txt");//autoriza la lectura
    fe.getline(cadena,20);//obtien los caracteres de bloc de notas y lo almacena en la variable con 20 carateres    cout<<cadena<<endl;
    getch();//pausa
    system("start nombre.txt");//abre en archivo en un bloc de notas
    return 0;
}
