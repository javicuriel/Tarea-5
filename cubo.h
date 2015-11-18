#ifndef CUBO_H
#define CUBO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class cubo;
}

class cubo : public QDialog
{
    Q_OBJECT

public:
    explicit cubo(QWidget *parent = 0);
    ~cubo();

private:
    Ui::cubo *ui;
    bool dibuja = false;
    double centerX;
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

#endif // CUBO_H
