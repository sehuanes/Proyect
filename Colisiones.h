#include <iostream>
#include <math.h>

using namespace std;

void Colisiones_Elasticas()
{
  float M1=0,M2=0,V01=0,V02=0,VF1=0,VF2;                                        
  
  cout << "que valor tiene la masa1: ";
  cin >>M1;
  cout << "que valor tiene la masa2: ";
  cin >>M2;
  cout << "Ingrese la velocidad inicial de la masa 1 ";
  cin >>V01;
  cout << "Ingrese la velocidad inicial de la masa 2 ";
  cin >>V02;

  if (V02==0)
    {

        VF1= ((M1-M2)/(M1+M2))*V01;
        VF2= ((2*M1)/(M1+M2))*V01;
    }

  else
    {
        VF1=((M1-M2)/(M1+M2))*V01+((2*M2)/(M1+M2))*V02;
        VF2=((2*M1)/(M1+M2))*V01-((M1-M2)/(M1+M2))*V02;

    }

     cout << "la velocidad final de la masa 1 es: "<< VF1 << endl;
     cout << "la velocidad final de la masa 2 es: "<< VF2 << endl;
     system("PAUSE");
}
