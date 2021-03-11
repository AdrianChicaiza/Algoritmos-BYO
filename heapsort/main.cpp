#include <iostream>
#include <fstream>
using namespace std;

void HeapSort(int b[],int n);

int main() {
  ofstream archivo;
  archivo.open("heapsort.txt",ios::app);
  int A[100],n;
  archivo<<"Algoritmos de ordenamiento HeapSort"<<endl;
  cout<<"Ingrese la cantidad de elemtos del arreglo:  ";
  cin>>n;
  archivo<<"Cantidad de elementos:  "<<n<<endl;
  archivo<<"Arreglo original:  ";
  for (int i=1;i<=n;i++)
  {

    cin>>A[i];
  }
  for (int i=1;i<=n;i++)
  {

    cout<<"|"<<A[i]<<"|";
    archivo<<"|"<<A[i]<<"|";

  }
  archivo<<endl;
  cout<<endl;

    HeapSort(A, n);
    archivo<<"Arreglo ordenado:  ";
    cout<<"El orden es:  ";
  for (int i=1;i<=n;i++)
  {
  cout<<"|"<<A[i]<<"|";
  archivo<<"|"<<A[i]<<"|";
  }
archivo<<endl;
archivo.close();
}


void HeapSort(int b[],int n)
{
  int valor,temp,a;
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
    {
      valor=b[j];
      a=j/2;
      while(a>0 && b[a]<valor)
      {
        b[j]=b[a];
        j=a;
        a=a/2;
      }
      b[j]=valor;
    }
    temp=b[1];
    b[1]=b[i];
    b[i]=temp;
  }
}

