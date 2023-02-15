/********************************************************************************
** Form generated from reading UI file 'recentfiles.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTFILES_H
#define UI_RECENTFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RecentFiles
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QListWidget *file_list;
    QPushButton *select_button;
    QPushButton *cancel_button;
    QPushButton *remove_button;

    void setupUi(QDialog *RecentFiles)
    {
        if (RecentFiles->objectName().isEmpty())
            RecentFiles->setObjectName("RecentFiles");
        RecentFiles->resize(400, 300);
        gridLayout = new QGridLayout(RecentFiles);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(190, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        file_list = new QListWidget(RecentFiles);
        file_list->setObjectName("file_list");
        file_list->setFrameShape(QFrame::StyledPanel);
        file_list->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        file_list->setWordWrap(true);

        gridLayout->addWidget(file_list, 0, 0, 1, 4);

        select_button = new QPushButton(RecentFiles);
        select_button->setObjectName("select_button");

        gridLayout->addWidget(select_button, 2, 3, 1, 1);

        cancel_button = new QPushButton(RecentFiles);
        cancel_button->setObjectName("cancel_button");

        gridLayout->addWidget(cancel_button, 2, 0, 1, 1);

        remove_button = new QPushButton(RecentFiles);
        remove_button->setObjectName("remove_button");

        gridLayout->addWidget(remove_button, 2, 2, 1, 1);


        retranslateUi(RecentFiles);

        QMetaObject::connectSlotsByName(RecentFiles);
    } // setupUi

    void retranslateUi(QDialog *RecentFiles)
    {
        RecentFiles->setWindowTitle(QCoreApplication::translate("RecentFiles", "Dialog", nullptr));
        select_button->setText(QCoreApplication::translate("RecentFiles", "Select", nullptr));
        cancel_button->setText(QCoreApplication::translate("RecentFiles", "Cancel", nullptr));
        remove_button->setText(QCoreApplication::translate("RecentFiles", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecentFiles: public Ui_RecentFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTFILES_H
