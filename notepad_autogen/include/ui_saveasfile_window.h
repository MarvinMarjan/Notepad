/********************************************************************************
** Form generated from reading UI file 'saveasfile_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEASFILE_WINDOW_H
#define UI_SAVEASFILE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_saveasfile_window
{
public:
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *filename_label;
    QLineEdit *filename_input;
    QPushButton *ok_button;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *saveasfile_window)
    {
        if (saveasfile_window->objectName().isEmpty())
            saveasfile_window->setObjectName("saveasfile_window");
        saveasfile_window->resize(299, 88);
        formLayout_2 = new QFormLayout(saveasfile_window);
        formLayout_2->setObjectName("formLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        filename_label = new QLabel(saveasfile_window);
        filename_label->setObjectName("filename_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, filename_label);

        filename_input = new QLineEdit(saveasfile_window);
        filename_input->setObjectName("filename_input");
        filename_input->setFocusPolicy(Qt::StrongFocus);
        filename_input->setFrame(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, filename_input);


        formLayout_2->setLayout(0, QFormLayout::SpanningRole, formLayout);

        ok_button = new QPushButton(saveasfile_window);
        ok_button->setObjectName("ok_button");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ok_button);

        horizontalSpacer = new QSpacerItem(190, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(1, QFormLayout::LabelRole, horizontalSpacer);


        retranslateUi(saveasfile_window);

        QMetaObject::connectSlotsByName(saveasfile_window);
    } // setupUi

    void retranslateUi(QDialog *saveasfile_window)
    {
        saveasfile_window->setWindowTitle(QCoreApplication::translate("saveasfile_window", "Dialog", nullptr));
        filename_label->setText(QCoreApplication::translate("saveasfile_window", "File name:", nullptr));
        filename_input->setInputMask(QString());
        ok_button->setText(QCoreApplication::translate("saveasfile_window", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveasfile_window: public Ui_saveasfile_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEASFILE_WINDOW_H
