#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QImage res(":/resimler/resimler/arkaplan.jpg");

    ui->label_7->setPixmap(QPixmap::fromImage(res));
    show();

    kus_zamanlayici = new QTimer();
    connect(kus_zamanlayici,SIGNAL(timeout()),this,SLOT(yeni_kus_olustur()));
    kus_zamanlayici->start(1000);

    sure = new QTimer();
    connect(sure,SIGNAL(timeout()),this,SLOT(gecen_sure()));
    sure->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gecen_sure()
{
   saniye +=1;
   ui->label_2->setText(QString::number(saniye));
}

void MainWindow::yeni_kus_olustur()
{
    labelsinif *yenilabel = new labelsinif(this);
    yenilabel->ana_sahne=this;
}

void MainWindow::vurulan_kus_sayisi()
{
    ui->label->setText(QString::number(sayac));
}

void MainWindow::kacan_kus_sayisi()
{
    ui->label_3->setText(QString::number(kacansayi));
}

