#ifndef ARCO_H
#define ARCO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>


namespace Ui {
    class Arco;
}

class Arco : public QDialog
{
    Q_OBJECT
    
public:
    explicit Arco(QWidget *parent = 0);
    ~Arco();
    
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
    Ui::Arco *ui;
    bool dibuja = false;
    int angulo = 0;
    int radio = 0;
    double centerX ;
    double centerY;
        QVector<QTransform> transforms;
};

#endif // ARCO_H
