#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

void completaArreglos(int* arreglo, int cantidad)
{
for (auto i = 0; i<10; i++)
    {
        arreglo[i] = rand()%51;
    }
}


//bloque del programa
int main()
{
    int arreglo1[10];
    int arreglo2[20];
    
    completaArreglos(arreglo1, 10);
    
    completaArreglos(arreglo2, 20);
    
    for (auto i: arreglo1) 
    {
        cout<<i<<endl;
    }
    
    for (auto i: arreglo2) 
    {
        cout<<i<<endl;
    }
    
    
    
    return 0;
}