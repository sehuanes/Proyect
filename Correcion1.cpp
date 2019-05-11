
// Codigo creado por Francisco Sehuanes y Julian Dosman



#include <iostream>
#include "parabolico.h"
#include "Colisiones.h"
#include "Rebote.h"
#include "Viscoso.h"


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int MENU=0;
    
	for(;;)
     {
        cout << "****************MENU DE CALCULOS*********************" <<endl;
        cout << "   INGRESE 1 PARA CALCULAR MOVIMIENTO PARABOLICO    *" << endl;
        cout << "   INGRESE 2 PARA CALCULAR CHOQUES ELASTICOS        *" << endl;
        cout << "   INGRESE 3 PARA CALCULAR REBOTES                  *"<< endl;
        cout << "   INGRESE 4 PARA CALCULAR FRICCION EN MEDIO VISCOSO*"<< endl<<endl;
        cout << "   OPCION: ";
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


	return 0;
}
