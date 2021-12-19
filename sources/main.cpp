#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QLabel label("Hello, world!");
    label.setAlignment(Qt::AlignCenter);
    label.resize(200, 50);
    label.show();
    return a.exec();
}