#ifndef PRISMATRIANGULAR_H
#define PRISMATRIANGULAR_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class prismaTriangular;
}

class prismaTriangular : public QDialog
{
    Q_OBJECT

public:
    explicit prismaTriangular(QWidget *parent = 0);
    ~prismaTriangular();

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
    Ui::prismaTriangular *ui;
    bool dibuja= false;
    double centerX;
    double centerY;

    QVector<QTransform> transforms;

};

#endif // PRISMATRIANGULAR_H
