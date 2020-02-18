#include "mytitlebarwidget.h"

#include <QMouseEvent>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>

MyTitleBarWidget::MyTitleBarWidget(QWidget *parent) : QWidget(parent)
{
    setMinimumSize(QSize(100,50));

    QVBoxLayout *l = new QVBoxLayout(this);
    l->addWidget(new QLabel("ShowMeSomething"));

}

void MyTitleBarWidget::mousePressEvent(QMouseEvent *e)
{
    qDebug() << Q_FUNC_INFO;
    QWidget::mousePressEvent(e);
}

void MyTitleBarWidget::mouseReleaseEvent(QMouseEvent *e)
{
    qDebug() << Q_FUNC_INFO;
    QWidget::mouseReleaseEvent(e);
}

void MyTitleBarWidget::mouseMoveEvent(QMouseEvent *e)
{
//    qDebug() << Q_FUNC_INFO;
    QWidget::mouseMoveEvent(e);
}
