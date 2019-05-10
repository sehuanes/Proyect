#include <iostream>
#include <math.h>
#define g 9.8
#define pi 3.1415

using namespace std;

void Parabolico()
{
	float Y0=0, V0=0, alfa=0, VY=0, VX=0, X=0, Y=0, T=0, Q=0;
	
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
		
		VX=V0*cos((alfa*pi)/180);
		VY=V0*sin((alfa*pi)/180)-g*T;
		
		cout<<"la posicion en X es: "<<X<<"en T="<<T<<endl;
	    cout<<"la posicion en Y es: "<<Y<<"en T="<<T<<endl;
		cout<<"la velocidad en X es: "<<VX<<endl;
		cout<<"la velocidad en Y es: "<<VY<<endl;	
		T=T+0.5;
	}
	
    system("PAUSE");
} 


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

     cout << "la velocidad final de la masa 1 es "<<VF1<< endl;
     cout << "la velocidad final de la masa 2 es "<<VF2<< endl;
     system("PAUSE");
}

void Rebotes()
{
  float M=0,h=0,E=0.7,H=0,U=0,V=0;                      
  int count=0;

  cout << "Cuanto pesa la masa: ";
  cin >> M;
  cout << "Ingrese la altura inicial" << endl;
  cin >>h;

  H=h;

  while (H>0.1)                       
    {
       U= sqrt(2*g*h);                   
       V= E*U;                           
       count++;                          
       H= (pow(E,2*count))*h;          
       cout << "REBOTE:  "<<count<<endl;
       cout << "ALTURA: "<<H<<endl;
    }
    system("PAUSE");

}

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


      cout<<"La posicion en x para t="<<t<<" es "<<X<<endl;
      cout<<"La posicion en y para t="<<t<<" es "<<Y<<endl;
      cout<<"La acelerac en x para t="<<t<<" es "<<ax<<endl;
      cout<<"La acelerac en y para t="<<t<<" es "<<ay<<endl;
      cout<<"La velocid  en x para t="<<t<<" es "<<vX<<endl;
      cout<<"La velocid  en y para t="<<t<<" es "<<vY<<endl<<endl;
      t=t+0.5;                                               
  }
  system("pause");
}

int main()
{
   int MENU=0;
	
   for(;;)
     {
        cout << "***********QUE DESEA CALCULAR************************" <<endl;
        cout << "*          1 PARA CALCULAR MOVIMIENTO PARABOLICO    *" <<endl;
        cout << "*          2 PARA CALCULAR CHOQUES ELASTICOS        *" <<endl;
        cout << "*          3 PARA CALCULAR REBOTES                  *" <<endl;
        cout << "*          4 PARA CALCULAR FRICCION EN MEDIO VISCOSO*" <<endl;
        cout << "*****************************************************" <<endl;
		cout << "  OPCION:  ";
        cin >> MENU;

        if (MENU==1)
        Parabolico();

        else if (MENU==2)
        Colisiones_Elasticas();
        
        else if (MENU==3)
        Rebotes();
        
        else if (MENU==4)
        Medio_Viscoso();
      
        else
        cout <<"opcion no valida"<<endl;

        system("cls");
     }

}
