#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    if (_from == _to) {
        return _value; // Pas de conversion nécessaire si les unités sont les mêmes
    }

    float tempInCelsius = 0.0f;

    // Convertir la valeur d'entrée en Celsius
    if (_from == TemperatureUnits::CELSIUS) {
        tempInCelsius = _value;
    }
    else if (_from == TemperatureUnits::FAHRENHEIT) {
        tempInCelsius = (5.0f / 9.0f) * (_value - 32.0f);
    }
    else if (_from == TemperatureUnits::KELVIN) {
        tempInCelsius = _value - 273.15f;
    }

    // Convertir la température en Celsius vers l'unité de sortie
    if (_to == TemperatureUnits::CELSIUS) {
        return tempInCelsius;
    }
    else if (_to == TemperatureUnits::FAHRENHEIT) {
        return (9.0f / 5.0f) * tempInCelsius + 32.0f;
    }
    else if (_to == TemperatureUnits::KELVIN) {
        return tempInCelsius + 273.15f;
    }

    return -1.0f; // En cas d'erreur
}


#endif
