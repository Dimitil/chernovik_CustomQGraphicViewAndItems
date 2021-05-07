#ifndef CUSTOMGRAPHICSITEMGROUP_H
#define CUSTOMGRAPHICSITEMGROUP_H

#include <QGraphicsItemGroup>
#include <QDebug>
class CustomGraphicsItemGroup : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
public:
    CustomGraphicsItemGroup()
    {
    }

    // QGraphicsItem interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override
    {
        qDebug() << "mousepress";
        QGraphicsItemGroup::mousePressEvent(event);
    }
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override
    {
        qDebug() << "MouseMove";
        QGraphicsItemGroup::mouseMoveEvent(event);
    }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override
    {
        qDebug() << "mouseRelease";
        QGraphicsItemGroup::mouseReleaseEvent(event);
    }
};

#endif // CUSTOMGRAPHICSITEMGROUP_H
