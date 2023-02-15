/********************************************************************************
** Form generated from reading UI file 'theme_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEME_WINDOW_H
#define UI_THEME_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_theme_window
{
public:
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *theme_txt;
    QComboBox *theme_comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_button;

    void setupUi(QDialog *theme_window)
    {
        if (theme_window->objectName().isEmpty())
            theme_window->setObjectName("theme_window");
        theme_window->resize(320, 88);
        theme_window->setSizeGripEnabled(false);
        theme_window->setModal(false);
        formLayout_2 = new QFormLayout(theme_window);
        formLayout_2->setObjectName("formLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        theme_txt = new QLabel(theme_window);
        theme_txt->setObjectName("theme_txt");

        formLayout->setWidget(0, QFormLayout::LabelRole, theme_txt);

        theme_comboBox = new QComboBox(theme_window);
        theme_comboBox->addItem(QString());
        theme_comboBox->addItem(QString());
        theme_comboBox->setObjectName("theme_comboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, theme_comboBox);


        formLayout_2->setLayout(0, QFormLayout::SpanningRole, formLayout);

        horizontalSpacer = new QSpacerItem(210, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        formLayout_2->setItem(1, QFormLayout::LabelRole, horizontalSpacer);

        close_button = new QPushButton(theme_window);
        close_button->setObjectName("close_button");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, close_button);


        retranslateUi(theme_window);

        QMetaObject::connectSlotsByName(theme_window);
    } // setupUi

    void retranslateUi(QDialog *theme_window)
    {
        theme_window->setWindowTitle(QCoreApplication::translate("theme_window", "Dialog", nullptr));
        theme_txt->setText(QCoreApplication::translate("theme_window", "Theme:", nullptr));
        theme_comboBox->setItemText(0, QCoreApplication::translate("theme_window", "White", nullptr));
        theme_comboBox->setItemText(1, QCoreApplication::translate("theme_window", "Black", nullptr));

        close_button->setText(QCoreApplication::translate("theme_window", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class theme_window: public Ui_theme_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEME_WINDOW_H
