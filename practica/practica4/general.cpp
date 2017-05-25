#include "general.h"
#include <QString>


general::general(QString codigo,QString nombre,QString categoria,double unidades,double costo): Practica4(codigo, nombre, categoria, unidades,costo){


}


double general::getSubtotal(){
    return unidades*costo;

}

double general::getIVA(){

    return  0.19*(costo * unidades);
}

double general::getTotal(){

    return ((costo * unidades) + ((costo * unidades) * 0.19));
}

QString general::getCodigo(){
    return codigo;
}

QString general::getNombre(){
    return nombre;
}

QString general::getCategoria(){
    return categoria;
}

double general::getUnidades(){
    return unidades;
}

double general::getCosto(){
    return costo;
}


void general::setCodigo(QString codigo){
    this -> codigo = codigo;
}

void general::setNombre(QString nombre){
    this -> nombre = nombre;
}

void general::setCategoria(QString categoria){
    this -> categoria = categoria;
}

void general::setUnidades(double unidades){
    this -> unidades = unidades;
}

void general::setCosto(double costo){
    this -> costo = costo;
}
