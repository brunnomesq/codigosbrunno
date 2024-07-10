#include "desenhografico.h"
#include <QTableWidget>
#include <QGraphicsProxyWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QHeaderView>
#include <QTableWidgetItem>
#include <QDebug>

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

        // Criar e adicionar QGraphicsProxyWidget para QTableWidget
        QTableWidget *table = new QTableWidget(2, 4); // Exemplo: 2x2 table
        table->setFixedSize(160, 90); // Definir o tamanho fixo para o QTableWidget
        table->verticalHeader()->setVisible(false); // Ocultar cabeçalho vertical (números das linhas)
        table->horizontalHeader()->setVisible(false);

        table->setRowHeight(0, 35); // Definir altura da primeira linha
        table->setRowHeight(1, 35); // Definir altura da primeira linha
        table->setColumnWidth(0, 10); // Definir largura da primeira coluna
        table->setColumnWidth(1, 10); // Definir largura da primeira coluna
        table->setColumnWidth(2, 10); // Definir largura da primeira coluna
        table->setColumnWidth(3, 10); // Definir largura da primeira coluna

        QTableWidgetItem *item0 = new QTableWidgetItem("CA");
        QTableWidgetItem *item1 = new QTableWidgetItem("VP");
        QTableWidgetItem *item2 = new QTableWidgetItem("QAV");
        QTableWidgetItem *item3 = new QTableWidgetItem("SV");
        //QTableWidgetItem *itemV = new QTableWidgetItem("V");

        // Definir o item na coluna 0, linha 0
        table->setItem(0, 0, item0);
        table->setItem(0, 1, item1);
        table->setItem(0, 2, item2);
        table->setItem(0, 3, item3);
        //table->setItem(1, 3, itemV);


        QGraphicsProxyWidget *proxy = new QGraphicsProxyWidget(this);
        proxy->setWidget(table);
        proxy->setPos(pos.x() + NODE_RADIUS + 10, pos.y()); // Posicionar fora do círculo
        m_nodeTableProxies.append(proxy);



    }
}
QString GraphPaint::getInfoCaminho(){
    return this->caminhoT;
}

void GraphPaint::ajustarTableEtiqueta(int i, int CA, int VP, int QAV){
    QTableWidget *tableVertex1 = static_cast<QTableWidget*>(m_nodeTableProxies[i]->widget());
    if (tableVertex1) {
        QTableWidgetItem *item0 = new QTableWidgetItem(QString::number(CA));
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(VP));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(QAV));
        QTableWidgetItem *item3 = new QTableWidgetItem("V");

        // Definir o item na coluna 0, linha 1 (segunda linha)
        tableVertex1->setItem(1, 0, item0);
        tableVertex1->setItem(1, 1, item1);
        tableVertex1->setItem(1, 2, item2);
        tableVertex1->setItem(1, 3, item3);
    }
}
void GraphPaint::calcularCaminho(int pontoPartida) {
    int tamanho = graph->getTamanho();
    int peso[tamanho];
    int QAV[tamanho];
    int VP[tamanho];
    QString caminho[tamanho];

    for (int i = 0; i < tamanho; i++) {
        peso[i] = INT_MAX; // Inicializa todos os pesos com um valor alto
        QAV[i] = 1;
        VP[i] = 0;
        caminho[i] = "";
    }

    peso[pontoPartida] = 0; // Ponto de partida
    caminho[pontoPartida] = QString::number(pontoPartida + 1);

    // Inicializa os vértices ligados ao ponto de partida
    for (int i = 0; i < tamanho; i++) {
        if (i != pontoPartida) {
            int a = graph->acessar(pontoPartida, i);
            if (a != -1) {
                peso[i] = a;
                caminho[i] = QString::number(pontoPartida + 1) + " -> " + QString::number(i + 1);
                VP[i] = pontoPartida+1;
            }
        }
    }

    // Verificação para encontrar o menor caminho
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i != j) {
                int a = graph->acessar(i, j);
                if (a != -1) {
                    int aux = peso[i] + a;
                    if (aux < peso[j]) {
                        peso[j] = aux;
                        QAV[j]++;
                        VP[j] = i+1;
                        caminho[j] = caminho[i] + " -> " + QString::number(j + 1);
                    }
                }
            }
        }
    }

    caminhoT = "";
    for (int i = 0; i < tamanho; i++) {
        if (i != pontoPartida) {
            ajustarTableEtiqueta(i, peso[i], VP[i], QAV[i]);
            caminhoT += "Caminho para o vértice " + QString::number(i + 1) + ": " + caminho[i] + "\n";
        }
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

    QVector<QVector<int>> drawn(graph->getTamanho(), QVector<int>(graph->getTamanho(), 0)); // Matriz para controlar arestas já desenhadas

    for (int i = 0; i < graph->getTamanho(); i++) {
        for (int j = 0; j < graph->getTamanho(); j++) {
            if (i != j && graph->acessar(i, j) != -1) {
                QPointF midPoint = (m_nodePositions[i] + m_nodePositions[j]) / 2;

                // Calcular um ponto intermediário para posicionar o texto
                QPointF textPos;
                if (drawn[i][j] == 0) {
                    // Primeira vez que desenha essa aresta, calcula deslocamento lateral
                    QPointF dir = m_nodePositions[j] - m_nodePositions[i];
                    QPointF norm(-dir.y(), dir.x());
                    norm /= sqrt(norm.x() * norm.x() + norm.y() * norm.y());
                    norm *= 15; // Ajuste o valor de acordo com o espaçamento desejado
                    textPos = midPoint + norm;
                    drawn[i][j] = 1;
                } else {
                    // Aresta já desenhada, usa o mesmo deslocamento lateral
                    QPointF dir = m_nodePositions[j] - m_nodePositions[i];
                    QPointF norm(-dir.y(), dir.x());
                    norm /= sqrt(norm.x() * norm.x() + norm.y() * norm.y());
                    norm *= 15; // Ajuste o valor de acordo com o espaçamento desejado
                    textPos = midPoint - norm; // Desloca para o lado oposto
                }

                painter->drawText(textPos, QString::number(graph->acessar(i, j)));
                painter->drawLine(m_nodePositions[i], m_nodePositions[j]);
            }
        }
    }

    for (int i = 0; i < m_nodePositions.size(); i++) {
        QPointF pos = m_nodePositions[i];

        QRectF rect(pos.x() - NODE_RADIUS, pos.y() - NODE_RADIUS, 2 * NODE_RADIUS, 2 * NODE_RADIUS);

        painter->drawEllipse(rect);

        // Desenhar o número do vértice começando em 1
        painter->drawText(rect, Qt::AlignCenter, QString::number(i + 1));
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

        // Atualizar a posição do QGraphicsProxyWidget
        m_nodeTableProxies[i]->setPos(pos.x() + NODE_RADIUS + 10, pos.y());
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
