/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *objSalida;
    QLineEdit *objCodigo;
    QLineEdit *objNombre;
    QLineEdit *objCategoria;
    QLineEdit *objUnidades;
    QLineEdit *objCostouni;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(747, 543);
        centralWidget = new QWidget(Ventana);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 67, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 151, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 180, 111, 16));
        objSalida = new QTextEdit(centralWidget);
        objSalida->setObjectName(QString::fromUtf8("objSalida"));
        objSalida->setGeometry(QRect(20, 280, 711, 201));
        objCodigo = new QLineEdit(centralWidget);
        objCodigo->setObjectName(QString::fromUtf8("objCodigo"));
        objCodigo->setGeometry(QRect(180, 10, 113, 27));
        objNombre = new QLineEdit(centralWidget);
        objNombre->setObjectName(QString::fromUtf8("objNombre"));
        objNombre->setGeometry(QRect(180, 50, 113, 27));
        objCategoria = new QLineEdit(centralWidget);
        objCategoria->setObjectName(QString::fromUtf8("objCategoria"));
        objCategoria->setGeometry(QRect(180, 90, 113, 27));
        objUnidades = new QLineEdit(centralWidget);
        objUnidades->setObjectName(QString::fromUtf8("objUnidades"));
        objUnidades->setGeometry(QRect(180, 130, 113, 27));
        objCostouni = new QLineEdit(centralWidget);
        objCostouni->setObjectName(QString::fromUtf8("objCostouni"));
        objCostouni->setGeometry(QRect(180, 170, 113, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 240, 151, 27));
        Ventana->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ventana);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 747, 20));
        Ventana->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Ventana);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Ventana->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Ventana);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Ventana->setStatusBar(statusBar);

        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QMainWindow *Ventana)
    {
        Ventana->setWindowTitle(QApplication::translate("Ventana", "Ventana", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Ventana", "Codigo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Ventana", "Nombre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Ventana", "Categoria", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Ventana", " Unidades", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Ventana", "Costo unitario", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Ventana", "Crear", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Ventana", "Listar productos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
