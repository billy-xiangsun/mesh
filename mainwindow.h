#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//public slots:

private slots:
    void on_actionShowHelp_triggered();
    void on_actionImportMesh_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
