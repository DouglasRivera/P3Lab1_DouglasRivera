#include <iostream>

using namespace std;

int main(){
    cout << " MENU DEL PRIMER LABORATORIO " <<endl;
    cout << " ----------------------------" <<endl;
	cout << "Ingrese la Opción a ejecutar: ";
    char opcion;
    cin >> opcion;

    switch(opcion)   {
        
		case 'a':{//Matriz 0y1
		cout << "Usted ha seleccionado la opción 1" <<endl;
		int n = 0;

    cout << "Ingrese el tamaño del tablero(matriz): ";
    cin >> n;
    cout << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    cout << '0' << "   ";
                } else {
                    cout << '1' << "   ";
                }
            } else if(i % 2 != 0){
               if (j % 2 == 0) {
                    cout << '1' << "   ";
                } else {
                    cout << '0' << "   ";
                }
            }
        }
        cout << endl;
    }
		break;
		}//Fin del Case 1
		
        case 'b':{//Sumatoria
		cout << "Usted ha seleccionado la opción 2" <<endl ;
	    int n1 = 0;
    	int resultado = 0;
    	int mult = 0;
    	int parentesis = 0;
    		cout << "Ingrese el numero para calcular la sumatoria: ";
    				cin >>  n1;
    				cout << endl << endl;
    				for(int i = 1; i <= n1; i++){
        			mult = 2 * i;
        			parentesis = (i - 1);
        			resultado += mult * parentesis;       
    }
   					 cout << "El resultado es: " << resultado;
			break;
		}//Fin del Case 2
        
		case 'c':{//Iteraciones
		cout << "Usted ha seleccionado la opción 3";
			break;
		}//Fin del Case 3
        default: cout << "Usted ha ingresado una opción incorrecta";
    }//Fin del Swicth

	
	
	
	
	return 0;
}