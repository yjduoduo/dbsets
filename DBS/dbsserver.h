#ifndef DBSSERVER_H
#define DBSSERVER_H

#include <QMainWindow>

namespace Ui {
class DBSServer;
}

class DBSServer : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DBSServer(QWidget *parent = 0);
    ~DBSServer();
    
private:
    Ui::DBSServer *ui;
};

#endif // DBSSERVER_H
