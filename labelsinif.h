#ifndef LABELSINIF_H
#define LABELSINIF_H
#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <QMouseEvent>


class MainWindow;

class labelsinif : public QLabel
{
    Q_OBJECT
public:
    explicit labelsinif(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
    MainWindow *ana_sahne;
    QTimer *zamanlayici;

signals:

public slots:
    void ilerlet();



private:

};

#endif // LABELSINIF_H
