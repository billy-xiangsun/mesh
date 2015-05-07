#include <QFileDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionShowHelp_triggered()
{
    std::cout << "Something" << std::endl;
//    close();
//    QString text("<h2>Mesh</h2>");
//    return text;
}

void MainWindow::on_actionImportMesh_triggered()
{
    QStringList file_names = QFileDialog::getOpenFileNames(this,
        tr("Open Mesh File"),tr(""),
        tr("OBJ files (*.obj);;"
        "OFF Files(*.off);;"));
    QStringList::const_iterator i = file_names.constBegin();
//    vector<Object *> os;
    for(; i!=file_names.constEnd(); ++i)
    {
//        Object *o = new Object;
//        if(o->readMesh(*i))
//        {
//            add_mesh(o);
//            os.push_back(o);
//        }
    }
//    focus_on_objects(os);
}

