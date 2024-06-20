//Bibliotecas
#include <iostream>
#include <cmath> 


//declaramos para usar funciones (cin, cout)
using namespace std;


int main() {
	
	//declaramso variables 
    int limiteMaximo, base;

    // Solicitar entrada al usuario
    
    cout << "Ingrese el límite máximo (entero positivo) y presione enter: ";
    cin >> limiteMaximo;
    cout << "Ingrese la base (entero positivo): ";
    cin >> base;

    // Calcular y mostrar las potencias de la base
    for (int exponente = 0; pow(base, exponente) < limiteMaximo; ++exponente) {
        cout << base << "^" << exponente << " = " << pow(base, exponente) << endl;
    }

    return 0;
}
