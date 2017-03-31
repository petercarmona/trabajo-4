#include <iostream>

using namespace std;

int main()
{
    /*
    // ejercicio 01
    int arreglo[4];
    int tmp;

    cout<< "ingresar el valor en la posicion[0]: ";
    cin>>arreglo[0];
    cout<< "ingresar el valor en la posicion[1]: ";
    cin>>arreglo[1];
    cout<< "ingresar el valor en la posicion[2]: ";
    cin>>arreglo[2];
    cout<< "ingresar el valor en la posicion[3]: ";
    cin>>arreglo[3];

    tmp = arreglo[0];
    arreglo[0] = arreglo[3];
    arreglo[3] = tmp;

    tmp = arreglo[1];
    arreglo[1] = arreglo[2];
    arreglo[2] = tmp;

    cout<< "posicion [0]: "<<arreglo[0] <<endl;
    cout<< "posicion [1]: "<<arreglo[1] <<endl;
    cout<< "posicion [2]: "<<arreglo[2] <<endl;
    cout<< "posicion [3"posicion [0]: "<<]: "<<arreglo[3] <<endl;
    */

    //---Ejercicio 2--//
    int arreglo[10];
    int varSize = (sizeof (arreglo)/ sizeof *(arreglo));
    int tmp;
    int suma = 0;
    int mayor = -1000000;
    int mayorPos = -1;

    //declaracion del array
    for(int i=0; i<varSize; i++)
    {
        cout<< "ingresar el valor en la posicion["<<i<<"]: ";
        cin>> arreglo[i];
    }

    /*
    //swap
    for(int i=0; i<varSize/2; i++)
    {
        tmp = arreglo[i];
        arreglo[i] = arreglo[varSize - i];
        arreglo[varSize - i] = tmp;
    }
    */

    //sumatoria y mayor
    for(int i=0; i<varSize; i++)
    {
        suma += arreglo[i];
        if(mayor < arreglo[i])
        {
           mayor = arreglo[i];
           mayorPos = i;
        }
    }

    //print del arreglo
    for(int i=0; i<varSize; i++)
    {
        cout<< "posicion ["<<i<<"]: "<<arreglo[i]<<endl;
    }

    cout<< "sumatoria: "<< suma<<endl;
    cout<< "el mayor numero del arreglo es: "<< mayor <<" y su pos es["<<mayorPos<<"]"<<endl;
    return 0;
}
