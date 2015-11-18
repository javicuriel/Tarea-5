#include "Arco.h"
#include "ui_Arco.h"
#include <QMessageBox>
#include <math.h>

#define PI 3.14159265

void drawArco(int angulo, int radio, QPainter & painter);

Arco::Arco(QWidget *parent) :
QDialog(parent),
ui(new Ui::Arco)
{
    ui->setupUi(this);
    centerX = width()/2;
    centerY = height()/2;
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
}

Arco::~Arco()
{
    delete ui;
}

void Arco::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    
    if (dibuja) {
        QString radioStr =  ui->radioTxt->toPlainText();
        QString anguloStr =  ui->angulosTxt->toPlainText();

            int angulo = anguloStr.toInt();
            int radio = radioStr.toInt();
        
        if (!radioStr.isEmpty() && !anguloStr.isEmpty()) {
            
            QPen pointPen(Qt::black);
            pointPen.setWidth(2);
            painter.setPen(pointPen);
            
            for(int i=0; i<transforms.size(); ++i)
            {
                painter.setTransform(transforms[i],true);
                drawArco(angulo, radio,  painter);

            }
            
        }
               
    }
    
}

void drawArco(int angulo, int radio, QPainter & painter){
    //---Dibuja por simetría en todos los octantes---
    int x = 0;
    int y = radio;
    double p = 5.0/4.0-y;

    //centro de la ventana
    int maxx = 0;
    int maxy = 0;

    int oct = (angulo - (angulo % 45)) / 45;
    double limit1 = tan((90.0 - (angulo % 90)) * PI / 180.0) * x;
    double limit2 = tan((45.0 + (angulo % 45)) * PI / 180.0) * x;

    if (oct > 0 || (oct == 0 && y > limit1))
        painter.drawPoint(maxx+x,maxy-y);
    if (oct > 1 || (oct == 1 && y <= limit2))
        painter.drawPoint(maxx+y,maxy-x);
    if (oct > 2 || (oct == 2 && y > limit1))
        painter.drawPoint(maxx+y,maxy+x);
    if (oct > 3 || (oct == 3 && y <= limit2))
        painter.drawPoint(maxx+x,maxy+y);
    if (oct > 4 || (oct == 4 && y > limit1))
        painter.drawPoint(maxx-x,maxy+y);
    if (oct > 5 || (oct == 5 && y <= limit2))
        painter.drawPoint(maxx-y,maxy+x);
    if (oct > 6 || (oct == 6 && y > limit1))
        painter.drawPoint(maxx-y,maxy-x);
    if (oct > 7 || (oct == 7 && y <= limit2))
        painter.drawPoint(maxx-x,maxy-y);

    while(y > x)
    {
        if(p < 0)
            p += 2.0 * x + 3.0;
        else {
            p += 2.0 * (x - y) + 5.0;
            y--;
        }

        x++;

        //---MidPointCircle---
        //centro de la ventana
        int maxx = 0;
        int maxy = 0;

        int oct = (angulo - (angulo % 45)) / 45;
        double limit1 = tan((90.0 - (angulo % 90)) * PI / 180.0) * x;
        double limit2 = tan((45.0 + (angulo % 45)) * PI / 180.0) * x;

        if (oct > 0 || (oct == 0 && y > limit1))
            painter.drawPoint(maxx+x,maxy-y);
        if (oct > 1 || (oct == 1 && y <= limit2))
            painter.drawPoint(maxx+y,maxy-x);
        if (oct > 2 || (oct == 2 && y > limit1))
            painter.drawPoint(maxx+y,maxy+x);
        if (oct > 3 || (oct == 3 && y <= limit2))
            painter.drawPoint(maxx+x,maxy+y);
        if (oct > 4 || (oct == 4 && y > limit1))
            painter.drawPoint(maxx-x,maxy+y);
        if (oct > 5 || (oct == 5 && y <= limit2))
            painter.drawPoint(maxx-y,maxy+x);
        if (oct > 6 || (oct == 6 && y > limit1))
            painter.drawPoint(maxx-y,maxy-x);
        if (oct > 7 || (oct == 7 && y <= limit2))
            painter.drawPoint(maxx-x,maxy-y);
    }
}



void Arco::on_zoomOut_released(){
    QTransform zoomOut;
    zoomOut.scale(0.5,0.5);
    transforms.push_back(zoomOut);
    update();
}

void Arco::on_dibuja_released(){
    dibuja=!dibuja;
    transforms.clear();
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
    update();
}

void Arco::on_zoomIn_released(){
    QTransform zoomIn;
    zoomIn.scale(2,2);
    transforms.push_back(zoomIn);
    update();
}

void Arco::on_translate_released(){
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

void Arco::on_rota_released(){
    QTransform rotate;
    rotate.rotate(30);
    transforms.push_back(rotate);
    update();
}

void Arco::on_refleja_released(){
    QTransform zoomIn;
    zoomIn.scale(-1,1);
    transforms.push_back(zoomIn);
    update();
}
