#include <iostream>

using namespace std;

int main(){

	cout << "Ingrese la Opción a ejecutar: ";
    char opcion;
    cin >> opcion;

    switch(opcion)   {
        case 1:{//Matriz 0y1
		cout << "Usted ha seleccionado la opción 1";
			break;
		}//Fin del Case 1
        case 2:{//Sumatoria
		cout << "Usted ha seleccionado la opción 2";
			break;
		}//Fin del Case 2
        case 3:{//Iteraciones
		cout << "Usted ha seleccionado la opción 3";
			break;
		}//Fin del Case 3
        default: cout << "Usted ha ingresado una opción incorrecta";
    }//Fin del Swicth

	
	
	
	
	return 0;
}