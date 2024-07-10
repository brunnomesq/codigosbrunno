#ifndef DESENHOGRAFICO_H
#define DESENHOGRAFICO_H
#include <QGraphicsItem>
#include <QRandomGenerator>
#include "grafico.h"
#include <QPainter>

class GraphPaint : public QGraphicsItem {
public:
    GraphPaint(Grafico* outside,QSize gp);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QPointF repulsiveForce(QPointF u, QPointF v);
    QPointF attractiveForce(QPointF u, QPointF v);
    void updatePositions();
    QRectF boundingRect() const override;

private:
    QVector<QPointF> m_nodePositions;
    QVector<QPair<int, int>> m_edges;
    Grafico *graph;

    const qreal NODE_RADIUS = 10;
    const qreal PEN_WIDTH = 2;
    static const int FONT_SIZE = 12;
};


#endif // DESENHOGRAFICO_H
