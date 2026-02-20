#include <iostream>
using namespace std;
int main() {
    int arreglo[10];
    int numero;
    bool encontrado = false;
    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arreglo[i];
    }
    cout << "Ingrese el numero que desea buscar: ";
    cin >> numero;
    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == numero) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "El numero SI esta en el arreglo." << endl;
    } else {
        cout << "El numero NO esta en el arreglo." << endl;
    }
    return 0;
}