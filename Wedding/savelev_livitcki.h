#ifndef SAVELEV_LIVITCKI_H
#define SAVELEV_LIVITCKI_H

#include <QMainWindow>
#include <QtSql>
#include "add.h"
namespace Ui {
class Savelev_Livitcki;
}

class Savelev_Livitcki : public QMainWindow
{
    Q_OBJECT

public:
    explicit Savelev_Livitcki(QWidget *parent = nullptr);
    ~Savelev_Livitcki();
private:
    Ui::Savelev_Livitcki *ui;
    Savelev_Livitcki *kl;
    QSqlDatabase db;
    Add *addBase;
    QSqlTableModel *model;
    void reloadTable();

private slots:
    void slotSelect(int flag);
    void closeEvent(QCloseEvent *event);
    void on_pushButton_clicked();
};

#endif // SAVELEV_LIVITCKI_H
