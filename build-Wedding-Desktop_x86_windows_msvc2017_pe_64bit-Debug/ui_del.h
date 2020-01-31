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
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Del
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFrame *line;

    void setupUi(QDialog *Del)
    {
        if (Del->objectName().isEmpty())
            Del->setObjectName(QString::fromUtf8("Del"));
        Del->resize(515, 383);
        pushButton = new QPushButton(Del);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 290, 93, 28));
        pushButton_2 = new QPushButton(Del);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 290, 93, 28));
        radioButton = new QRadioButton(Del);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 10, 83, 16));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Del);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 160, 101, 18));
        line = new QFrame(Del);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 140, 501, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(Del);

        QMetaObject::connectSlotsByName(Del);
    } // setupUi

    void retranslateUi(QDialog *Del)
    {
        Del->setWindowTitle(QApplication::translate("Del", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Del", "Supply", nullptr));
        pushButton_2->setText(QApplication::translate("Del", "Cancel", nullptr));
        radioButton->setText(QApplication::translate("Del", "Delete keys:", nullptr));
        radioButton_2->setText(QApplication::translate("Del", "Delete name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Del: public Ui_Del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
