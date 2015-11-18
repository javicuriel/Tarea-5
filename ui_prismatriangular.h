/********************************************************************************
** Form generated from reading UI file 'prismatriangular.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMATRIANGULAR_H
#define UI_PRISMATRIANGULAR_H

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

class Ui_prismaTriangular
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

    void setupUi(QDialog *prismaTriangular)
    {
        if (prismaTriangular->objectName().isEmpty())
            prismaTriangular->setObjectName(QStringLiteral("prismaTriangular"));
        prismaTriangular->resize(919, 520);
        buttonBox = new QDialogButtonBox(prismaTriangular);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(560, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        translate = new QPushButton(prismaTriangular);
        translate->setObjectName(QStringLiteral("translate"));
        translate->setGeometry(QRect(820, 300, 91, 51));
        label_2 = new QLabel(prismaTriangular);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(820, 240, 71, 16));
        zoomIn = new QPushButton(prismaTriangular);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(850, 30, 51, 51));
        QFont font;
        font.setPointSize(24);
        zoomIn->setFont(font);
        label_3 = new QLabel(prismaTriangular);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(820, 270, 71, 16));
        zoomOut = new QPushButton(prismaTriangular);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(850, 90, 51, 51));
        zoomOut->setFont(font);
        transY = new QTextEdit(prismaTriangular);
        transY->setObjectName(QStringLiteral("transY"));
        transY->setGeometry(QRect(840, 270, 71, 21));
        refleja = new QPushButton(prismaTriangular);
        refleja->setObjectName(QStringLiteral("refleja"));
        refleja->setGeometry(QRect(820, 400, 91, 51));
        transX = new QTextEdit(prismaTriangular);
        transX->setObjectName(QStringLiteral("transX"));
        transX->setGeometry(QRect(840, 240, 71, 21));
        rota = new QPushButton(prismaTriangular);
        rota->setObjectName(QStringLiteral("rota"));
        rota->setGeometry(QRect(820, 350, 91, 51));
        label_4 = new QLabel(prismaTriangular);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(850, 0, 59, 20));
        dibuja = new QPushButton(prismaTriangular);
        dibuja->setObjectName(QStringLiteral("dibuja"));
        dibuja->setGeometry(QRect(0, 10, 141, 51));

        retranslateUi(prismaTriangular);
        QObject::connect(buttonBox, SIGNAL(accepted()), prismaTriangular, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), prismaTriangular, SLOT(reject()));

        QMetaObject::connectSlotsByName(prismaTriangular);
    } // setupUi

    void retranslateUi(QDialog *prismaTriangular)
    {
        prismaTriangular->setWindowTitle(QApplication::translate("prismaTriangular", "Dialog", 0));
        translate->setText(QApplication::translate("prismaTriangular", "Translate", 0));
        label_2->setText(QApplication::translate("prismaTriangular", "X:", 0));
        zoomIn->setText(QApplication::translate("prismaTriangular", "+", 0));
        label_3->setText(QApplication::translate("prismaTriangular", "Y:", 0));
        zoomOut->setText(QApplication::translate("prismaTriangular", "-", 0));
        refleja->setText(QApplication::translate("prismaTriangular", "Refleja", 0));
        rota->setText(QApplication::translate("prismaTriangular", "Rotate", 0));
        label_4->setText(QApplication::translate("prismaTriangular", "Zoom", 0));
        dibuja->setText(QApplication::translate("prismaTriangular", "Dibuja", 0));
    } // retranslateUi

};

namespace Ui {
    class prismaTriangular: public Ui_prismaTriangular {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMATRIANGULAR_H
