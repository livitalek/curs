#include "del.h"
#include "ui_del.h"

Del::Del(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Del)
{
    ui->setupUi(this);
}

Del::~Del()
{
    delete ui;
}
