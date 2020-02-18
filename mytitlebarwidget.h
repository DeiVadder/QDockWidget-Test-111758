#ifndef MYTITLEBARWIDGET_H
#define MYTITLEBARWIDGET_H

#include <QWidget>

class MyTitleBarWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyTitleBarWidget(QWidget *parent = nullptr);

signals:

public slots:

protected:
    virtual void mousePressEvent(QMouseEvent *)override;
    virtual void mouseReleaseEvent(QMouseEvent *)override;
    virtual void mouseMoveEvent(QMouseEvent *)override;


};

#endif // MYTITLEBARWIDGET_H
