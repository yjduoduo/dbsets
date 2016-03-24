/********************************************************************************
** Form generated from reading UI file 'dbsserver.ui'
**
** Created: Thu Mar 24 22:12:12 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBSSERVER_H
#define UI_DBSSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBSServer
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DBSServer)
    {
        if (DBSServer->objectName().isEmpty())
            DBSServer->setObjectName(QString::fromUtf8("DBSServer"));
        DBSServer->resize(400, 300);
        menuBar = new QMenuBar(DBSServer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        DBSServer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DBSServer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DBSServer->addToolBar(mainToolBar);
        centralWidget = new QWidget(DBSServer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DBSServer->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DBSServer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DBSServer->setStatusBar(statusBar);

        retranslateUi(DBSServer);

        QMetaObject::connectSlotsByName(DBSServer);
    } // setupUi

    void retranslateUi(QMainWindow *DBSServer)
    {
        DBSServer->setWindowTitle(QApplication::translate("DBSServer", "DBSServer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DBSServer: public Ui_DBSServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSSERVER_H
