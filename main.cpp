#include <iostream>
#include "archivos.h"
using namespace std;

int main() {
    int day;

    cout<<"Ingrese un numero del 1 al 7:";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Lunes, dia laboral"<<endl;
            break;
        case 2:
            cout<<"Martes, dia laboral"<< endl;
            break;
        case 3:
            cout<<"Miercoles, dia laboral"<<endl;
            break;
        case 4:
            cout<<"Jueves, dia laboral"<<endl;
            break;
        case 5:
            cout<<"Viernes, dia laboral"<< endl;
            break;
        case 6:
            cout<<"Sabado, dia laboral"<<endl;
            break;
        case 7:
            cout <<"Domingo, dia no laboral"<<endl;
            break;
        default:
            cout<<"Dia no existente"<<endl;

    }


    leerarchivo("C:\\Parcial.txt");
    cout<<endl;
    modificararchivo("C:\\Parcial.txt");
    cout<<endl;
    leerarchivo("C:\\Parcial.txt");
    cout<<endl;

    cout<<"Fin del programa"<<endl;
    return 0;


}


