#include <QtGui/QApplication>
#include <QTextCodec>
#include "dbsserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForTr(QTextCodec::codecForLocale()); //ÏÔÊ¾Õý³£

    DBSServer w;
    w.show();
    
    return a.exec();
}
