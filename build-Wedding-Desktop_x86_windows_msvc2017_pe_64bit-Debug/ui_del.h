/********************************************************************************
** Form generated from reading UI file 'del.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_H
#define UI_DEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Del
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Del)
    {
        if (Del->objectName().isEmpty())
            Del->setObjectName(QString::fromUtf8("Del"));
        Del->resize(515, 383);
        lineEdit = new QLineEdit(Del);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 100, 113, 22));
        label = new QLabel(Del);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 141, 31));
        label_2 = new QLabel(Del);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 100, 81, 31));
        pushButton = new QPushButton(Del);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 290, 93, 28));
        pushButton_2 = new QPushButton(Del);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 290, 93, 28));

        retranslateUi(Del);

        QMetaObject::connectSlotsByName(Del);
    } // setupUi

    void retranslateUi(QDialog *Del)
    {
        Del->setWindowTitle(QApplication::translate("Del", "Dialog", nullptr));
        label->setText(QApplication::translate("Del", "Delete by date", nullptr));
        label_2->setText(QApplication::translate("Del", "Enter date", nullptr));
        pushButton->setText(QApplication::translate("Del", "Supply", nullptr));
        pushButton_2->setText(QApplication::translate("Del", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Del: public Ui_Del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
