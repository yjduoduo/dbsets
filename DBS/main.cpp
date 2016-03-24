#include <QtGui/QApplication>
#include "dbsserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBSServer w;
    w.show();
    
    return a.exec();
}
