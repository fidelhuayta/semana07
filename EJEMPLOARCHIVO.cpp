#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


int main()
{
    
    string narchivo;
    //deir el nombre del archivo
    
    cout<<"ingrese el nombre del archivo: "; 
    cin>>narchivo;
    
    //ofstrean es para generar archivos
    ofstream archivo (narchivo);
    
     //pedir la cantidad de numeros a generar
     
    int n;
    cout<<"ingrese el numero a generar: "<<endl;
    cin>>n;
    
    
    
    int limitante;
    
    do
    {
        cout<<"ingrese el limite: "<<endl;
        cin>>limitante;
    }
    while (limitante >= RAND_MAX);
    
    
     for (int i = 0; i<n ; i++)
    {
        //archivo<<20<<endl;
        archivo<<rand()%limitante<<endl;
    }
    
     archivo.close ();
    
    
    
    
    
    
    
    return 0;
}