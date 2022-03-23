//Librerias
#include <iostream>

/**Ejercicio numero 22 del capitulo 1
 * Introducir un entero positivo N, encontrar la 
 * suma de los N enteros, Imprimir cada uno de los enteros
 * y la suma.
 * */

//@Author JuanAispuro
//@Date   20 Mar 2022
using namespace std;
int main()
{
  //Variables
    int n,suma,i;
    //Pedimos la cantidad de numeros
    cout<< "Ingrese la cantidad de numeros positivos a sumarse: ";
    cin>>n;
    suma = 0;
    //ciclo for para la suma.
    for(i=1;i<n;i=i+1)
    {
        suma = suma+i;
        cout<<i<<endl;
    } 
  cout << " Los numeros son: "<<n << " La suma es: " <<suma;
}
