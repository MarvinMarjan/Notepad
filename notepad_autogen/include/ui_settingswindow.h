/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *defaultFileName_label;
    QLineEdit *defaultFileName_input;
    QCheckBox *autoSave_CheckBox;
    QCheckBox *reopenLastFile_CheckBox;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName("SettingsWindow");
        SettingsWindow->resize(307, 108);
        formLayoutWidget = new QWidget(SettingsWindow);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(11, 11, 291, 30));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        defaultFileName_label = new QLabel(formLayoutWidget);
        defaultFileName_label->setObjectName("defaultFileName_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, defaultFileName_label);

        defaultFileName_input = new QLineEdit(formLayoutWidget);
        defaultFileName_input->setObjectName("defaultFileName_input");

        formLayout->setWidget(0, QFormLayout::FieldRole, defaultFileName_input);

        autoSave_CheckBox = new QCheckBox(SettingsWindow);
        autoSave_CheckBox->setObjectName("autoSave_CheckBox");
        autoSave_CheckBox->setGeometry(QRect(11, 50, 88, 26));
        reopenLastFile_CheckBox = new QCheckBox(SettingsWindow);
        reopenLastFile_CheckBox->setObjectName("reopenLastFile_CheckBox");
        reopenLastFile_CheckBox->setGeometry(QRect(11, 80, 131, 26));

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Dialog", nullptr));
        defaultFileName_label->setText(QCoreApplication::translate("SettingsWindow", "Default File Name:", nullptr));
        autoSave_CheckBox->setText(QCoreApplication::translate("SettingsWindow", "Auto save", nullptr));
        reopenLastFile_CheckBox->setText(QCoreApplication::translate("SettingsWindow", "Reopen last file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
