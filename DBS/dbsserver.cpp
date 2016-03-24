#include <QtGui>
#include <QMessageBox>

#include "stdcommon.h"
#include "version.h"
#include "dbsserver.h"
#include "ui_dbsserver.h"



DBSServer::DBSServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DBSServer)
{
    ui->setupUi(this);
    action_connect_sets();
}


DBSServer::~DBSServer()
{
    delete ui;
}


void DBSServer::action_connect_sets()
{
    QObject::connect(ui->action_about,SIGNAL(triggered()),
                     this,SLOT(show_version()));
}


void DBSServer::show_version()
{
    QMessageBox::information(NULL,tr("°æ±¾"),tr(about_version()),NULL,NULL);
}
