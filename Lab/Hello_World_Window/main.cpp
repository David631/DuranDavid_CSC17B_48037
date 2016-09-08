#include <QLabel>
#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString display="Hello Windowing World";
    QLabel *label=new QLabel(display);
    label->show();
    return a.exec();
}
