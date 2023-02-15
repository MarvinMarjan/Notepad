/********************************************************************************
** Form generated from reading UI file 'informationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONDIALOG_H
#define UI_INFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InformationDialog
{
public:
    QPushButton *ok_button;
    QLabel *message_label;
    QLabel *info_image;

    void setupUi(QDialog *InformationDialog)
    {
        if (InformationDialog->objectName().isEmpty())
            InformationDialog->setObjectName("InformationDialog");
        InformationDialog->resize(329, 95);
        ok_button = new QPushButton(InformationDialog);
        ok_button->setObjectName("ok_button");
        ok_button->setGeometry(QRect(240, 65, 83, 25));
        message_label = new QLabel(InformationDialog);
        message_label->setObjectName("message_label");
        message_label->setGeometry(QRect(110, 10, 211, 41));
        message_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        message_label->setWordWrap(true);
        info_image = new QLabel(InformationDialog);
        info_image->setObjectName("info_image");
        info_image->setGeometry(QRect(9, 15, 61, 61));
        info_image->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/Dialogs/information/info_white.png")));
        info_image->setScaledContents(true);

        retranslateUi(InformationDialog);

        QMetaObject::connectSlotsByName(InformationDialog);
    } // setupUi

    void retranslateUi(QDialog *InformationDialog)
    {
        InformationDialog->setWindowTitle(QCoreApplication::translate("InformationDialog", "Dialog", nullptr));
        ok_button->setText(QCoreApplication::translate("InformationDialog", "Ok", nullptr));
        message_label->setText(QCoreApplication::translate("InformationDialog", "TextLabel", nullptr));
        info_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InformationDialog: public Ui_InformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONDIALOG_H
