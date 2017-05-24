#ifndef GENERAL_H
#define GENERAL_H
#include <QString>
#include"practica4.h"


class general : public Practica4 {
        private:

        public:
         general(QString codigo,QString nombre,QString categoria,double unidades, double costo);


         double getSubtotal ();
         double getIVA();
         double getTotal ();



};

#endif // GENERAL_H
