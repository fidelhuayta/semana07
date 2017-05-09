#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;


int main()
{
    int numero = 20;
    string texto = "UTEC";
    
    //PUNTEROS A VARIABLES
    int* ptrNumero = &numero;
    string* ptrTexto = &texto;
    
    //imprimiendo  los valores de la variable usando operador *
    cout<<"El valor de numnero es: "<<*ptrNumero<<endl;
    cout<<"El valor de texto es: "<<*ptrTexto<<endl;

    
    return 0;
}