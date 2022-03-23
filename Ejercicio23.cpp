//Librerias
#include <iostream>

/**Ejercicio numero 22 del capitulo 1
 * Introducir un entero positivo N. Calcular e imprimir
 * el producto de los numeros pares.
 * */

//@Author JuanAispuro
//@Date   20 Mar 2022
using namespace std;
int main()
{
    //Variables
    int n,producto,i;
    int R=1;
    //Pedimos cuantos numeros quiere ingresar.
    cout<< " Cuantos numeros quiere ingresar: ";
    cin>>i;
    producto=1;
    //ciclo while
    while(R<=i)
    {
       cout<<"\n";
       //Pedimos el valor que se desea checar.
        cout<< "Ingrese un valor: ";
        cin>>n;
        //identificador si son pares.
        if(n % 2 == 0)
        { 
          producto=producto*n;
          cout<<"\n";
          cout<<"PAR";
           R++;
        }
        else
        {
            R++;
        }
    }
    //Producto de los numeros pares.
    cout<< " El producto de los numeros pares es: ";
    cout<<producto;
    return 0;
}


