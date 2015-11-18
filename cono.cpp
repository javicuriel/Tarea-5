#include "cono.h"
#include "ui_cono.h"
#include <QMessageBox>
#include <math.h>


void drawCono(QPainter & painter);

cono::cono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cono)
{
    ui->setupUi(this);
    centerX = width()/2;
    centerY = height()/2;
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
}

cono::~cono()
{
    delete ui;
}

void cono::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pointPen(Qt::black);
    pointPen.setWidth(2);
    painter.setPen(pointPen);

    //DibujaCubo
    if (dibuja)
    {

        for(int i=0; i<transforms.size(); ++i)
        {
            painter.setTransform(transforms[i],true);
            drawCono(painter);

        }

    }
}

void drawCono(QPainter & painter){
    int x1 = 0;
    int y1 = 40;
    painter.drawEllipse(-25,-17,50,25);
    painter.drawLine(x1,y1,-24,0);
    painter.drawLine(x1,y1,24,0);
}

void cono::on_zoomOut_released(){
    QTransform zoomOut;
    zoomOut.scale(0.5,0.5);
    transforms.push_back(zoomOut);
    update();
}

void cono::on_dibuja_released(){
    dibuja=!dibuja;
    transforms.clear();
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
    update();
}

void cono::on_zoomIn_released(){
    QTransform zoomIn;
    zoomIn.scale(2,2);
    transforms.push_back(zoomIn);
    update();
}

void cono::on_translate_released(){
    QString xStr = ui->transX->toPlainText();
    QString yStr = ui->transY->toPlainText();

    if(!xStr.isEmpty() && !yStr.isEmpty())
    {
        int _xStr = xStr.toInt();
        int _yStr = yStr.toInt();
        QTransform translate;
        translate.translate(_xStr, _yStr);
        transforms.push_back(translate);
    }
    update();
}

void cono::on_rota_released(){
    QTransform rotate;
    rotate.rotate(30);
    transforms.push_back(rotate);
    update();
}

void cono::on_refleja_released(){
    QTransform zoomIn;
    zoomIn.scale(-1,1);
    transforms.push_back(zoomIn);
    update();
}
