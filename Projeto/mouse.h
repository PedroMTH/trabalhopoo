#ifndef MOUSE_H
#define MOUSE_H
#include <QGraphicsPixmapItem>
#include <QMouseEvent>

class Mouse: public QGraphicsPixmapItem {
public:
  Mouse();

  void mousePressEvent(QMouseEvent* event);
};

#endif // MOUSE_H
