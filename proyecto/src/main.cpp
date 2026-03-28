#include <iostream>
#include <vector>
#include "../include/PanelSolar.h"

using namespace std;

int main() {
    vector<PanelSolar> paneles;

    // Crear 2 paneles
    PanelSolar p1("Panel-A", 0.85);
    PanelSolar p2("Panel-B", 0.90);

    paneles.push_back(p1);
    paneles.push_back(p2);

    // Entrada del usuario
    for (int i = 0; i < paneles.size(); i++) {
        float energia;
        cout << "Ingrese energia generada para " << paneles[i].getId() << ": ";
        cin >> energia;

        paneles[i].registrarGeneracion(energia);
    }

    // Mostrar resultados
    cout << "\n--- RESULTADOS ---\n";
    for (const auto& p : paneles) {
        cout << "Panel: " << p.getId() << endl;
        cout << "Energia total: " << p.energiaTotal() << " Wh" << endl;
        cout << "Promedio: " << p.eficienciaPromedio() << endl;
        cout << "------------------\n";
    }

    return 0;
}