//Librerias
#include <iostream>
/** Ejercicio numero 32 Capitulo 1
Determinar si un entero dado es divisible entre 2 y 5
 * */

//@Author JuanAispuro
//@Date   23 Mar 2022

using namespace std;
 
int main() 
{      
   int r;
   //Para la respuesta r, 1 es SI y 2 es NO.
   int numero;
  do{
    //Pedimos al usuario que numero desea verificar.
   cout << " Que numero entero desea verificar: ";
   cin>> numero;
   //Ponemos que si es divisible de 2 y de 5 entonces.
    if(numero%2==0  && numero%5==0 )
   {
       cout<< " Es divisible entre 2 y 5 "<<endl;
   }
   //Aqui si solo es divisible de 2.
   else if(numero%2==0)
   {
       cout <<" Es divisible entre 2"<<endl;
   }
   //Aqui si solo es divisible de 5.
   else if(numero%5==0)
   {
      cout <<" Es divisible entre 5"<<endl;
   }
   //Si no es divisible.
   else{
       cout<< "No es divisible"<<endl;
   }
   //Si quiere volver a verficiar numeros.
   cout<< "--------- 1 es SI y 2 es NO ----------"<<endl;
   cout << " Quieres verificar otros numeros?:  ";
   cin>>r;

  }while(r!=2);
  
}