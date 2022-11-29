#pragma once
#include <iostream>
#include "Dimension.hpp"

class Caja{
    public:
        Caja();
        Caja(std::string, Dimension);
        //Agrega el encabezado de getters

        //Agrega el encabezado de setters

        int volumen();
        void imprime();
    private:
        std::string material;
        Dimension medidas;
};