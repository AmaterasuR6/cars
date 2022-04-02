/********************************************************************************
** Form generated from reading UI file 'cars.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARS_H
#define UI_CARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_carsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *carsClass)
    {
        if (carsClass->objectName().isEmpty())
            carsClass->setObjectName(QString::fromUtf8("carsClass"));
        carsClass->resize(600, 400);
        menuBar = new QMenuBar(carsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        carsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(carsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        carsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(carsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        carsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(carsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        carsClass->setStatusBar(statusBar);

        retranslateUi(carsClass);

        QMetaObject::connectSlotsByName(carsClass);
    } // setupUi

    void retranslateUi(QMainWindow *carsClass)
    {
        carsClass->setWindowTitle(QApplication::translate("carsClass", "cars", nullptr));
    } // retranslateUi

};

namespace Ui {
    class carsClass: public Ui_carsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARS_H
