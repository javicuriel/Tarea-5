/********************************************************************************
** Form generated from reading UI file 'cono.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONO_H
#define UI_CONO_H

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

class Ui_cono
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QTextEdit *transY;
    QPushButton *dibuja;
    QPushButton *rota;
    QLabel *label_5;
    QPushButton *refleja;
    QPushButton *zoomIn;
    QPushButton *zoomOut;
    QPushButton *translate;
    QLabel *label_3;
    QTextEdit *transX;

    void setupUi(QDialog *cono)
    {
        if (cono->objectName().isEmpty())
            cono->setObjectName(QStringLiteral("cono"));
        cono->resize(915, 528);
        buttonBox = new QDialogButtonBox(cono);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(560, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(cono);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(850, 0, 59, 20));
        transY = new QTextEdit(cono);
        transY->setObjectName(QStringLiteral("transY"));
        transY->setGeometry(QRect(830, 290, 71, 21));
        dibuja = new QPushButton(cono);
        dibuja->setObjectName(QStringLiteral("dibuja"));
        dibuja->setGeometry(QRect(0, 10, 141, 51));
        rota = new QPushButton(cono);
        rota->setObjectName(QStringLiteral("rota"));
        rota->setGeometry(QRect(810, 370, 91, 51));
        label_5 = new QLabel(cono);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(810, 290, 71, 16));
        refleja = new QPushButton(cono);
        refleja->setObjectName(QStringLiteral("refleja"));
        refleja->setGeometry(QRect(810, 420, 91, 51));
        zoomIn = new QPushButton(cono);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(850, 30, 51, 51));
        QFont font;
        font.setPointSize(24);
        zoomIn->setFont(font);
        zoomOut = new QPushButton(cono);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(850, 90, 51, 51));
        zoomOut->setFont(font);
        translate = new QPushButton(cono);
        translate->setObjectName(QStringLiteral("translate"));
        translate->setGeometry(QRect(810, 320, 91, 51));
        label_3 = new QLabel(cono);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(810, 260, 71, 16));
        transX = new QTextEdit(cono);
        transX->setObjectName(QStringLiteral("transX"));
        transX->setGeometry(QRect(830, 260, 71, 21));

        retranslateUi(cono);
        QObject::connect(buttonBox, SIGNAL(accepted()), cono, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), cono, SLOT(reject()));

        QMetaObject::connectSlotsByName(cono);
    } // setupUi

    void retranslateUi(QDialog *cono)
    {
        cono->setWindowTitle(QApplication::translate("cono", "Dialog", 0));
        label_4->setText(QApplication::translate("cono", "Zoom", 0));
        dibuja->setText(QApplication::translate("cono", "Dibuja", 0));
        rota->setText(QApplication::translate("cono", "Rotate", 0));
        label_5->setText(QApplication::translate("cono", "Y:", 0));
        refleja->setText(QApplication::translate("cono", "Refleja", 0));
        zoomIn->setText(QApplication::translate("cono", "+", 0));
        zoomOut->setText(QApplication::translate("cono", "-", 0));
        translate->setText(QApplication::translate("cono", "Translate", 0));
        label_3->setText(QApplication::translate("cono", "X:", 0));
    } // retranslateUi

};

namespace Ui {
    class cono: public Ui_cono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONO_H
