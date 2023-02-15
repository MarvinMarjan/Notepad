/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QLabel *question_image;
    QLabel *message_label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button1;
    QPushButton *button2;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName("QuestionDialog");
        QuestionDialog->resize(265, 124);
        question_image = new QLabel(QuestionDialog);
        question_image->setObjectName("question_image");
        question_image->setGeometry(QRect(7, 18, 61, 61));
        question_image->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/Dialogs/question/question_white.png")));
        question_image->setScaledContents(true);
        message_label = new QLabel(QuestionDialog);
        message_label->setObjectName("message_label");
        message_label->setGeometry(QRect(103, 20, 151, 48));
        message_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        message_label->setWordWrap(true);
        layoutWidget = new QWidget(QuestionDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(93, 91, 169, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button1 = new QPushButton(layoutWidget);
        button1->setObjectName("button1");

        horizontalLayout->addWidget(button1);

        button2 = new QPushButton(layoutWidget);
        button2->setObjectName("button2");

        horizontalLayout->addWidget(button2);


        retranslateUi(QuestionDialog);

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QCoreApplication::translate("QuestionDialog", "Dialog", nullptr));
        question_image->setText(QString());
        message_label->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        button1->setText(QCoreApplication::translate("QuestionDialog", "Yes", nullptr));
        button2->setText(QCoreApplication::translate("QuestionDialog", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
