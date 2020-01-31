#include "del.h"
#include "ui_del.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
Del::Del(QWidget *parent) : QDialog(parent), ui(new Ui::Del)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("widBase.sqlite");
    db.open();
    ui->setupUi(this);    
}

Del::~Del()
{
    delete ui;
}

void Del::on_radioButton_clicked()
{
    ui->lineEdit->setEnabled(true);

}

void Del::on_radioButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit->setDisabled(true);
}

void Del::on_pushButton_clicked()
{
    QString buf;
    if (true) {
        buf = ui->lineEdit->text();
    }
    QMessageBox *mb = new QMessageBox();
    QSqlQuery query(db);
    query.prepare("DELETE FROM weddingInfo WHERE ID = " + buf);
    if (!query.exec()) {
        mb->setWindowTitle("Ошибка!");
        mb->setText("Запрос составлен неверно");
        mb->show();

    } else {

        close();
    }
}
