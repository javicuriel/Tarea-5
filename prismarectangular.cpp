#include "prismarectangular.h"
#include "ui_prismarectangular.h"

#include <QMessageBox>
#include <math.h>

void drawPrismaR(QPainter & painter);

prismaRectangular::prismaRectangular(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prismaRectangular)
{
    ui->setupUi(this);
    centerX = width()/2;
    centerY = height()/2;
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
}


prismaRectangular::~prismaRectangular()
{
    delete ui;
}

void prismaRectangular::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pointPen(Qt::black);
    pointPen.setWidth(2);
    painter.setPen(pointPen);


    if(dibuja)
    {
        for(int i=0; i<transforms.size(); ++i)
        {
            painter.setTransform(transforms[i],true);
            drawPrismaR(painter);

        }
    }


}

void drawPrismaR(QPainter & painter){
       int x0 = 0;
       int y0 = 50;
       int x1 = 50;
       int y1 = 50;
       int x2 = 0;
       int y2 = -100;
       int x3 = 50;
       int y3 = -100;

           //Cuadrado 3
           int x4 = x0+30;
       int y4 = y0-50;
       int x5 = x1+30;
       int y5 = y1-50;
       int x6 = x2+30;
       int y6 = y2-50;
       int x7 = x3+30;
       int y7 = y3-50;

       painter.drawLine(x0,y0,x1,y1);
       painter.drawLine(x2,y2,x3,y3);
       painter.drawLine(x2,y2,x0,y0);
       painter.drawLine(x3,y3,x1,y1);

           painter.drawLine(x4,y4,x5,y5);
       painter.drawLine(x6,y6,x7,y7);
       painter.drawLine(x6,y6,x4,y4);
       painter.drawLine(x7,y7,x5,y5);

           painter.drawLine(x0,y0,x4,y4);
           painter.drawLine(x1,y1,x5,y5);
           painter.drawLine(x2,y2,x6,y6);
           painter.drawLine(x3,y3,x7,y7);
}



void prismaRectangular::on_zoomOut_released(){
    QTransform zoomOut;
    zoomOut.scale(0.5,0.5);
    transforms.push_back(zoomOut);
    update();
}

void prismaRectangular::on_dibuja_released(){
    dibuja=!dibuja;
    transforms.clear();
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
    update();
}

void prismaRectangular::on_zoomIn_released(){
    QTransform zoomIn;
    zoomIn.scale(2,2);
    transforms.push_back(zoomIn);
    update();
}

void prismaRectangular::on_translate_released(){
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

void prismaRectangular::on_rota_released(){
    QTransform rotate;
    rotate.rotate(30);
    transforms.push_back(rotate);
    update();
}

void prismaRectangular::on_refleja_released(){
    QTransform zoomIn;
    zoomIn.scale(-1,1);
    transforms.push_back(zoomIn);
    update();
}

