#include <iostream>
#include <math.h>
#define g 9.8
#define pi 3.1415

using namespace std;

void Medio_Viscoso()
{
  float y0=0,v0=0,alfa=0,vy=0,vx=0,x=0,y=0,t=0;                          //variables sin friccion

  float m=0,r=0,k=0,aux=0;
  
  float Vm=0,theta=0,ax=0,ay=0,X=0,Y=0,vX=0,vY=0;                         //variables con friccion

  cout << "ingrese la masa";
  cin >> m;
  cout << "ingrese el radio del cuerpo";
  cin >> r;
  cout << "ingrese el coeficiente de friccion ";
  cin >> k;
  cout << "ingrese posicion inicial en y";
  cin >> y0;
  cout << "ingrese angulo de lanzamiento";
  cin >> alfa;
  cout << "ingrese velocidad inicial";
  cin >> v0;
  cout << "ingrese tiempo";
  cin >> t;

  aux=t;
  t=0;

  for(int j=0;j<=aux/0.5;j++)
  {
      x= v0*cos((alfa*pi)/180)*t;                           
      y= y0+v0*sin((alfa*pi)/180)*t-0.5*g*pow(t,2);         
      vx= v0*cos((alfa*pi)/180);                            
      vy= v0*sin((alfa*pi)/180)-g*t;                        

      Vm=sqrt(pow(vx,2)+pow(vy,2));                          
      theta= atan(vx/vy);                                    

      ax= -((k*pow(Vm,2)*pow(r,2))/m)*cos(theta*pi/180);     
      ay= -((k*pow(Vm,2)*pow(r,2))/m)*sin(theta*pi/180)-g;   

      X= v0*cos(alfa*pi/180)*t+(1/2)*ax*pow(t,2);          
      Y= y0+v0*sin(alfa*pi/180)*t+(1/2)*ay*pow(t,2);        


      vX= v0*cos(alfa*pi/180)+(ax*t);                       
      vY= v0*sin(alfa*pi/180)+(ay*t);                     


      cout<<"La posicion en x para t: "<<t<<" es "<<X<<endl;
      cout<<"La posicion en y para t: "<<t<<" es "<<Y<<endl;
      cout<<"La acelerac en x para t: "<<t<<" es "<<ax<<endl;
      cout<<"La acelerac en y para t: "<<t<<" es "<<ay<<endl;
      cout<<"La velocid  en x para t: "<<t<<" es "<<vX<<endl;
      cout<<"La velocid  en y para t: "<<t<<" es "<<vY<<endl<<endl;
      t=t+0.5;                                               
  }
  system("PAUSE");
}
