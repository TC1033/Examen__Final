#include <iostream>
#include "Caja.hpp"
using namespace std;

void llenaArreglo(Caja cajas[], int cantidad){
    string mat;
    int anc, alt, lar;
    for(int i=0; i<cantidad;i++){
        cout << "Datos de la caja "<< i+1 << std::endl;
        cout<<"Material: ";
        cin>>mat;
        cout <<"Ingresa ancho, largo y alto con espacio: ";
        cin >> anc >> lar >> alt;
        /*Modifica ahora al objeto Caja de la posición i del arreglo
        con los datos recibidos*/

}

void imprimeCajas(Caja cajas[], int cantidad){
    //Implementa la función
}


int main()
{
    const int NUM = 3; //constante para el tamaño del arreglo
    //Agrega las instrucciones necesarias de acuerdo a lo que te solicitan

    return 0;
}