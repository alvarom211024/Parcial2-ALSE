#include "../include/PanelSolar.h"

PanelSolar::PanelSolar(std::string id, float eficiencia)
    : id(id), eficiencia(eficiencia), energiaGenerada(0.0f) {}

void PanelSolar::registrarGeneracion(float wattHora) {
    if (wattHora > 0) { // validación
        historialGeneracion.push_back(wattHora);
        energiaGenerada += wattHora;
    }
}

float PanelSolar::energiaTotal() const {
    return energiaGenerada;
}

float PanelSolar::eficienciaPromedio() const {
    if (historialGeneracion.empty()) return 0.0f;

    float suma = 0;
    for (float val : historialGeneracion) {
        suma += val;
    }
    return suma / historialGeneracion.size();
}

std::string PanelSolar::getId() const {
    return id;
}