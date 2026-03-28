#ifndef PANEL_SOLAR_H
#define PANEL_SOLAR_H

#include <string>
#include <vector>

/**
 * @class PanelSolar
 * @brief Representa un panel solar con registro de generación de energía
 */
class PanelSolar {
private:
    std::string id;
    float eficiencia;
    float energiaGenerada;
    std::vector<float> historialGeneracion;

public:
    /**
     * @brief Constructor de la clase PanelSolar
     * @param id Identificador del panel
     * @param eficiencia Eficiencia inicial del panel
     */
    PanelSolar(std::string id, float eficiencia);

    /**
     * @brief Registra la generación de energía
     * @param wattHora Cantidad generada en Wh
     */
    void registrarGeneracion(float wattHora);

    /**
     * @brief Calcula la energía total generada
     * @return Energía total en Wh
     */
    float energiaTotal() const;

    /**
     * @brief Calcula la eficiencia promedio
     * @return Promedio del historial de generación
     */
    float eficienciaPromedio() const;

    /**
     * @brief Obtiene el ID del panel
     */
    std::string getId() const;
};

#endif