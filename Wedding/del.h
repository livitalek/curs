#ifndef DEL_H
#define DEL_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class Del;
}

class Del : public QDialog
{
    Q_OBJECT

public:
    explicit Del(QWidget *parent = nullptr);
    ~Del();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Del *ui;
    QSqlDatabase db;
};

#endif // DEL_H
