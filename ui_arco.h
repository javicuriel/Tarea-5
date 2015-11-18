/********************************************************************************
** Form generated from reading UI file 'arco.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCO_H
#define UI_ARCO_H

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

class Ui_Arco
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *radioTxt;
    QTextEdit *angulosTxt;
    QLabel *label;
    QLabel *label_2;
    QPushButton *rota;
    QPushButton *translate;
    QLabel *label_4;
    QPushButton *zoomOut;
    QLabel *label_3;
    QLabel *label_5;
    QTextEdit *transY;
    QPushButton *refleja;
    QPushButton *dibuja;
    QTextEdit *transX;
    QPushButton *zoomIn;

    void setupUi(QDialog *Arco)
    {
        if (Arco->objectName().isEmpty())
            Arco->setObjectName(QStringLiteral("Arco"));
        Arco->resize(902, 645);
        buttonBox = new QDialogButtonBox(Arco);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(540, 600, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        radioTxt = new QTextEdit(Arco);
        radioTxt->setObjectName(QStringLiteral("radioTxt"));
        radioTxt->setGeometry(QRect(80, 10, 61, 21));
        angulosTxt = new QTextEdit(Arco);
        angulosTxt->setObjectName(QStringLiteral("angulosTxt"));
        angulosTxt->setGeometry(QRect(80, 40, 61, 21));
        label = new QLabel(Arco);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 59, 16));
        label_2 = new QLabel(Arco);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 59, 16));
        rota = new QPushButton(Arco);
        rota->setObjectName(QStringLiteral("rota"));
        rota->setGeometry(QRect(800, 470, 91, 51));
        translate = new QPushButton(Arco);
        translate->setObjectName(QStringLiteral("translate"));
        translate->setGeometry(QRect(800, 420, 91, 51));
        label_4 = new QLabel(Arco);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(840, 0, 59, 20));
        zoomOut = new QPushButton(Arco);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(840, 90, 51, 51));
        QFont font;
        font.setPointSize(24);
        zoomOut->setFont(font);
        label_3 = new QLabel(Arco);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(800, 360, 71, 16));
        label_5 = new QLabel(Arco);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(800, 390, 71, 16));
        transY = new QTextEdit(Arco);
        transY->setObjectName(QStringLiteral("transY"));
        transY->setGeometry(QRect(820, 390, 71, 21));
        refleja = new QPushButton(Arco);
        refleja->setObjectName(QStringLiteral("refleja"));
        refleja->setGeometry(QRect(800, 520, 91, 51));
        dibuja = new QPushButton(Arco);
        dibuja->setObjectName(QStringLiteral("dibuja"));
        dibuja->setGeometry(QRect(10, 70, 141, 51));
        transX = new QTextEdit(Arco);
        transX->setObjectName(QStringLiteral("transX"));
        transX->setGeometry(QRect(820, 360, 71, 21));
        zoomIn = new QPushButton(Arco);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(840, 30, 51, 51));
        zoomIn->setFont(font);

        retranslateUi(Arco);
        QObject::connect(buttonBox, SIGNAL(accepted()), Arco, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Arco, SLOT(reject()));

        QMetaObject::connectSlotsByName(Arco);
    } // setupUi

    void retranslateUi(QDialog *Arco)
    {
        Arco->setWindowTitle(QApplication::translate("Arco", "Dialog", 0));
        label->setText(QApplication::translate("Arco", "Radio", 0));
        label_2->setText(QApplication::translate("Arco", "\303\201ngulos", 0));
        rota->setText(QApplication::translate("Arco", "Rotate", 0));
        translate->setText(QApplication::translate("Arco", "Translate", 0));
        label_4->setText(QApplication::translate("Arco", "Zoom", 0));
        zoomOut->setText(QApplication::translate("Arco", "-", 0));
        label_3->setText(QApplication::translate("Arco", "X:", 0));
        label_5->setText(QApplication::translate("Arco", "Y:", 0));
        refleja->setText(QApplication::translate("Arco", "Refleja", 0));
        dibuja->setText(QApplication::translate("Arco", "Dibuja", 0));
        zoomIn->setText(QApplication::translate("Arco", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class Arco: public Ui_Arco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCO_H
