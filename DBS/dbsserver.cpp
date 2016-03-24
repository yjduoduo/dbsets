#include "dbsserver.h"
#include "ui_dbsserver.h"

DBSServer::DBSServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DBSServer)
{
    ui->setupUi(this);
}

DBSServer::~DBSServer()
{
    delete ui;
}
