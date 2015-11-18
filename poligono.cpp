#include "poligono.h"
#include "ui_poligono.h"
#include <QMessageBox>
#include <math.h>


void drawPoligono(int lados, QPainter & painter);

poligono::poligono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::poligono)
{

    ui->setupUi(this);
    centerX = width()/2;
    centerY = height()/2;
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
}

poligono::~poligono()
{
    delete ui;
}


void poligono::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pointPen(Qt::black);
    pointPen.setWidth(2);
    painter.setPen(pointPen);

    if (dibuja) {

        QString ladosStr = ui->lados->toPlainText();


        if (!ladosStr.isEmpty()) {

            painter.setPen(pointPen);

           lados = ladosStr.toInt();

            for(int i=0; i<transforms.size(); ++i)
            {
                painter.setTransform(transforms[i],true);
                drawPoligono(lados, painter);

            }

        }
    }

}

void drawPoligono(int lados, QPainter & painter)
{
    double radio = 100;
    double angulo = (double)360.0/(double)lados;
    double xCentro = 0.0;
    double yCentro = 0.0;

    int xi,yi,xf,yf;
    double val = M_PI / 180;
    angulo *= val;
    int a = 0;

    for(a=1; a<=lados; a++) {
        xi = xCentro + (radio * cos(angulo*a));
        yi = yCentro + (radio * sin(angulo*a));

        xf = xCentro + (radio * cos(angulo*(a+1)));
        yf = yCentro + (radio * sin(angulo*(a+1)));
        painter.drawLine(xi, yi, xf, yf);

    }
}



void poligono::on_zoomOut_released(){
    QTransform zoomOut;
    zoomOut.scale(0.5,0.5);
    transforms.push_back(zoomOut);
    update();
}

void poligono::on_dibuja_released(){
    dibuja=!dibuja;
    transforms.clear();
    QTransform center;
    center.translate(centerX,centerY);
    transforms.push_back(center);
    update();
}

void poligono::on_zoomIn_released(){
    QTransform zoomIn;
    zoomIn.scale(2,2);
    transforms.push_back(zoomIn);
    update();
}

void poligono::on_translate_released(){
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

void poligono::on_rota_released(){
    QTransform rotate;
    rotate.rotate(30);
    transforms.push_back(rotate);
    update();
}

void poligono::on_refleja_released(){
    QTransform zoomIn;
    zoomIn.scale(-1,1);
    transforms.push_back(zoomIn);
    update();
}
