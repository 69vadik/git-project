#include "eclub.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EClub w;
    w.show();

    return a.exec();
}
