#include "add.h"
#include "ui_add.h"
#include <QtSql>
#include <QMessageBox>
#include <QDebug>
Add::Add(QWidget *parent) : QDialog(parent), ui(new Ui::Add)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("widBase.sqlite");
    db.open();
    ui->setupUi(this);

}

Add::~Add()
{
    delete ui;
}

void Add::on_pushButton_clicked()
{

    QMessageBox *mb = new QMessageBox();

    QSqlQuery query(db);
    query.prepare("INSERT INTO WeddingInfo (Groom, Bride, Date, Place, Contact, Food, Number, Toastmaster, Photographer, DJ) VALUES (:Male, :Female, :Date, :Place, :Contact, :Food, :NQ, :TM, :PG, :DJ)");
    query.bindValue(":Male", ui->lineEdit->text());
    query.bindValue(":Female", ui->lineEdit_2->text());
    query.bindValue(":Date",ui->lineEdit_3->text());
    query.bindValue(":Place",ui->lineEdit_4->text());
    query.bindValue(":Contact",ui->lineEdit_5->text());
    query.bindValue(":Food",ui->comboBox->currentText());
    query.bindValue(":NQ", ui->spinBox->text());
    query.bindValue(":TM",ui->comboBox_2->currentText());
    query.bindValue(":PG",ui->comboBox_3->currentText());
    query.bindValue(":DJ", ui->comboBox_4->currentText());
    if (!query.exec()) {
        mb->setWindowTitle("Ошибка!");
        mb->setText("Запрос составлен неверно");
        mb->show();

    } else {

        close();
    }

}


void Add::on_pushButton_2_clicked()
{
    close();
}
