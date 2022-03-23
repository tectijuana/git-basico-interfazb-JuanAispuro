//Librerias
#include <iostream>
/** Ejercicio numero 30 Capitulo 1
Convertir P libras inglesas a D dolares y C centavos
. Usando el tipo de cambio $2.90 = 1 libra
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
  //Variables
   int r;
   //Para la respuesta r, 1 es SI y 2 es NO.
   double dolars,libras,centavos,libras2;

   //Ciclo do-while
   do{
     //Preguntamos cuantas libras quiere
   cout << " Cuantas libras inglesas quiere cambiar a dolares?: ";
   cin>> libras;
   //formula
   dolars = libras * 2.90;
   //Preguntamos cuantas libras quiere cambiar a centavos.
   cout << " Cuantas libras inglesas quiere cambiar a centavos?: ";
   cin>> libras2;
   //Formula
   centavos = libras2 * 0.029;
   //Imprimimos los resultados
   cout << " La cantidad de " << libras << " libras es en dolares : "<< dolars <<endl;
   cout << " La cantidad de " << libras2 << " libras es en centavos de dolar es : "<< centavos <<endl;
   //Preguntamos si quiere cambiar mas veces
   cout<< "--------- 1 es SI y 2 es NO ----------";
   cout << " Quieres cambiar mas libras a dolares/centavos? ";
   cin>>r;

  }while(r!=2);
  
}