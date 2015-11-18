/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *poligono;
    QPushButton *arco;
    QPushButton *cubo;
    QPushButton *trian;
    QLabel *label;
    QPushButton *rect;
    QPushButton *cono;
    QMenuBar *menuBar;
    QMenu *menuTarea_05;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(694, 463);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        poligono = new QPushButton(centralWidget);
        poligono->setObjectName(QStringLiteral("poligono"));
        poligono->setGeometry(QRect(260, 80, 171, 51));
        arco = new QPushButton(centralWidget);
        arco->setObjectName(QStringLiteral("arco"));
        arco->setGeometry(QRect(260, 130, 171, 51));
        cubo = new QPushButton(centralWidget);
        cubo->setObjectName(QStringLiteral("cubo"));
        cubo->setGeometry(QRect(260, 180, 171, 51));
        trian = new QPushButton(centralWidget);
        trian->setObjectName(QStringLiteral("trian"));
        trian->setGeometry(QRect(260, 230, 171, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 30, 181, 31));
        rect = new QPushButton(centralWidget);
        rect->setObjectName(QStringLiteral("rect"));
        rect->setGeometry(QRect(260, 280, 171, 51));
        cono = new QPushButton(centralWidget);
        cono->setObjectName(QStringLiteral("cono"));
        cono->setGeometry(QRect(260, 330, 171, 51));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 694, 22));
        menuTarea_05 = new QMenu(menuBar);
        menuTarea_05->setObjectName(QStringLiteral("menuTarea_05"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTarea_05->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        poligono->setText(QApplication::translate("MainWindow", "Pol\303\255gono", 0));
        arco->setText(QApplication::translate("MainWindow", "Arco", 0));
        cubo->setText(QApplication::translate("MainWindow", "Cubo", 0));
        trian->setText(QApplication::translate("MainWindow", "Prisma Triangular", 0));
        label->setText(QApplication::translate("MainWindow", "Selecciona la Figura:", 0));
        rect->setText(QApplication::translate("MainWindow", "Prisma Rectangular", 0));
        cono->setText(QApplication::translate("MainWindow", "Cono", 0));
        menuTarea_05->setTitle(QApplication::translate("MainWindow", "Tarea 05", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
