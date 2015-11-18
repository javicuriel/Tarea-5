#ifndef POLIGONO_H
#define POLIGONO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class poligono;
}

class poligono : public QDialog
{
    Q_OBJECT

public:
    explicit poligono(QWidget *parent = 0);
    ~poligono();

private:
    Ui::poligono *ui;
    bool dibuja = false;
    int lados=0;
    double centerX ;
    double centerY;

    QVector<QTransform> transforms;

protected:
    void paintEvent(QPaintEvent *e);

private slots:


    void on_zoomOut_released();
    void on_dibuja_released();
    void on_zoomIn_released();
    void on_translate_released();
    void on_rota_released();
    void on_refleja_released();
};

#endif // POLIGONO_H
