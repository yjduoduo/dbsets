/********************************************************************************
** Form generated from reading UI file 'dbsserver.ui'
**
** Created: Thu Mar 24 22:34:40 2016
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
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBSServer
{
public:
    QAction *action_dbs_open;
    QAction *action_dbs_close;
    QAction *action_about;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DBSServer)
    {
        if (DBSServer->objectName().isEmpty())
            DBSServer->setObjectName(QString::fromUtf8("DBSServer"));
        DBSServer->resize(400, 300);
        action_dbs_open = new QAction(DBSServer);
        action_dbs_open->setObjectName(QString::fromUtf8("action_dbs_open"));
        action_dbs_close = new QAction(DBSServer);
        action_dbs_close->setObjectName(QString::fromUtf8("action_dbs_close"));
        action_about = new QAction(DBSServer);
        action_about->setObjectName(QString::fromUtf8("action_about"));
        centralWidget = new QWidget(DBSServer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DBSServer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DBSServer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        DBSServer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DBSServer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DBSServer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DBSServer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DBSServer->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action_dbs_open);
        menu->addAction(action_dbs_close);
        menu_2->addAction(action_about);

        retranslateUi(DBSServer);

        QMetaObject::connectSlotsByName(DBSServer);
    } // setupUi

    void retranslateUi(QMainWindow *DBSServer)
    {
        DBSServer->setWindowTitle(QApplication::translate("DBSServer", "DBSServer", 0, QApplication::UnicodeUTF8));
        action_dbs_open->setText(QApplication::translate("DBSServer", "\345\274\200\345\220\257", 0, QApplication::UnicodeUTF8));
        action_dbs_close->setText(QApplication::translate("DBSServer", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        action_about->setText(QApplication::translate("DBSServer", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("DBSServer", "\346\223\215\344\275\234\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("DBSServer", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DBSServer: public Ui_DBSServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSSERVER_H
