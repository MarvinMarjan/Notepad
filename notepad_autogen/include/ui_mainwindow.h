/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_file;
    QAction *actionSave_file;
    QAction *actionExit;
    QAction *actionFont;
    QAction *actionTheme;
    QAction *actionSave_As;
    QAction *actionSettings;
    QAction *actionOpen_empty_file;
    QAction *actionRename_file;
    QAction *actionRecent_files;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionDelete;
    QAction *actionSelect_all;
    QAction *actionSelect_line;
    QWidget *centralwidget;
    QPlainTextEdit *editor;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(646, 518);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/window/notepad.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionOpen_file = new QAction(MainWindow);
        actionOpen_file->setObjectName("actionOpen_file");
        actionOpen_file->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/white/add_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_file->setIcon(icon1);
        actionSave_file = new QAction(MainWindow);
        actionSave_file->setObjectName("actionSave_file");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/white/save_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_file->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/white/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/white/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon4);
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName("actionTheme");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/white/theme.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTheme->setIcon(icon5);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        actionSave_As->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/white/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon6);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/white/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon7);
        actionOpen_empty_file = new QAction(MainWindow);
        actionOpen_empty_file->setObjectName("actionOpen_empty_file");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/white/empty_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_empty_file->setIcon(icon8);
        actionRename_file = new QAction(MainWindow);
        actionRename_file->setObjectName("actionRename_file");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/white/rename_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename_file->setIcon(icon9);
        actionRecent_files = new QAction(MainWindow);
        actionRecent_files->setObjectName("actionRecent_files");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/white/recent_files.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecent_files->setIcon(icon10);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/white/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon11);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/white/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon12);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/white/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon13);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/white/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon14);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/icons/white/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon15);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/icons/white/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon16);
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName("actionSelect_all");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/icons/white/select_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_all->setIcon(icon17);
        actionSelect_line = new QAction(MainWindow);
        actionSelect_line->setObjectName("actionSelect_line");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/icons/white/select_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_line->setIcon(icon18);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        editor = new QPlainTextEdit(centralwidget);
        editor->setObjectName("editor");
        editor->setGeometry(QRect(0, 0, 647, 471));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy1);
        editor->setContextMenuPolicy(Qt::CustomContextMenu);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 646, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuOptions = new QMenu(menuFile);
        menuOptions->setObjectName("menuOptions");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionRecent_files);
        menuFile->addAction(actionOpen_empty_file);
        menuFile->addAction(actionOpen_file);
        menuFile->addAction(actionRename_file);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_file);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(menuOptions->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuOptions->addAction(actionFont);
        menuOptions->addAction(actionTheme);
        menuOptions->addAction(actionSettings);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_all);
        menuEdit->addAction(actionSelect_line);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_file->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_file->setToolTip(QCoreApplication::translate("MainWindow", "Open file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_file->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        actionTheme->setText(QCoreApplication::translate("MainWindow", "Appearence", nullptr));
#if QT_CONFIG(shortcut)
        actionTheme->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#if QT_CONFIG(shortcut)
        actionSettings->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_empty_file->setText(QCoreApplication::translate("MainWindow", "Open empty file", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_empty_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRename_file->setText(QCoreApplication::translate("MainWindow", "Rename file", nullptr));
#if QT_CONFIG(shortcut)
        actionRename_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecent_files->setText(QCoreApplication::translate("MainWindow", "Recent files", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_all->setText(QCoreApplication::translate("MainWindow", "Select all", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_all->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_line->setText(QCoreApplication::translate("MainWindow", "Select line", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_line->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
