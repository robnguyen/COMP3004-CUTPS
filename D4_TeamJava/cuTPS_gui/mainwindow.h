/*Main window that provides option to be a student or a content manager
 *Traceability: None, for demo purposes only
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ContentManagerInterfaceWindow.h"
#include "StudentInterfaceWindow.h"

#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QPushButton *getContentManagerButton();
    QPushButton *getStudentButton();
/*
private slots:
    void on_studentInterfaceButton_clicked();

    void on_contentManagerInterfaceButton_clicked();
*/
private:
    Ui::MainWindow *ui;
    ContentManagerInterfaceWindow *contentManagerUI;
    StudentInterfaceWindow *studentInterface;


};

#endif // MAINWINDOW_H
