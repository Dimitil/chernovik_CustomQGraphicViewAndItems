#ifndef CUSTOMGRAPHICSVIEW_H
#define CUSTOMGRAPHICSVIEW_H

#include <QGraphicsView>
#include "customgraphicsitemgroup.h"

class CustomGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    CustomGraphicsView(QWidget * par = nullptr);
};

#endif // CUSTOMGRAPHICSVIEW_H
