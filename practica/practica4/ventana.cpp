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

    Basica *objPractica4 = new Basica(codigo, nombre, categoria, unidades,costo);


    listaPractica4.push_back(objPractica4);
    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objCategoria->setText("");
    ui->objUnidades->setText("");
    ui->objCostouni->setText("");
}


void Ventana::on_pushButton_2_clicked()
{
    QString salida = "Codigo\tNombre\tCategoria\tUnidades\tCosto\tSubtotal\n";

    for(int i=0; i<(int)listaPractica4.size(); i++){


        salida +=listaPractica4[i]->getCodigo();
        salida +="\t";
        salida +=listaPractica4[i]->getNombre();
        salida +="\t";
        salida +=listaPractica4[i]->getCategoria();
        salida +="\t";
        salida +=QString::number(listaPractica4[i]->getUnidades());
        salida +="\t";
        salida +=QString::number(listaPractica4[i]->getCosto());
        salida += "\n";

    }

    ui ->objSalida->setText(salida);

}
