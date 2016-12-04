#include "mainwindow.h"
#include "ui_mainwindow.h"

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

//Begin Basic Navigation Switches and Slots
void MainWindow::on_back_clicked()
{
    ui->webView->back();
}

void MainWindow::on_forward_clicked()
{
    ui->webView->forward();
}

void MainWindow::on_reload_clicked()
{
    ui->webView->reload();\
}

void MainWindow::on_Go_clicked()
{
    ui->webView->load(("http://"+ui->url->text()));
}


void MainWindow::on_url_returnPressed()
{
    on_Go_clicked();
}



void MainWindow::on_webView_loadProgress(int progress)
{
    ui->lcdNumber->display(progress);
}
//End Basic Navigation Switches and Slots


//Tab Operations
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->addTab(new TabLayout(), "New Tab");
}
//End Tap Operations

//Menu Button Settings
