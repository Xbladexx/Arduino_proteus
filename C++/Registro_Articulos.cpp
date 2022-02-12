
#include <iostream> 
#include <fstream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include <climits>
#include <vector>
using namespace std;

class Articulo {
public:
    string referencia;
    string nombre;
    int existente;
    int compra;
    int venta;

    Articulo() {}
    bool operator==(const Articulo &articulo) const{
        return this==&articulo || this->referencia==articulo.referencia;
        }
    bool operator<(const Articulo &articulo) const{
        return this->referencia<articulo.referencia;
        }
    Articulo& operator=(const Articulo &articulo){
        if (this!=&articulo){
            this->referencia = articulo.referencia;
            this->nombre = articulo.nombre;
            this->existente = articulo.existente;
            this->compra = articulo.compra;
            this->venta = articulo.venta;
            }
        return *this;
       }
       
       //imprimir en pantalla
   static void imprimir (Articulo &articulo, int *contador){
        cout << "  referencia        : " << articulo.referencia.c_str() << endl;
        cout << "  nombre            : " << articulo.nombre.c_str() << endl;
        cout << "  cantidad existente: " << articulo.existente << endl;
        cout << "  precio de compra  : " << articulo.compra << endl;
        cout << "  precio de venta   : " << articulo.venta << endl;
        cout << endl;
      
        (*contador)++;
      }
      //imprimir en archivo
    static void imprimir_en_archivo (Articulo &articulo, ostream *archivo){
        *archivo << articulo.referencia.c_str() << "\t";
        *archivo << articulo.nombre.c_str() << "\t";
        *archivo << articulo.existente << "\t";
        *archivo << articulo.compra << "\t";
        *archivo << articulo.venta <<  endl;;
      
     }
};
//funciones
string leer_cadena   (const char *mensaje);
int    leer_entero   (const char *mensaje, int menor, int mayor);
bool   leer_campo    (istream &archivo, char *campo, char delimitador);
template <class T> T*   vector_buscar (vector<T> &arreglo, const T &dato);
template <class T> void vector_quitar (vector<T> &arreglo, T &dato);
template <class T> void quick_sort    (vector<T> &arreglo, int inicio=0, int fin=-1);

int main(){
    Articulo *dato, articulo;
    vector<Articulo> arreglo;
    int i, n, opcion, contador=0;
    char campo[255], ruta[] = "Lista_Articulos.txt"; //nombre del archivo .txt a crear en carpeta para almacenamiento de información
    ifstream entrada (ruta);
    if (entrada!=NULL){
        while (leer_campo (entrada, campo, '\t')){
            articulo.referencia = campo;
            leer_campo (entrada, campo, '\t');
            articulo.nombre = campo;
            leer_campo (entrada, campo, '\t');
            articulo.existente = atoi (campo);
            leer_campo (entrada, campo, '\t');
            articulo.compra = atoi (campo);
            leer_campo (entrada, campo, '\n');
            articulo.venta = atoi (campo);
            arreglo.push_back (articulo);
            }
        entrada.close();
       }
    do {
        system ("cls");
        //menu en pantalla
        cout << "\n     Programa para registrar articulos\n\n"<< endl <<"\n  MEN\351 PRINCIPAL\n" << endl << "  1. Ingresar nuevo registro" 
             << endl << "  2. Consultar registro existente"
             << endl << "  3. Modificar registro existente" << endl << "  4. Eliminar Registro existente" << endl
             << "  5. Ordenar registros existentes" << endl << "  6. Editar registros existente\n"
             << endl <<"  Nota: Para guardar los registros es necesario al final seleccionar la opci\242n: " 
             << endl << "  7. Guardar registros y Salir del sistema" << endl;
        opcion = leer_entero ("\n  Seleccione una opci\242n:", 1, 7);
        cout << endl;
        //condicionales
        // opcion 2: consulta de registros
        //aparece "no existen registros" cuando el archivo credo esta vaio
        if (arreglo.empty() && opcion!=1 && opcion!=7){
            cout << endl << "  No existen registros." << endl << endl;
            system ("  pause");
            continue;
            }
            
            // ingreso de articulo
        if (opcion<5){
            articulo.referencia = leer_cadena ("  Ingrese la referencia del articulo: ");
            dato = vector_buscar (arreglo, articulo);
            if (dato!=NULL)
                Articulo::imprimir (*dato, &contador);
            }
            //busca el articulo en archivo para ver si esta creado
            //sino, continua con el ingreso de datos
        if (dato!=NULL && opcion==1)
            cout << endl << "  Registro Existente.";
        else if (dato==NULL && opcion>=2 && opcion<=4)
            cout << endl << "  No se encontro Registro.";
        else switch (opcion){
            case 1:
                articulo.nombre = leer_cadena ("  Nombre del articulo: "); //permite ingreso de letras y nombres
                articulo.existente = leer_entero ("  Ingrese cantidad existente: ", 0, INT_MAX); //ingreso de enteros
                articulo.compra = leer_entero ("  Ingrese precio de compra: ", 0, INT_MAX);  //ingreso de enteros
                articulo.venta = leer_entero ("  Ingrese precio de venta: ", 0, INT_MAX); //ingreso de enteros
                arreglo.push_back (articulo);
                cout << endl << "  Registro agregado correctamente.";
                break;
            case 3:
                 //modificar campos ya guardados en archivo
                cout << "\n  Men\243 de modificaci\242n de campos\n" << endl;
                cout << "  1.- Nombre del articulo" << endl;
                cout << "  2.- Cantidad existente" << endl;
                cout << "  3.- Precio de compra" << endl;
                cout << "  4.- Precio de venta" << endl;
                switch (leer_entero ("\n  Seleccione un n\243mero de campo a modificar: ", 1, 4)){
                    case 1:
                        dato->nombre = leer_cadena ("  Ingrese el nombre del articulo: ");
                        break;
                    case 2:
                        dato->existente = leer_entero ("  Ingrese cantidad existente; ", 0, INT_MAX);
                        break;
                    case 3:
                        dato->compra = leer_entero ("  Ingrese precio de compra: ", 0, INT_MAX);
                        break;
                    case 4:
                        dato->venta = leer_entero ("  Ingrese precio de venta: ", 0, INT_MAX);
                        break;
                    }
                cout << endl << "  Registro actualizado correctamente."; // informa que los datos se registraron en archivo
                break;
            case 4:
                vector_quitar (arreglo, *dato); //informa que el registro del articulo fue aliminado
                cout << endl << "  Registro borrado correctamente.";
                break;
            case 5:
                quick_sort (arreglo); //indica que los datos en archivo fueron ordenados
                cout << endl << "  Registros ordenados correctamente.";
                break;
            case 6:
                n = arreglo.size();
                contador = 0;
                for (i=0; i<n; i++) //suma los registros en el archivo
                    Articulo::imprimir (arreglo[i], &contador);
                cout << "  Total de registros: " << contador << ".";
                break;
            }
        if (opcion<7 && opcion>=1){
            cout << endl << endl;
            system ("  pause");
            }
      } while (opcion!=7);
    ofstream salida (ruta);
    if (salida!=NULL){
        n = arreglo.size();
        for (i=0; i<n; i++)
            Articulo::imprimir_en_archivo (arreglo[i], &salida);
        salida.close();
    }
    return EXIT_SUCCESS;
}
//vectos para busqueda de informacion ya registrada en archivo
template <class T>
T* vector_buscar (vector<T> &arreglo, const T &dato){
    int i, n=arreglo.size();
    for (i=0; i<n; i++)
        if (dato==arreglo[i])
            return &arreglo[i];
    return NULL;
}
//vector para elminar datos registrados
template <class T>
void vector_quitar (vector<T> &arreglo, T &dato){
    int i, n=arreglo.size();
    for (i=0; i<n; i++)
        if (dato==arreglo[i])        {
            arreglo.erase (arreglo.begin()+i);
            return;
            }
    }
//vector que valida numeros negativos
template <class T>
void quick_sort (vector<T> &arreglo, int inicio, int fin){
    int menor = inicio, mayor;
    if (fin==-1)
        fin = arreglo.size()-1;
    mayor = fin;
    T pivote;
    if (fin>inicio){
        for (pivote=arreglo[(inicio+fin)/2]; menor<=mayor;){
            for (; menor<fin && arreglo[menor]<pivote; menor++);
            for (; mayor>inicio && pivote<arreglo[mayor]; mayor--);
            if (menor<=mayor){
                pivote = arreglo[menor];
                arreglo[menor] = arreglo[mayor];
                arreglo[mayor] = pivote;
                menor++;
                mayor--;
               }
            }
        if (inicio<mayor)
            quick_sort (arreglo, inicio, mayor);
        if (menor<fin)
            quick_sort (arreglo, menor, fin);
        }
    }
// valida cualquier caracter
string leer_cadena (const char *mensaje){
    char cadena[255];
    cout << mensaje << "";
    cin.getline (cadena, sizeof (cadena));
    char *salto = strchr (cadena, '\n');
    if (salto!=NULL)
        *salto = '\0';
    string str(cadena);
    return str;
    }
//valida solo enteros
int leer_entero (const char *mensaje, int menor, int mayor){
    int entero;
    do {
        cout << mensaje << " ";
        cin >> entero;
        cin.get();
        if (entero<menor || entero>mayor)
            cout << "  N\243mero no v\240lido." << endl;
      } while (entero<menor || entero>mayor);
    return entero;
    }
//valida campos en archivo
bool leer_campo (istream &archivo, char *cadena, char delimitador){
    archivo.getline (cadena, 255, delimitador);
    if (archivo.eof())
        return false;
    char *tab = strchr (cadena, delimitador);
    if (tab!=NULL)
        *tab = '\0';
    return true;
}