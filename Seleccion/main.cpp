
#include <iostream>
using namespace std;
int main() {
  cout << "Algoritmo de ordenamiento de seleccion\n";
  int arreglo1[]={3,2,1,5,4};
  int i,j,aux,min;
  for (i=0;i<5;i++)
  {
     cout<<"|"<<arreglo1[i]<<"|";
  }
  cout<<endl;
  for (i=0;i<5;i++)
  {
    min=i;
    for(j=i;j<5;j++)
    {
      if(arreglo1[j]<arreglo1[min])
      {
        min=j;
      }
    }
    aux=arreglo1[i];
    arreglo1[i]=arreglo1[min];
    arreglo1[min]=aux;
  }
  for(i=0;i<5;i++)
  {
    cout<<"|"<<arreglo1[i]<<"|";
  }
  return 0;
}

