#include "labelsinif.h"
#include "mainwindow.h"
#include <QTime>

labelsinif::labelsinif(QWidget *parent) :
    QLabel(parent)
{
    zamanlayici = new QTimer();
    connect(zamanlayici,SIGNAL(timeout()),this,SLOT(ilerlet()));
    setGeometry(x()+10,rand() % 700+90, 100,100 );
    setScaledContents(true);
    QImage res(":/resimler/resimler/kus.gif");
    setPixmap(QPixmap::fromImage(res));
    show();
    zamanlayici->start(50);
}

void labelsinif::mousePressEvent(QMouseEvent *event)
{
    ana_sahne->sayac+=1;
    ana_sahne->vurulan_kus_sayisi();
    hide();
    zamanlayici->stop();
}

void labelsinif::ilerlet()
{
    setGeometry(x() + 10, y(), 100 , 100);
    if(x()>1000)
    {
        ana_sahne->kacansayi+=1;
        ana_sahne->kacan_kus_sayisi();
        hide();
        zamanlayici->stop();
    }
}
