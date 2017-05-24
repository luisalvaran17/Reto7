#ifndef PRACTICA4_H
#define PRACTICA4_H
#include <QString>


class Practica4 {



          protected:
                     QString codigo;
                     QString nombre;
                     QString categoria;
                     double unidades;
                     double costo;
           public:
                     Practica4(QString codigo,QString nombre, QString categoria,double unidades, double costo);


                     virtual double getSubtotal ()=0;
                     virtual double getIVA()=0;
                     virtual double getTotal ()=0;



};


#endif // PRACTICA4_H

