/********************************************************************************
** Form generated from reading UI file 'prismarectangular.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMARECTANGULAR_H
#define UI_PRISMARECTANGULAR_H

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

class Ui_prismaRectangular
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *transX;
    QTextEdit *transY;
    QPushButton *rota;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *zoomOut;
    QPushButton *refleja;
    QLabel *label_2;
    QPushButton *translate;
    QPushButton *dibuja;
    QPushButton *zoomIn;

    void setupUi(QDialog *prismaRectangular)
    {
        if (prismaRectangular->objectName().isEmpty())
            prismaRectangular->setObjectName(QStringLiteral("prismaRectangular"));
        prismaRectangular->resize(919, 520);
        buttonBox = new QDialogButtonBox(prismaRectangular);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(560, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        transX = new QTextEdit(prismaRectangular);
        transX->setObjectName(QStringLiteral("transX"));
        transX->setGeometry(QRect(840, 240, 71, 21));
        transY = new QTextEdit(prismaRectangular);
        transY->setObjectName(QStringLiteral("transY"));
        transY->setGeometry(QRect(840, 270, 71, 21));
        rota = new QPushButton(prismaRectangular);
        rota->setObjectName(QStringLiteral("rota"));
        rota->setGeometry(QRect(820, 350, 91, 51));
        label_3 = new QLabel(prismaRectangular);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(820, 270, 71, 16));
        label_4 = new QLabel(prismaRectangular);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(850, 0, 59, 20));
        zoomOut = new QPushButton(prismaRectangular);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(850, 90, 51, 51));
        QFont font;
        font.setPointSize(24);
        zoomOut->setFont(font);
        refleja = new QPushButton(prismaRectangular);
        refleja->setObjectName(QStringLiteral("refleja"));
        refleja->setGeometry(QRect(820, 400, 91, 51));
        label_2 = new QLabel(prismaRectangular);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(820, 240, 71, 16));
        translate = new QPushButton(prismaRectangular);
        translate->setObjectName(QStringLiteral("translate"));
        translate->setGeometry(QRect(820, 300, 91, 51));
        dibuja = new QPushButton(prismaRectangular);
        dibuja->setObjectName(QStringLiteral("dibuja"));
        dibuja->setGeometry(QRect(0, 10, 141, 51));
        zoomIn = new QPushButton(prismaRectangular);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(850, 30, 51, 51));
        zoomIn->setFont(font);

        retranslateUi(prismaRectangular);
        QObject::connect(buttonBox, SIGNAL(accepted()), prismaRectangular, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), prismaRectangular, SLOT(reject()));

        QMetaObject::connectSlotsByName(prismaRectangular);
    } // setupUi

    void retranslateUi(QDialog *prismaRectangular)
    {
        prismaRectangular->setWindowTitle(QApplication::translate("prismaRectangular", "Dialog", 0));
        rota->setText(QApplication::translate("prismaRectangular", "Rotate", 0));
        label_3->setText(QApplication::translate("prismaRectangular", "Y:", 0));
        label_4->setText(QApplication::translate("prismaRectangular", "Zoom", 0));
        zoomOut->setText(QApplication::translate("prismaRectangular", "-", 0));
        refleja->setText(QApplication::translate("prismaRectangular", "Refleja", 0));
        label_2->setText(QApplication::translate("prismaRectangular", "X:", 0));
        translate->setText(QApplication::translate("prismaRectangular", "Translate", 0));
        dibuja->setText(QApplication::translate("prismaRectangular", "Dibuja", 0));
        zoomIn->setText(QApplication::translate("prismaRectangular", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class prismaRectangular: public Ui_prismaRectangular {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMARECTANGULAR_H
