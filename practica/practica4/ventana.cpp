#include "ventana.h"
#include "ui_ventana.h"
#include <QString>


Ventana::Ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::on_pushButton_clicked()
{
    QString codigo = ui ->objCodigo->text();
    QString nombre = ui -> objNombre->text();
    QString categoria = ui ->objCategoria->text();
    double unidades = ui ->objUnidades->text().toDouble();
    double costo = ui -> objCostouni->text().toDouble();

    if(ui ->objCategoria->text() == "aseo"){
    aseo *objAseo = new aseo(codigo, nombre, categoria, unidades,costo);

    listaAseo.push_back(objAseo);
    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objCategoria->setText("");
    ui->objUnidades->setText("");
    ui->objCostouni->setText("");
    }

    else if(ui ->objCategoria->text() == "basica"){
    Basica *objPractica4 = new Basica(codigo, nombre, categoria, unidades,costo);

    listaPractica4.push_back(objPractica4);
    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objCategoria->setText("");
    ui->objUnidades->setText("");
    ui->objCostouni->setText("");
    }

    else {

    general *objGeneral = new general(codigo, nombre, categoria, unidades,costo);

    listaGeneral.push_back(objGeneral);
    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objCategoria->setText("");
    ui->objUnidades->setText("");
    ui->objCostouni->setText("");

    }



}


void Ventana::on_pushButton_2_clicked()
{

    QString salida = "Codigo\tNombre\tCategoria\tUnidades\tCosto\tSubtotal\tIva\tTotal\n";


    for(int i=0; i<(int)listaAseo.size(); i++){


                if(listaAseo[i]->getCategoria() == "aseo"){
                    salida +=listaAseo[i]->getCodigo();
                    salida +="\t";
                    salida +=listaAseo[i]->getNombre();
                    salida +="\t";
                    salida +=listaAseo[i]->getCategoria();
                    salida +="\t";
                    salida +=QString::number(listaAseo[i]->getUnidades());
                    salida +="\t";
                    salida +=QString::number(listaAseo[i]->getCosto());
                    salida += "\t";



                    salida +=QString::number(listaAseo[i]-> getSubtotal ());
                    salida += "\t";
                    salida +=QString::number(listaAseo[i]-> getIVA());
                    salida += "\t";
                    salida +=QString::number(listaAseo[i]->getTotal());
                    salida += "\n";
                    }
    }


    for(int j=0; j<(int)listaPractica4.size(); j++){

if(listaPractica4[j]->getCategoria() == "basica"){
        salida +=listaPractica4[j]->getCodigo();
        salida +="\t";
        salida +=listaPractica4[j]->getNombre();
        salida +="\t";
        salida +=listaPractica4[j]->getCategoria();
        salida +="\t";
        salida +=QString::number(listaPractica4[j]->getUnidades());
        salida +="\t";
        salida +=QString::number(listaPractica4[j]->getCosto());
        salida += "\t";



        salida +=QString::number(listaPractica4[j]-> getSubtotal ());
        salida += "\t";
        salida +=QString::number(listaPractica4[j]-> getIVA());
        salida += "\t";
        salida +=QString::number(listaPractica4[j]->getTotal());
        salida += "\n";
        }
    }


    for(int k=0; k<(int)listaGeneral.size(); k++){

       if(listaGeneral[k]->getCategoria() == "general") {

        salida +=listaGeneral[k]->getCodigo();
        salida +="\t";
        salida +=listaGeneral[k]->getNombre();
        salida +="\t";
        salida +=listaGeneral[k]->getCategoria();
        salida +="\t";
        salida +=QString::number(listaGeneral[k]->getUnidades());
        salida +="\t";
        salida +=QString::number(listaGeneral[k]->getCosto());
        salida += "\t";

        salida +=QString::number(listaGeneral[k]-> getSubtotal ());
        salida += "\t";
        salida +=QString::number(listaGeneral[k]-> getIVA());
        salida += "\t";
        salida +=QString::number(listaGeneral[k]->getTotal());
        salida += "\n";


        }


    }
      ui -> objSalida->setText(salida);
}




