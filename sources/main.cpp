#include "mainwindow.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QCustomPlotMainWindow mainWindow;
    mainWindow.show();
    return QApplication::exec();
}
