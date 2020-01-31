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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Del
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_2;
    QFrame *line;
    QRadioButton *radioButton;
    QLabel *label;
    QLineEdit *lineEdit;

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
        widget = new QWidget(Del);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 491, 251));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 3, 0, 1, 2);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout->addWidget(radioButton, 0, 0, 1, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);


        retranslateUi(Del);

        QMetaObject::connectSlotsByName(Del);
    } // setupUi

    void retranslateUi(QDialog *Del)
    {
        Del->setWindowTitle(QApplication::translate("Del", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Del", "Supply", nullptr));
        pushButton_2->setText(QApplication::translate("Del", "Cancel", nullptr));
        radioButton_2->setText(QApplication::translate("Del", "Delete by name:", nullptr));
        radioButton->setText(QApplication::translate("Del", "Delete by ID:", nullptr));
        label->setText(QApplication::translate("Del", "Enter ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Del: public Ui_Del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
