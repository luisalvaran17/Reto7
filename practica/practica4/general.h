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

         QString getCodigo();
         QString getNombre();
         QString getCategoria();
         double getUnidades();
         double getCosto();

         void setCodigo(QString codigo);
         void setNombre(QString nombre);
         void setCategoria(QString categoria);
         void setUnidades(double unidades);
         void setCosto(double costo);


};

#endif // GENERAL_H
