#ifndef PRISMARECTANGULAR_H
#define PRISMARECTANGULAR_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class prismaRectangular;
}

class prismaRectangular : public QDialog
{
    Q_OBJECT

public:
    explicit prismaRectangular(QWidget *parent = 0);
    ~prismaRectangular();

protected:
    void paintEvent(QPaintEvent *e);

private slots:

    void on_zoomOut_released();
    void on_dibuja_released();
    void on_zoomIn_released();
    void on_translate_released();
    void on_rota_released();
    void on_refleja_released();
private:
    Ui::prismaRectangular *ui;
    bool dibuja= false;
    double centerX;
    double centerY;

    QVector<QTransform> transforms;

};

#endif // PRISMARECTANGULAR_H
