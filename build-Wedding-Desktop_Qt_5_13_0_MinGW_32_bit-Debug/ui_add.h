/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_7;
    QSpinBox *spinBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_10;
    QComboBox *comboBox_4;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(758, 533);
        formLayoutWidget = new QWidget(Add);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 100, 571, 351));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, spinBox);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        comboBox_2 = new QComboBox(formLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        formLayout->setWidget(8, QFormLayout::FieldRole, comboBox_2);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        comboBox_3 = new QComboBox(formLayoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        formLayout->setWidget(9, QFormLayout::FieldRole, comboBox_3);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_10);

        comboBox_4 = new QComboBox(formLayoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        formLayout->setWidget(10, QFormLayout::FieldRole, comboBox_4);

        label_11 = new QLabel(Add);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(104, 35, 501, 41));
        pushButton = new QPushButton(Add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 480, 93, 28));
        pushButton_2 = new QPushButton(Add);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 480, 93, 28));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QCoreApplication::translate("Add", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Add", "Husband's Name", nullptr));
        label_3->setText(QCoreApplication::translate("Add", "Wife's Name", nullptr));
        label_2->setText(QCoreApplication::translate("Add", "Contact Number", nullptr));
        label_4->setText(QCoreApplication::translate("Add", "Place", nullptr));
        label_5->setText(QCoreApplication::translate("Add", "Date", nullptr));
        label_6->setText(QCoreApplication::translate("Add", "Food", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Add", "Yes", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Add", "No", nullptr));

        label_7->setText(QCoreApplication::translate("Add", "Number of quest", nullptr));
        label_8->setText(QCoreApplication::translate("Add", "Photographer", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Add", "Yes", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Add", "No", nullptr));

        label_9->setText(QCoreApplication::translate("Add", "Toastmaster", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Add", "Yes", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Add", "No", nullptr));

        label_10->setText(QCoreApplication::translate("Add", "DJ", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Add", "Yes", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Add", "No", nullptr));

        label_11->setText(QCoreApplication::translate("Add", "Input information", nullptr));
        pushButton->setText(QCoreApplication::translate("Add", "Supply", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Add", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
