/********************************************************************************
** Form generated from reading UI file 'savelev_livitcki.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVELEV_LIVITCKI_H
#define UI_SAVELEV_LIVITCKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Savelev_Livitcki
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Savelev_Livitcki)
    {
        if (Savelev_Livitcki->objectName().isEmpty())
            Savelev_Livitcki->setObjectName(QString::fromUtf8("Savelev_Livitcki"));
        Savelev_Livitcki->resize(1362, 610);
        actionOpen = new QAction(Savelev_Livitcki);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Savelev_Livitcki);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(Savelev_Livitcki);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        centralWidget = new QWidget(Savelev_Livitcki);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(110, 40, 1231, 411));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 0, 231, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 91, 91));
        Savelev_Livitcki->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Savelev_Livitcki);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1362, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Savelev_Livitcki->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Savelev_Livitcki);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Savelev_Livitcki->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Savelev_Livitcki);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Savelev_Livitcki->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);

        retranslateUi(Savelev_Livitcki);

        QMetaObject::connectSlotsByName(Savelev_Livitcki);
    } // setupUi

    void retranslateUi(QMainWindow *Savelev_Livitcki)
    {
        Savelev_Livitcki->setWindowTitle(QApplication::translate("Savelev_Livitcki", "Savelev_Livitcki", nullptr));
        actionOpen->setText(QApplication::translate("Savelev_Livitcki", "Open", nullptr));
        actionSave->setText(QApplication::translate("Savelev_Livitcki", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("Savelev_Livitcki", "Save As", nullptr));
        label->setText(QApplication::translate("Savelev_Livitcki", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Savelev_Livitcki", "Add", nullptr));
        menuFile->setTitle(QApplication::translate("Savelev_Livitcki", "File", nullptr));
        menuAbout->setTitle(QApplication::translate("Savelev_Livitcki", "About", nullptr));
        menuHelp->setTitle(QApplication::translate("Savelev_Livitcki", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Savelev_Livitcki: public Ui_Savelev_Livitcki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVELEV_LIVITCKI_H
