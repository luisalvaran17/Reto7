#include "general.h"
#include <QString>


general::general(QString codigo,QString nombre,QString categoria,double unidades,double costo): Practica4(codigo, nombre, categoria, unidades,costo){


}


double general::getSubtotal(){
    return unidades*costo;

}

double general::getIVA(){

    return 0.19;
}

double general::getTotal(){

    return (unidades*costo)*0.19;
}

