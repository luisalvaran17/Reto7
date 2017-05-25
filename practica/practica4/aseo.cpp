#include "aseo.h"
#include <QString>

aseo::aseo(QString codigo,QString nombre,QString categoria,double unidades,double costo): Practica4(codigo, nombre, categoria, unidades,costo){


}


double aseo::getSubtotal(){
    return unidades*costo;

}

double aseo::getIVA(){

     return  0.01*(costo * unidades);
}

double aseo::getTotal(){

    return ((costo * unidades) + ((costo * unidades) * 0.01));
}

QString aseo::getCodigo(){
    return codigo;
}

QString aseo::getNombre(){
    return nombre;
}

QString aseo::getCategoria(){
    return categoria;
}

double aseo::getUnidades(){
    return unidades;
}

double aseo::getCosto(){
    return costo;
}


void aseo::setCodigo(QString codigo){
    this -> codigo = codigo;
}

void aseo::setNombre(QString nombre){
    this -> nombre = nombre;
}

void aseo::setCategoria(QString categoria){
    this -> categoria = categoria;
}

void aseo::setUnidades(double unidades){
    this -> unidades = unidades;
}

void aseo::setCosto(double costo){
    this -> costo = costo;
}


