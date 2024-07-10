#include "desenhografico.h"

GraphPaint::GraphPaint(Grafico *outside, QSize graphicsView)
    : graph(outside)
{
    // Set the flags to enable mouse interaction and antialiasing
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);

    int n = graph->getTamanho();
    int r = qMin(graphicsView.width(), graphicsView.height()) / 2 - 20; // Calcula o raio do círculo, considerando uma margem

    // Calcular a posição dos pontos em um círculo
    for (int i = 0; i < n; i++) {
        qreal angle = (2 * M_PI / n) * i; // Calcula o ângulo de cada ponto
        qreal x = r * qCos(angle) + graphicsView.width() / 2;
        qreal y = r * qSin(angle) + graphicsView.height() / 2;

        QPointF pos(x, y);
        m_nodePositions.append(pos);
    }
}

void GraphPaint::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, PEN_WIDTH);
    QBrush brush(Qt::white);
    painter->setPen(pen);
    painter->setBrush(brush);

    QFont font;
    font.setPointSize(FONT_SIZE);
    painter->setFont(font);

    for (int i = 0; i < graph->getTamanho(); i++) {
        for (int j = 0; j < graph->getTamanho(); j++) {
            if (graph->acessar(i, j) != -1) {
                QPointF midPoint = (m_nodePositions[i] + m_nodePositions[j]) / 2;
                painter->drawText(midPoint + QPointF(5, -5), QString::number(graph->acessar(i, j)));
                painter->drawLine(m_nodePositions[i], m_nodePositions[j]);
            }
        }
    }

    for (int i = 0; i < m_nodePositions.size(); i++) {
        QPointF pos = m_nodePositions[i];

        QRectF rect(pos.x() - NODE_RADIUS, pos.y() - NODE_RADIUS, 2 * NODE_RADIUS, 2 * NODE_RADIUS);

        painter->drawEllipse(rect);

        painter->drawText(rect, Qt::AlignCenter, QString::number(i));
    }
}

QPointF GraphPaint::repulsiveForce(QPointF u, QPointF v) {
    qreal d = QLineF(u, v).length();

    qreal k = 100;

    qreal f = k * k / d;

    qreal dx = u.x() - v.x();
    qreal dy = u.y() - v.y();
    qreal theta = qAtan2(dy, dx);
    return QPointF(f * qCos(theta), f * qSin(theta));
}

QPointF GraphPaint::attractiveForce(QPointF u, QPointF v) {
    qreal d = QLineF(u, v).length();

    qreal k = 100;

    qreal f = d * d / k;
    qreal dx = u.x() - v.x();
    qreal dy = u.y() - v.y();
    qreal theta = qAtan2(dy, dx);

    return QPointF(f * qCos(theta), f * qSin(theta));
}

void GraphPaint::updatePositions() {
    int n = graph->getTamanho();

    QList<QPointF> forces;

    for (int i = 0; i < n; i++) {
        forces.append(QPointF(0, 0));
    }

    // Loop through all pairs of nodes
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Calculate the repulsive force between the nodes
            QPointF f = repulsiveForce(m_nodePositions[i], m_nodePositions[j]);

            // Add the force to both nodes
            forces[i] += f;
            forces[j] -= f;
        }
    }

    // Loop through all edges
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check if the nodes are adjacent
            if (graph->acessar(i, j) != -1) {
                // Calculate the attractive force between the nodes
                QPointF f = attractiveForce(m_nodePositions[i], m_nodePositions[j]);

                // Subtract the force from both nodes
                forces[i] -= f;
                forces[j] += f;
            }
        }
    }

    // Atualizar as posições dos nós sem movê-los
    for (int i = 0; i < n; i++) {
        // Mantenha as posições fixas
        QPointF pos = m_nodePositions[i];
        QPointF f = forces[i];

        // Armazene as forças, mas não as aplique
        qreal dx = f.x();
        qreal dy = f.y();
        qreal d = qSqrt(dx * dx + dy * dy);
        qreal theta = qAtan2(dy, dx);
        qreal delta = qMin(d, 10.0); // Valor arbitrário para delta, só para manter o formato

        // Mantenha a posição do nó
        m_nodePositions[i] = pos;
    }

    // Atualizar a cena para desenhar as arestas
    update();
}

// BoundingRect method that returns the bounding rectangle of the graph
QRectF GraphPaint::boundingRect() const
{
    // Initialize the minimum and maximum coordinates
    qreal minX = std::numeric_limits<qreal>::max();
    qreal minY = std::numeric_limits<qreal>::max();
    qreal maxX = std::numeric_limits<qreal>::min();
    qreal maxY = std::numeric_limits<qreal>::min();

    // Loop through the node positions and update the coordinates
    for (const QPointF &pos : m_nodePositions) {
        minX = std::min(minX, pos.x() - NODE_RADIUS - PEN_WIDTH);
        minY = std::min(minY, pos.y() - NODE_RADIUS - PEN_WIDTH);
        maxX = std::max(maxX, pos.x() + NODE_RADIUS + PEN_WIDTH);
        maxY = std::max(maxY, pos.y() + NODE_RADIUS + PEN_WIDTH);
    }

    // Return the bounding rectangle
    return QRectF(minX, minY, maxX - minX, maxY - minY);
}
