#include "Includes.h"

string datos, datos2, letra;
int numeros, numeros2;
vector <int> vD;
vector <string> vL;
vector <int> vR;

void lectura() {
    ifstream archivo;
    archivo.open("rectangulos.in.txt", ios::in);
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
        getline(archivo, letra, ' '); // lee el primer caracter
        vL.push_back(letra); // y lo almacena en un vector
        getline(archivo, datos2, '\n'); // toma todas las caracteristicas del rectangulo
        stringstream ss (datos2);// las transforma a enteros
        while(ss >> numeros2){ // y los almacena en el vector vR
            vR.push_back(numeros2);
        }
    }
    archivo.close();
}


// Separar datos de la posicion del rectangulo



// Ordenar de menor a mayor
// Primero por las coordenadas y luego por el tamaño




void escritura() {
    ofstream archivo; // crea un archivo
    archivo.open("rectangulos.out.txt", ios::out);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    vector <int>::iterator ptr;


    int a = 0, b = 0;

    for (ptr = begin(vR) + a; ptr < begin(vR) + b + 4; ptr++) {
        cout << *ptr << "  ";
    }
    cout << endl;

    

    archivo.close();
}
