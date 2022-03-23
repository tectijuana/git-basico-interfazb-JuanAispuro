//Librerias
#include <iostream>
/** Ejercicio numero 30 Capitulo 1
Convertir P libras inglesas, S chelines y E peniques
 a D dolares y C centavos
 Usando el tipo de cambio $2.90 = 1 libra, 
1 libra es 20 chelines,
1 chelin es 12 peniques.
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
   int r;
   //Para la respuesta r, 1 es SI y 2 es NO.
   double dolars,dolars1,dolars2;
   double libras,chelines,peniques;
   double centavos,centavos1,centavos2;
   double libras2,chelines2,peniques2;
   
  do{
  /////Dolares
  cout << " ----------- Dolares -------- "<<endl;
  //libras
   cout << " Cuantas libras inglesas quiere cambiar a dolares?: ";
   cin>> libras;
   dolars = libras * 2.80;
   //chelines
   cout << " Cuantos chelines quiere cambiar a dolares?: ";
   cin>> chelines;
   dolars1 = chelines * 0.14;
   //Peniques
   cout << " Cuantos peniques quiere cambiar a dolares?: ";
   cin>> peniques;
   dolars2 = peniques * 0.0116;

     //Centavos
     //libra
     cout<< " -------------- Centavos ------------- " <<endl;

     cout << " Cuantas libras inglesas quiere cambiar a centavos?: ";
     cin>> libras2;
     centavos = libras2 * 280;
 //Chelines
  cout << " Cuantos chelines quiere cambiar a centavos?: ";
   cin>> chelines2;
 centavos1 = chelines2 * 14;
//Peniques
  cout << " Cuantos peniques quiere cambiar a centavos?: ";
   cin>> peniques2;
 centavos2 = peniques2 * 1.16;

     cout << " ----------- Dolares -------- "<<endl;
     cout << " La cantidad de " << libras << " libras es en dolares : "<< dolars << " dolares." <<endl;
     cout << " La cantidad de " << chelines << " chelines es en dolares : "<< dolars1 << " dolares." <<endl;
     cout << " La cantidad de " << peniques << " penique es en dolares : "<< dolars2 << " dolares." << endl;

     cout<< " -------------- Centavos ------------- " <<endl;
     cout << " La cantidad de " << libras2 << " libras es en centavos de dolar es : "<< centavos << " Centavos." <<endl;
     cout << " La cantidad de " << chelines2 << " libras es en centavos de dolar es : "<< centavos1 << " Centavos." <<endl;
     cout << " La cantidad de " << peniques2 << " libras es en centavos de dolar es : "<< centavos2 << " Centavos." << endl;

   //Si quiere volver a verficiar numeros.
   cout<< "--------- 1 es SI y 2 es NO ----------"<<endl;
   cout << " Quieres cambiar otros dolares a pesos: ? ";
   cin>>r;

  }while(r!=2);
  
}