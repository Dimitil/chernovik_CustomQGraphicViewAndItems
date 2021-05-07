#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    QPolygonF p;
    p << QPointF(10, 15) << QPointF( 20, 35) << QPointF(52, 0);
    QLineF ln1(QPointF(0,0), QPointF(15,15));
    QLineF ln2(QPointF(7,7), QPointF(0,15));
    CustomGraphicsItemGroup *gr = new CustomGraphicsItemGroup();
    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(4);
    QGraphicsPolygonItem *pItem = new QGraphicsPolygonItem(p);
    pItem->setPen(pen);
    QGraphicsLineItem *lnItem1 = new QGraphicsLineItem(ln1);
    lnItem1->setPen(pen);
    QGraphicsLineItem *lnItem2 = new QGraphicsLineItem(ln2);
    lnItem2->setPen(pen);
    gr->addToGroup(pItem);
    gr->addToGroup(lnItem1);
    gr->addToGroup(lnItem2);
    gr->setFlags(QGraphicsItem::ItemIsMovable);
    scene.addItem(gr);

}

MainWindow::~MainWindow()
{
    delete ui;
}

