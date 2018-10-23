#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMouseEvent>
#include "labelsinif.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void vurulan_kus_sayisi();
    void kacan_kus_sayisi();
    int sayac=0;
    int kacansayi=0;
    int saniye=0;

private slots:
    void yeni_kus_olustur();
    void gecen_sure();

private:
    Ui::MainWindow *ui;
    QPoint nokta;
    QTimer *sure;
    QTimer *kus_zamanlayici;

};

#endif // MAINWINDOW_H
