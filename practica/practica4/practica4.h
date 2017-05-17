#ifndef PRACTICA4_H
#define PRACTICA4_H
#include <QString>


class Practica4 {
          protected:
                     int codigo;
                     QString nombre;
                     QString categoria;
                     int unidades;
           public:
                     Practica4(int codigo,QString nombre, QString categoria,int unidades);

                     virtual double getSubtotal ()=0;
                     virtual double getIVA ()=0;
                     virtual double getTotal ()=0;


};

#endif // PRACTICA4_H
