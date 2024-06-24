#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese la edad de uno de los hijos: ";
    cin >> num1;
    cout << "Ingrese la edad de uno de los hijos: ";
    cin >> num2;
    cout << "Ingrese la edad de uno de los hijos:";
    cin >> num3;

    // Determina el mayor
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    // Determina el menor
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Determina el hijo del medio
    int medio = num1 + num2 + num3 - mayor - menor;

    cout << "La edad del mayor es: " << mayor << endl;
    cout << "La edad del menor es: " << menor << endl;
    cout << "La edad del de medio es: " << medio << endl;
    
    //carlulcar media
    double media;
    media = (num1 + num2 + num3) / 3;
    cout << "el cualculo de la media de las tres edades es: " << media << endl;
    

    return 0;
}
