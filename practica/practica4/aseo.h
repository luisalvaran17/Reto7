#ifndef ASEO_H
#define ASEO_H
#include <QString>


#include "practica4.h"

class aseo: public Practica4 {

       private:

       public:
        aseo(QString codigo,QString nombre,QString categoria,double unidades, double costo);


        double getSubtotal();
        double getIVA();
        double getTotal();
};

#endif // ASEO_H
