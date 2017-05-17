#ifndef BASICA_H
#define BASICA_H

#include "practica4.h"

class Basica:
        public Practica4 {

   private:

   public:
    Basica(int codigo,QString nombre,QString categoria,int unidades);


    double getSubtotal ();
    double getIVA();
    double getTotal ();

};

#endif // BASICA_H
