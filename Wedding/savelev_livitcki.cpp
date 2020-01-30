#include "savelev_livitcki.h"
#include "ui_savelev_livitcki.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QAbstractButton>
#include <QMessageBox>
#include <QCalendarWidget>
#include "QStandardItemModel"
#include "QStandardItem"
//#include <QAxObject>
#include <QFileDialog>
#include <QModelIndex>
#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QCloseEvent>
#include <QStyle>
#include <QDebug>
#include <QSqlTableModel>
//#define Path_to_DB "C:\Users\Goust6d\Documents\build-Wedding-Desktop_Qt_5_13_0_MinGW_32_bit-Debug"
Savelev_Livitcki::Savelev_Livitcki(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Savelev_Livitcki)
{

    ui->setupUi(this);
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
//    QString pathToDB = QDir::currentPath()+QString("/widBase.db");
    //db.setDatabaseName(pathToDB);
    db.setDatabaseName("widBase.sqlite");
    db.open();

    QFont font = ui->tableView->font();
    font.setPixelSize(19);
    ui->tableView->setFont(font);
    ui->label->setText("List of Weddings");

    QSqlQuery query;
    query.exec("SELECT ID, Male's Name, Female's Name, Date, Place, Contact number, Food, Number of quest, Toastmaster, Photographer, DJ FROM WeddingInfo");

    //QStandardItemModel *model = new QStandardItemModel();
    QSqlTableModel *model = new QSqlTableModel(nullptr, db);
    model->setTable("WeddingInfo");
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    model->select();

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::darkCyan);
    setAutoFillBackground(true);
    setPalette(Pal);
   /* iselect = new select();
    imes = new mes();
    iadd = new add();
    iaddvisit = new addvisit();
    ihelp = new help();

    QObject::connect(ui->pushButton, SIGNAL(clicked()), imes, SLOT(show()));

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), iselect, SLOT(show()));
    QObject::connect(iselect, SIGNAL (S(int)), this, SLOT(slotSelect(int)));

    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), iadd, SLOT(show()));

    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), iaddvisit, SLOT(show()));
    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), ihelp, SLOT(show()));

*/

}




void Savelev_Livitcki::closeEvent(QCloseEvent *event)
{
    event->ignore();
    if (QMessageBox::Yes == QMessageBox::question(this, "Exit?", "Are you sure?", QMessageBox::Yes|QMessageBox::No))
    {
    event->accept();
    }
}

void Savelev_Livitcki::slotSelect(int flag)
{

}

Savelev_Livitcki::~Savelev_Livitcki()
{
    delete ui;
}

void Savelev_Livitcki::on_pushButton_clicked()
{

}
