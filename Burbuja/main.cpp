#include <iostream>
using namespace std;
#define tam 200

void ingresar (int a[], int n);
void ordenar (int a[], int n);
void imprimir (int a[], int n);

int main()
{
    int arreglo[tam];
    int n;
    cout<<"Cuanta notas va ingresara: ";
    cin>> n;
    ingresar(arreglo, n);
    cout<<endl;
    ordenar(arreglo, n);
    cout<<endl;
    imprimir(arreglo, n);
    cout<<endl;
    return 0;
}


void ingresar (int a[], int n)
{
  int prom=0,tt;
  int acu2=0,acu3=0,acu4=0;
  for (int i=0;i<n;i++)
  {
    cout<<"Ingrese un valor:";
    cin>>a[i];
    prom=prom+a[i];
  }
}
//Ordenamiento burbuja//
void ordenar (int a[], int n)
{
  int aux;
  for (int i=0;i<n;i++)
   {
    for (int j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
      {
          aux=a[i];
          a[i]=a[j];
          a[j]=aux;
      }
    }

   }
}

void imprimir (int a[], int n)
{
  int i;
  cout<<"Los valores ordenados son:"<<endl;
  for (int i=0;i<n;i++)
   {
       cout<<"|"<<a[i]<<"|";
   }
}
