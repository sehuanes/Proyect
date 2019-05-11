#include <iostream>
#include <math.h>
#define g 9.8

using namespace std;

void Rebotes()
{
  float M=0,h=0,E=0.7,H=0,U=0,V=0;                      
  int count=0;

  cout << "Cuanto pesa la masa: ";
  cin >> M;
  cout << "Ingrese la altura inicial: ";
  cin >>h;

  H=h;

  while (H>0.1)                       
    {
       U= sqrt(2*g*h);                   
       V= E*U;                           
       count++;                          
       H= (pow(E,2*count))*h;          
       cout << "REBOTE:  "<< count <<endl;
       cout << "ALTURA: "<< H <<endl<<endl;
    }
    system("PAUSE");

}
