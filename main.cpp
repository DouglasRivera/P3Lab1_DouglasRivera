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
    while (n<=0) {
					cout << "Ingrese un numero que no sea negativo o 0 " << endl;
					cin >> n;
				}//validacion para que sea diferente a negativo o 0    
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
    		
			cout << "Ingrese el numero para calcular la sumatoria: "<<endl;
			cin >>  n1;
			while (n1<=0) {
					cout << "Ingrese un numero que no sea negativo o 0 " << endl;
					cin >> n1;
				}//validacion para que sea diferente a negativo o 0         	
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
		cout << "Usted ha seleccionado la opción 3" <<endl;
		double n2 = 0;
    int t = 15;
    double mitad = 0;
    double inicio = 0;
    int var2 = 0;
    double end = 0;
    
    cout << "Ingrese el valor de n: ";
    cin >> n2;
    cout << endl << endl;
    end = n2;   
    for(int i = 0; i < t; i++){
        mitad = (end + inicio) / (double)2;
        double var = mitad * mitad;
        if (var < n2){
            inicio = mitad;
        }else if(var > n2){
            end = mitad;
        }
        else if(var == n2){   
            cout << "El resultado es: " << mitad << endl << endl;
            var2 = 1; 
            break;
        }
    }
    if(var2 == 0){
     cout << "El resultado es: " << mitad << endl << endl;
    }
			break;
		}//Fin del Case 3
        default: cout << "Usted ha ingresado una opción incorrecta";
    }//Fin del Swicth

	
	
	
	
	return 0;
}