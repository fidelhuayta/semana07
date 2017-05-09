#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    //variable normal
    int x = 10;
    cout<<"el valor de x es :"<<x<<endl;  //imprimir el valor de una variable
    cout<<"la direccion de x es: "<<&x<<endl; //imprimir la direccion de un variable
    cout<<"el tamaño de x es: "<<sizeof(x)<<endl;
    
    
    //variable puntero
    int* ptrX;  //nomenclatura camello ejemplo: nombreArchivo
                //nomenclatura c       ejemplo: nombre_archivo
    
    //asignando la direccion de X al puntero ptrX            
    ptrX = &x;
    cout<<"El valor de ptrX es: "<<ptrX<<endl;
    cout<<"La direccion de ptrX es: "<<&ptrX<<endl;
    cout<<"El tamaño de ptrX es: "<<sizeof(ptrX)<<endl;
    
    return 0;
}