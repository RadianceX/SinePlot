#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>


QCustomPlotMainWindow::QCustomPlotMainWindow(QWidget* parent) :
    // Initialize parent class and ui
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Load UI
    ui->setupUi(this);
    customPlot = new QCustomPlot();
    ui->gridLayout->addWidget(customPlot, 0, 0, 1, 1);

    // Generate sine xy data:
    const int DATA_POINTS = 250;
    QVector<double> x(DATA_POINTS), y(DATA_POINTS);
    for (int i = 0; i < DATA_POINTS; ++i) {
        x[i] = i;
        y[i] = sin(i / 10.0);
    }

    // Create graph and assign data to it:
    customPlot->addGraph();
    customPlot->graph(0)->setData(x, y);

    // Name the axes
    customPlot->xAxis->setLabel("x");
    customPlot->yAxis->setLabel("y");

    // Set axes ranges
    customPlot->xAxis->setRange(0, DATA_POINTS);
    customPlot->yAxis->setRange(-1, 1);
    customPlot->replot();

    // Configure window
    this->setGeometry(400, 300, 800, 600);
    this->setWindowTitle(QString("QCustomPlot example"));
}

QCustomPlotMainWindow::~QCustomPlotMainWindow()
{
    delete ui;
}
