/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QStringLiteral("Ventana"));
        Ventana->resize(747, 543);
        centralWidget = new QWidget(Ventana);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 67, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 151, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 111, 16));
        objSalida = new QTextEdit(centralWidget);
        objSalida->setObjectName(QStringLiteral("objSalida"));
        objSalida->setGeometry(QRect(20, 280, 711, 201));
        objCodigo = new QLineEdit(centralWidget);
        objCodigo->setObjectName(QStringLiteral("objCodigo"));
        objCodigo->setGeometry(QRect(180, 10, 113, 27));
        objNombre = new QLineEdit(centralWidget);
        objNombre->setObjectName(QStringLiteral("objNombre"));
        objNombre->setGeometry(QRect(180, 50, 113, 27));
        objCategoria = new QLineEdit(centralWidget);
        objCategoria->setObjectName(QStringLiteral("objCategoria"));
        objCategoria->setGeometry(QRect(180, 90, 113, 27));
        objUnidades = new QLineEdit(centralWidget);
        objUnidades->setObjectName(QStringLiteral("objUnidades"));
        objUnidades->setGeometry(QRect(180, 130, 113, 27));
        objCostouni = new QLineEdit(centralWidget);
        objCostouni->setObjectName(QStringLiteral("objCostouni"));
        objCostouni->setGeometry(QRect(180, 170, 113, 27));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 10, 67, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(400, 50, 67, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(400, 100, 81, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 240, 151, 27));
        Ventana->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ventana);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 747, 25));
        Ventana->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Ventana);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Ventana->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Ventana);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Ventana->setStatusBar(statusBar);

        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QMainWindow *Ventana)
    {
        Ventana->setWindowTitle(QApplication::translate("Ventana", "Ventana", 0));
        label->setText(QApplication::translate("Ventana", "Codigo", 0));
        label_2->setText(QApplication::translate("Ventana", "Nombre", 0));
        label_3->setText(QApplication::translate("Ventana", "Categoria", 0));
        label_4->setText(QApplication::translate("Ventana", " Unidades", 0));
        label_5->setText(QApplication::translate("Ventana", "Costo unitario", 0));
        label_6->setText(QApplication::translate("Ventana", "Subtotal", 0));
        label_7->setText(QApplication::translate("Ventana", "IVA", 0));
        label_8->setText(QApplication::translate("Ventana", "Costo total", 0));
        pushButton->setText(QApplication::translate("Ventana", "Crear", 0));
        pushButton_2->setText(QApplication::translate("Ventana", "Listar productos", 0));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
