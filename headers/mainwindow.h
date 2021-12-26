#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"

// Namespace of auto-generated ui_mainwindow.h. MainWindow class will be defined later
namespace Ui {
    class MainWindow;
}

class QCustomPlotMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QCustomPlotMainWindow(QWidget* parent = nullptr);
    ~QCustomPlotMainWindow() override;

private:
    Ui::MainWindow* ui;
    QCustomPlot* customPlot;
};

#endif // MAINWINDOW_H