#include <iostream>
#include "Dimension.hpp"
// ===============
// implementations

Dimension::Dimension(){
   //implementa el constructor default
}

Dimension::Dimension(int _ancho, int _largo, int _alto){
   //vamos a cambiar los datos usando los setters éstos tendrán las validaciones
   // No le muevas nada, ya está listo
   setAncho(_ancho);
   setLargo(_largo);
   setAlto(_alto);
}

// Continua con la implementación de la clase