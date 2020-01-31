#include "savelev_livitcki.h"
#include "ui_savelev_livitcki.h"
#include <QAbstractButton>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>
#include <QTimer>

Savelev_Livitcki::Savelev_Livitcki(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Savelev_Livitcki)
{

    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("widBase.sqlite");
    db.open();

    QFont font = ui->tableView->font();
    font.setPixelSize(19);
    ui->tableView->setFont(font);
    ui->label->setText("List of Weddings");

    model = new QSqlTableModel(nullptr, db);
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(reloadTable()));
    timer->start(1000);
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::darkCyan);
    setAutoFillBackground(true);
    setPalette(Pal);

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
    addBase = new Add();
    addBase->show();
}

void Savelev_Livitcki::reloadTable() {
    delete model;
    model = new QSqlTableModel(nullptr, db);
    model->setTable("WeddingInfo");
    model->select();
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

}
