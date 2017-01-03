#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <tablayout.h>
#include <QMainWindow>
#include <menu.h>
#include <toolbox.h>
#include <QString>

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

    void on_Menu_clicked();

    void on_settings_clicked();

    void on_Options_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_clicked();

    void on_AddBookmark_clicked();

    void on_webView_urlChanged(const QUrl &arg1);

    void on_url_textChanged(const QString &arg1);

    void on_webView_loadStarted();

    void on_webView_titleChanged(const QString &title);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
