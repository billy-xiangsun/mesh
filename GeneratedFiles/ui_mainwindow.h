/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "viewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExport;
    QAction *actionSelect;
    QAction *actionVertex;
    QAction *actionFace;
    QAction *actionEdge;
    QAction *actionShowHelp;
    QAction *actionImportMesh;
    QAction *actionQuit;
    Viewer *viewer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImport;
    QMenu *menuEdit;
    QMenu *menuVisualize;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionSelect = new QAction(MainWindow);
        actionSelect->setObjectName(QStringLiteral("actionSelect"));
        actionVertex = new QAction(MainWindow);
        actionVertex->setObjectName(QStringLiteral("actionVertex"));
        actionFace = new QAction(MainWindow);
        actionFace->setObjectName(QStringLiteral("actionFace"));
        actionEdge = new QAction(MainWindow);
        actionEdge->setObjectName(QStringLiteral("actionEdge"));
        actionShowHelp = new QAction(MainWindow);
        actionShowHelp->setObjectName(QStringLiteral("actionShowHelp"));
        actionImportMesh = new QAction(MainWindow);
        actionImportMesh->setObjectName(QStringLiteral("actionImportMesh"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        viewer = new Viewer(MainWindow);
        viewer->setObjectName(QStringLiteral("viewer"));
        MainWindow->setCentralWidget(viewer);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuImport = new QMenu(menuFile);
        menuImport->setObjectName(QStringLiteral("menuImport"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuVisualize = new QMenu(menuBar);
        menuVisualize->setObjectName(QStringLiteral("menuVisualize"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuVisualize->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(menuImport->menuAction());
        menuImport->addAction(actionImportMesh);
        menuEdit->addAction(actionSelect);
        menuVisualize->addAction(actionVertex);
        menuVisualize->addAction(actionFace);
        menuVisualize->addAction(actionEdge);
        menuHelp->addAction(actionShowHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0));
        actionSelect->setText(QApplication::translate("MainWindow", "Select", 0));
        actionVertex->setText(QApplication::translate("MainWindow", "Vertex", 0));
        actionFace->setText(QApplication::translate("MainWindow", "Face", 0));
        actionEdge->setText(QApplication::translate("MainWindow", "Edge", 0));
        actionShowHelp->setText(QApplication::translate("MainWindow", "ShowHelp", 0));
        actionImportMesh->setText(QApplication::translate("MainWindow", "Mesh", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuImport->setTitle(QApplication::translate("MainWindow", "Import", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuVisualize->setTitle(QApplication::translate("MainWindow", "Render", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
