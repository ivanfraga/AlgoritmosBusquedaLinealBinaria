#include <iostream>
#include <fstream>

using namespace std;

int busqueda (int a[], int n, int dato);


int main()
{
  int dato;
  ofstream Drago;
  Drago.open("datos.txt",ios::app);
  cout << "Digite el numero a buscar: ";
  cin >> dato;

    int a[5]={4,1,3,2,5};

    if (busqueda(a,5,dato)== -1)
    {
        cout<<"ELEMENTO NO ENCONTRADO";
    }
    else
    {
        cout<<"ELEMENTO ENCONTRADO EN LA POSICIÓN : "<<busqueda(a,5,dato);
    }
    Drago << "a[5]={4,1,3,2,5}" << " " << dato << " " << busqueda(a, 5, dato);

    return 0;
}



int busqueda (int a[], int n, int dato)
{

    for (int i=0 ; i<=n; i++)
    {
            if (a[i] == dato)
                {
                    return i;
                }
    }

    return -1;
}