#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(int argc, char *argv[], QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    void closeEvent(QCloseEvent * event);
};

#endif // MAINWINDOW_H
