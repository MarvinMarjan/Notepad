/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputDialog
{
public:
    QPushButton *ok_button;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *input_text;
    QLineEdit *input;
    QPushButton *cancel_button;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName("InputDialog");
        InputDialog->resize(300, 78);
        ok_button = new QPushButton(InputDialog);
        ok_button->setObjectName("ok_button");
        ok_button->setGeometry(QRect(210, 47, 83, 25));
        layoutWidget = new QWidget(InputDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 280, 30));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        input_text = new QLabel(layoutWidget);
        input_text->setObjectName("input_text");

        formLayout->setWidget(0, QFormLayout::LabelRole, input_text);

        input = new QLineEdit(layoutWidget);
        input->setObjectName("input");

        formLayout->setWidget(0, QFormLayout::FieldRole, input);

        cancel_button = new QPushButton(InputDialog);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setGeometry(QRect(5, 46, 83, 25));

        retranslateUi(InputDialog);

        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QCoreApplication::translate("InputDialog", "Dialog", nullptr));
        ok_button->setText(QCoreApplication::translate("InputDialog", "Ok", nullptr));
        input_text->setText(QCoreApplication::translate("InputDialog", "template", nullptr));
        cancel_button->setText(QCoreApplication::translate("InputDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H
