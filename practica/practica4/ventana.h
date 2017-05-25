#ifndef VENTANA_H
#define VENTANA_H

#include <QMainWindow>
#include "basica.h"
#include "aseo.h"
#include "general.h"
#include <vector>

using std::vector;

namespace Ui {
class Ventana;
}

class Ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = 0);
    ~Ventana();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Ventana *ui;
    vector <Basica*> listaPractica4;
    vector <general*> listaGeneral;
    vector <aseo*> listaAseo;
};

#endif // VENTANA_H
