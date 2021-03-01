#include <iostream>
#include<fstream>
using namespace std;


int main()
{
    int a[]={4,3,2,1,5};
    int pos,aux;
    ofstream archivo;
    archivo.open("ordenamiento.txt",ios::app);

    for(int i=0;i<5;i++)
    {
        pos=i; //se almacena el 0
        aux=a[i];  //se almacena el 4
        while((pos>0)&&(a[pos-1]>aux))
        {
            a[pos]=a[pos-1];
            pos--;
        }
        a[pos]=aux;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"|"<<a[i]<<"|";

        archivo<<"|"<<a[i]<<"|";
    }
    cout<<"revisa tu archivo";

    return 0;
    archivo.close();
}
