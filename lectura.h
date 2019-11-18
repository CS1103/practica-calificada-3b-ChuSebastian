#include "Includes.h"

string datos, datos2;
vector <int> vD;
vector <string> vL;
vector <int> vR;
int numeros, numeros2;
string letra;
void lectura() {

    ifstream archivo;
    archivo.open("rectangulos.in.txt");

    if (archivo.fail()) {
        cout << "No se puede leer el archivo" << endl;
        exit(1);
    }


    getline(archivo, datos); //lee la primera linea del archivo
    stringstream s(datos); // transforma los datos en enteros

    while(s >> numeros){ // almacena los datos en el vector vD
        vD.push_back(numeros);
    }

    // El primer elemento del vector sera el que establece la cantidad de lineas que se leeran en el archivo
    // El segundo elemento del vector almacena el numero de filas del tablero
    // El tercer elemento del vector almacena el numero de columnas del tablero

    auto x = vD[0]; // Limita la cantidad de lineas que se leen en el archivo

    for(auto i = 0; i < x; i++){
        getline(archivo, letra, ' ');
        vL.push_back(letra);

        getline(archivo, datos2, '\n');
        stringstream ss (datos2);
        while(ss >> numeros2){
            vR.push_back(numeros2);
        }

    }



    archivo.close();

}

