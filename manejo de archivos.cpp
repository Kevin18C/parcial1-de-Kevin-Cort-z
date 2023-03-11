#include <iostream>
#include <fstream>

using namespace std;

string texto;

void leerarchivo(string directorio){
    ifstream archivo;
    archivo.open(directorio);
    if(archivo.is_open()){
        while(getline(archivo, texto)){
            cout <<"Archivo leido "<< texto << endl;
        }
        archivo.close();
    }else{
        cout<<"Archivo no encontrado";
    }



}
void modificararchivo(string directorio) {
    string numcarnet = "0909-22-121933";
    ofstream archivo;
    archivo.open(directorio, ios::app);
    if (archivo.is_open()) {
        archivo << endl << numcarnet;
        cout << "Texto agregado:" << numcarnet;
        archivo.close();
    } else {
        cout << "Error al leer el archivo";
    }

}
