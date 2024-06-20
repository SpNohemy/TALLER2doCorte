#include <iostream>
using namespace std;

int main() {
    
// Declaramos Variables.
	int a, b, c;
    
	
// pedimos los valores.
	cout << "Ingresa el primer numero entero y presione enter: ";
    cin >> a;

    cout << "Ingresa el segundo numero entero y presione enter: ";
    cin >> b;
    
    cout << "Ingresa el tercer numero entero y presione enter: ";
    cin >> c;

// Evaluamos condicion y mostramos resultado
    if(a < b && b < c){
        cout << "Los numeros SI estan en orden Numerico." << endl;
    }
	
	else {
        cout << "Los numeros NO estan en un orden Numerico." << endl;
    }

    return 0;
}
