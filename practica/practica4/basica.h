#ifndef BASICA_H
#define BASICA_H
#include <QString>

#include "practica4.h"

class Basica: public Practica4 {

   private:

   public:
    Basica(QString codigo,QString nombre,QString categoria,double unidades, double costo);


    double getSubtotal ();
    double getIVA();
    double getTotal();

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

#endif // BASICA_H
