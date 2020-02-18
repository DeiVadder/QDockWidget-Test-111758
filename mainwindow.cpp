#include "mainwindow.h"

#include "mytitlebarwidget.h"
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QDockWidget *mainWidget = new QDockWidget();
    mainWidget->setTitleBarWidget(new MyTitleBarWidget());
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

