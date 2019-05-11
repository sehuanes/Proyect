#include <iostream>
#include <math.h>
#define g 9.8
#define pi 3.1415

using namespace std;


void Parabolico()
{
	float Y0=0, V0=0, alfa=0, VY=0, VX=0, X=0, Y=0, T=0, Q=0,E,E1,E2;
	
	cout<<"cual es la posicion inicial en y: ";
	cin>>Y0;
	cout<<"cual es el angulo: ";
	cin>>alfa;
	cout<<"cual es la velocidad inicial: ";
	cin>>V0;
	cout<<"ingrese un tiempo en segundos: ";
	cin>>T;
	
	Q=T;
	T=0;
	
	for(int i=0;i<=Q/0.5;i++) 
	{
		X=V0*cos((alfa*pi)/180)*T;
		Y=Y0+V0*sin((alfa*pi)/180)*T-0.5*g*pow(T,2);
		E=Y;
		if (E<0)
		{
			E=0;
		}
		
		VX=V0*cos((alfa*pi)/180);
		E1=VX;
		if (E1<0)
		{
			E1=0;
		}
		VY=V0*sin((alfa*pi)/180)-g*T;
		E2=VY;
		if (E2<0)
		{
			E2=0;
		}
		
		cout<<"la posicion en X es: "<< X <<" en T: "<< T <<endl;
	    cout<<"la posicion en Y es: "<< E <<" en T: "<< T <<endl;
		cout<<"la velocidad en X es: "<< E1 <<endl;
		cout<<"la velocidad en Y es: "<< E2 <<endl<<endl;	
		T=T+0.5;
	}
	
    system("PAUSE");
}
