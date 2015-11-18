#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_poligono_released();

    void on_arco_released();

    void on_cubo_released();

    void on_trian_released();

    void on_rect_released();

    void on_cono_released();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
