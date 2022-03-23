//Librerias
#include <iostream>
/** Ejercicio numero 29 Capitulo 1
Convertir dolares en forma decimal al 
equivalente en monedas
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

//Dolar a 20.27 el dia 22 de marzo del 2022
using namespace std;
 
int main() 
{      
  //variables
   int r;
   //Para la respuesta r, 1 es SI y 2 es NO.
   double dolars,peso;
   //ciclo do-while
   do{
    //Pedimos cuantos dolares quiere cambiar.
   cout << " Cuantos dolares quiere cambiar a pesos?: ";
   cin>> dolars;
   //formula
   peso = dolars * 20.27;

   //Imprimimos 
   cout << " La cantidad de $" << dolars << " dolares es en peso mexicano: "<< peso <<endl;
   //Preguntamos si quiere cambiar otros dolares.
   cout << " Quieres cambiar otros dolares a pesos: ? ";
   cin>>r;

  }while(r!=2);
  
}