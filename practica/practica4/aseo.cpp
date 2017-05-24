#include "aseo.h"
#include <QString>

aseo::aseo(QString codigo,QString nombre,QString categoria,double unidades,double costo): Practica4(codigo, nombre, categoria, unidades,costo){


}


double aseo::getSubtotal(){
    return unidades*costo;

}

double aseo::getIVA(){

    return 0.1;
}

double aseo::getTotal(){

    return (unidades*costo)*0.1;
}


