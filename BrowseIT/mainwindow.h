#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <tablayout.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_back_clicked();

    void on_Go_clicked();

    void on_url_returnPressed();

    void on_forward_clicked();

    void on_reload_clicked();

    void on_webView_loadProgress(int progress);

    void on_tabWidget_tabBarClicked(int index);

    void on_tabWidget_tabCloseRequested(int index);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
