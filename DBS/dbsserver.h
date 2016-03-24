#ifndef DBSSERVER_H
#define DBSSERVER_H

#include <QtGui>
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
    void action_connect_sets();

private slots:
    void show_version();


private:
    Ui::DBSServer *ui;
};

#endif // DBSSERVER_H
