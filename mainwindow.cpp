#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "poligono.h"
#include "arco.h"
#include "cubo.h"
#include "prismatriangular.h"
#include "prismarectangular.h"
#include "cono.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_poligono_released(){
    poligono poli;
    poli.setModal(true);
    poli.exec();
}

void MainWindow::on_arco_released(){
    Arco arc;
    arc.setModal(true);
    arc.exec();
}

void MainWindow::on_cubo_released(){
    cubo cu;
    cu.setModal(true);
    cu.exec();
}

void MainWindow::on_trian_released(){
    prismaTriangular prismaT;
    prismaT.setModal(true);
    prismaT.exec();
}

void MainWindow::on_rect_released(){
    prismaRectangular prismaR;
    prismaR.setModal(true);
    prismaR.exec();
}

void MainWindow::on_cono_released(){
    cono co;
    co.setModal(true);
    co.exec();
}
