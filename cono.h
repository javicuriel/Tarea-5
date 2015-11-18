#ifndef CONO_H
#define CONO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class cono;
}

class cono : public QDialog
{
    Q_OBJECT

public:
    explicit cono(QWidget *parent = 0);
    cono(int _translateConeFactorX, int _translateConeFactorY, double _scaleConeFactor, int _rotateConeangle);
    ~cono();

private slots:


    void on_zoomOut_released();
    void on_dibuja_released();
    void on_zoomIn_released();
    void on_translate_released();
    void on_rota_released();
    void on_refleja_released();

protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::cono *ui;
    bool dibuja = false;
    double centerX;
    double centerY;

    QVector<QTransform> transforms;
};

#endif // CONO_H
