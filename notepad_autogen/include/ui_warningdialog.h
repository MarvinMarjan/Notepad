/********************************************************************************
** Form generated from reading UI file 'warningdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WarningDialog
{
public:
    QPushButton *ok_button;
    QLabel *warning_image;
    QLabel *message_label;

    void setupUi(QDialog *WarningDialog)
    {
        if (WarningDialog->objectName().isEmpty())
            WarningDialog->setObjectName("WarningDialog");
        WarningDialog->resize(327, 94);
        ok_button = new QPushButton(WarningDialog);
        ok_button->setObjectName("ok_button");
        ok_button->setGeometry(QRect(240, 63, 81, 25));
        warning_image = new QLabel(WarningDialog);
        warning_image->setObjectName("warning_image");
        warning_image->setGeometry(QRect(10, 15, 61, 61));
        warning_image->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/Dialogs/warning/warning_white.png")));
        warning_image->setScaledContents(true);
        message_label = new QLabel(WarningDialog);
        message_label->setObjectName("message_label");
        message_label->setGeometry(QRect(100, 10, 221, 41));
        message_label->setScaledContents(false);
        message_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        message_label->setWordWrap(true);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(WarningDialog);

        QMetaObject::connectSlotsByName(WarningDialog);
    } // setupUi

    void retranslateUi(QDialog *WarningDialog)
    {
        WarningDialog->setWindowTitle(QCoreApplication::translate("WarningDialog", "Dialog", nullptr));
        ok_button->setText(QCoreApplication::translate("WarningDialog", "Ok", nullptr));
        warning_image->setText(QString());
        message_label->setText(QCoreApplication::translate("WarningDialog", "test label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarningDialog: public Ui_WarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
