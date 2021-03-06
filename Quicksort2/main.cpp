#include <iostream>
#include "quicksort.h"
#include "ingresar.h"
using namespace std;
using namespace quick;
using namespace imprimir;

int main()
{
    int A[10]= {88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    imprimirArreglo(A,10);
    cout<<endl;
    ordenar(A,0,9);
    imprimirArreglo(A,10);
    return 0;
}
