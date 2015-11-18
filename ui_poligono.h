/********************************************************************************
** Form generated from reading UI file 'poligono.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLIGONO_H
#define UI_POLIGONO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_poligono
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *lados;
    QLabel *label;
    QPushButton *dibuja;
    QPushButton *rota;
    QPushButton *zoomOut;
    QPushButton *zoomIn;
    QPushButton *translate;
    QTextEdit *transX;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *transY;
    QPushButton *refleja;
    QLabel *label_4;

    void setupUi(QDialog *poligono)
    {
        if (poligono->objectName().isEmpty())
            poligono->setObjectName(QStringLiteral("poligono"));
        poligono->resize(905, 653);
        buttonBox = new QDialogButtonBox(poligono);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(530, 610, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lados = new QTextEdit(poligono);
        lados->setObjectName(QStringLiteral("lados"));
        lados->setGeometry(QRect(60, 10, 71, 21));
        label = new QLabel(poligono);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 59, 20));
        dibuja = new QPushButton(poligono);
        dibuja->setObjectName(QStringLiteral("dibuja"));
        dibuja->setGeometry(QRect(0, 30, 141, 51));
        rota = new QPushButton(poligono);
        rota->setObjectName(QStringLiteral("rota"));
        rota->setGeometry(QRect(810, 480, 91, 51));
        zoomOut = new QPushButton(poligono);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(850, 110, 51, 51));
        QFont font;
        font.setPointSize(24);
        zoomOut->setFont(font);
        zoomIn = new QPushButton(poligono);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(850, 50, 51, 51));
        zoomIn->setFont(font);
        translate = new QPushButton(poligono);
        translate->setObjectName(QStringLiteral("translate"));
        translate->setGeometry(QRect(810, 430, 91, 51));
        transX = new QTextEdit(poligono);
        transX->setObjectName(QStringLiteral("transX"));
        transX->setGeometry(QRect(830, 370, 71, 21));
        label_2 = new QLabel(poligono);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(810, 370, 71, 16));
        label_3 = new QLabel(poligono);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(810, 400, 71, 16));
        transY = new QTextEdit(poligono);
        transY->setObjectName(QStringLiteral("transY"));
        transY->setGeometry(QRect(830, 400, 71, 21));
        refleja = new QPushButton(poligono);
        refleja->setObjectName(QStringLiteral("refleja"));
        refleja->setGeometry(QRect(810, 530, 91, 51));
        label_4 = new QLabel(poligono);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(850, 20, 59, 20));

        retranslateUi(poligono);
        QObject::connect(buttonBox, SIGNAL(accepted()), poligono, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), poligono, SLOT(reject()));

        QMetaObject::connectSlotsByName(poligono);
    } // setupUi

    void retranslateUi(QDialog *poligono)
    {
        poligono->setWindowTitle(QApplication::translate("poligono", "Dialog", 0));
        label->setText(QApplication::translate("poligono", "Lados:", 0));
        dibuja->setText(QApplication::translate("poligono", "Dibuja", 0));
        rota->setText(QApplication::translate("poligono", "Rotate", 0));
        zoomOut->setText(QApplication::translate("poligono", "-", 0));
        zoomIn->setText(QApplication::translate("poligono", "+", 0));
        translate->setText(QApplication::translate("poligono", "Translate", 0));
        label_2->setText(QApplication::translate("poligono", "X:", 0));
        label_3->setText(QApplication::translate("poligono", "Y:", 0));
        refleja->setText(QApplication::translate("poligono", "Refleja", 0));
        label_4->setText(QApplication::translate("poligono", "Zoom", 0));
    } // retranslateUi

};

namespace Ui {
    class poligono: public Ui_poligono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLIGONO_H
