/********************************************************************************
** Form generated from reading UI file 'cubo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUBO_H
#define UI_CUBO_H

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

class Ui_cubo
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *translate;
    QLabel *label_2;
    QPushButton *zoomIn;
    QLabel *label_3;
    QPushButton *zoomOut;
    QTextEdit *transY;
    QPushButton *refleja;
    QTextEdit *transX;
    QPushButton *rota;
    QLabel *label_4;
    QPushButton *dibuja;

    void setupUi(QDialog *cubo)
    {
        if (cubo->objectName().isEmpty())
            cubo->setObjectName(QStringLiteral("cubo"));
        cubo->resize(811, 593);
        buttonBox = new QDialogButtonBox(cubo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(440, 550, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        translate = new QPushButton(cubo);
        translate->setObjectName(QStringLiteral("translate"));
        translate->setGeometry(QRect(710, 380, 91, 51));
        label_2 = new QLabel(cubo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(710, 320, 71, 16));
        zoomIn = new QPushButton(cubo);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(750, 50, 51, 51));
        QFont font;
        font.setPointSize(24);
        zoomIn->setFont(font);
        label_3 = new QLabel(cubo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(710, 350, 71, 16));
        zoomOut = new QPushButton(cubo);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(750, 110, 51, 51));
        zoomOut->setFont(font);
        transY = new QTextEdit(cubo);
        transY->setObjectName(QStringLiteral("transY"));
        transY->setGeometry(QRect(730, 350, 71, 21));
        refleja = new QPushButton(cubo);
        refleja->setObjectName(QStringLiteral("refleja"));
        refleja->setGeometry(QRect(710, 480, 91, 51));
        transX = new QTextEdit(cubo);
        transX->setObjectName(QStringLiteral("transX"));
        transX->setGeometry(QRect(730, 320, 71, 21));
        rota = new QPushButton(cubo);
        rota->setObjectName(QStringLiteral("rota"));
        rota->setGeometry(QRect(710, 430, 91, 51));
        label_4 = new QLabel(cubo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(750, 20, 59, 20));
        dibuja = new QPushButton(cubo);
        dibuja->setObjectName(QStringLiteral("dibuja"));
        dibuja->setGeometry(QRect(0, 10, 141, 51));

        retranslateUi(cubo);
        QObject::connect(buttonBox, SIGNAL(accepted()), cubo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), cubo, SLOT(reject()));

        QMetaObject::connectSlotsByName(cubo);
    } // setupUi

    void retranslateUi(QDialog *cubo)
    {
        cubo->setWindowTitle(QApplication::translate("cubo", "Dialog", 0));
        translate->setText(QApplication::translate("cubo", "Translate", 0));
        label_2->setText(QApplication::translate("cubo", "X:", 0));
        zoomIn->setText(QApplication::translate("cubo", "+", 0));
        label_3->setText(QApplication::translate("cubo", "Y:", 0));
        zoomOut->setText(QApplication::translate("cubo", "-", 0));
        refleja->setText(QApplication::translate("cubo", "Refleja", 0));
        rota->setText(QApplication::translate("cubo", "Rotate", 0));
        label_4->setText(QApplication::translate("cubo", "Zoom", 0));
        dibuja->setText(QApplication::translate("cubo", "Dibuja", 0));
    } // retranslateUi

};

namespace Ui {
    class cubo: public Ui_cubo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUBO_H
