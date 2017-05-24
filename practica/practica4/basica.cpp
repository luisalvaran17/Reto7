#include "basica.h"
#include <QString>

Basica::Basica(QString codigo,QString nombre,QString categoria,double unidades,double costo): Practica4(codigo, nombre, categoria, unidades,costo){


}


double Basica::getSubtotal(){
    return unidades*costo;

}

double Basica::getIVA(){

    return 0.5;
}

double Basica::getTotal(){

    return (unidades*costo)*0.5;
}

QString Basica::getCodigo(){
    return codigo;
}

QString Basica::getNombre(){
    return nombre;
}

QString Basica::getCategoria(){
    return categoria;
}

double Basica::getUnidades(){
    return unidades;
}

double Basica::getCosto(){
    return costo;
}


void Basica::setCodigo(QString codigo){
    this -> codigo = codigo;
}

void Basica::setNombre(QString nombre){
    this -> nombre = nombre;
}

void Basica::setCategoria(QString categoria){
    this -> categoria = categoria;
}

void Basica::setUnidades(double unidades){
    this -> unidades = unidades;
}

void Basica::setCosto(double costo){
    this -> costo = costo;
}

