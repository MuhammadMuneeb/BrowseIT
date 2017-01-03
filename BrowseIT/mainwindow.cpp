#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <bookmarks.h>
#include <history.h>

/* Ye file MainWindow ki hai, yani jo program k start honey pey khulti hai. is mein sarey functions defined hain
us window k jaisey buttons etc k wo kya krein gey or kab. is mein "Switches and Slots" use hotey hain.
Switches and Slots jaisey k diwar mein switch board laga hota hai, wo board diwar mein aik surakh k andar lagta hai
yani aik slot k andar. ye aisey kam krta hai:
Sender (Yani jo send krey ga, jaisey k aik button) ->> Signal, yani us button ney aik signal send kia jaisey click ka
->>> Receiver yani wo signal kisey miley ga ->>> Slot, yani wo receiver kya krey ga. Jaisey kisi ko call krtey hain
aik number milaya or kisi ko call ki. Number milaney wala banda aik sender hai, call recieve krney wala receiver. Jis
k phone sey milaya wo phone Switch or jis phone pey aya wo slot.
*/

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
//ye ui ka aik object bnaya hai jo ui_mainwindow.h class sey aya hai. ye Qt ka apna hi hai.


//Begin Basic Navigation Switches and Slots
void MainWindow::on_back_clicked()  //Ye aik button ka function hai k wo button kis kam k lye hai
{
    ui->webView->back();  //iska matlab k UI mein jo webview hai, uspey jab button pey click hoga jis ka nam function
//    mein hai, wo button ye kam krey ga, jaisey yahan pey back() ka function call kia hai
}

void MainWindow::on_forward_clicked()
{
    ui->webView->forward();//bilkul usi trah ye wala bhi kam krey ga
}

void MainWindow::on_reload_clicked()
{
    ui->webView->reload();//or ye bhi
}

void MainWindow::on_Go_clicked()
{
    ui->webView->load(("http://"+ui->url->text()));
    QString input= ui->url->text();
    QString filename = "C:/Users/M.M.Haq/workspace/BrowseIT/BrowseIT/Files/history.xml";
    history h;
    h.history_write(filename, input);



    //yahan pey jab user koi text dey ga to us k agey http laga k
    //load k function mein, url ka object mein jo input hoga usey text mein convert kr k webView, yani hamarey
    //web k loader mein send kr dey ga
}


void MainWindow::on_url_returnPressed()
{
    on_Go_clicked();//ye function on_Go_clicked k function ko call kreyga
}



void MainWindow::on_webView_loadProgress(int progress)
{
    ui->lcdNumber->display(progress); //ye function call krey ga LCD Number waley object ko. Matlab k webView mein
//    page jitna bhi load hua hoga ye us sey connect ho k number mein show krey ga k itney Precentage hua hai
}
//End Basic Navigation Switches and Slots


//Tab Operations

//ye jo tabs bnaye hain ye un k functions hain
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index); //tab mein jo close ka sign hai ye function us button ko set krta hai close krna hai
    //ham agar chahein to us mein dusra function bhi dey saktey hain jaisey k naya tab khol dey
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->addTab(new TabLayout(), "New Tab");

}
//End Tap Operations

//Menu Button Settings


void MainWindow::on_Options_clicked()
{
    ui->tabWidget->addTab(new ToolBox(), "Options");
}

//Add Bookmark

void MainWindow::on_AddBookmark_clicked()
{
    QString input= ui->url->text();
    QString filename = "C:/Users/M.M.Haq/workspace/BrowseIT/BrowseIT/Files/Bookmarks.xml";
    Bookmarks b;
    b.write(filename, input);
}



void MainWindow::on_webView_urlChanged(const QUrl &url)
{
    ui->url->setText(url.toString());
    QString input= ui->url->text();
    QString filename = "C:/Users/M.M.Haq/workspace/BrowseIT/BrowseIT/Files/history.xml";
    history h;
    h.history_write(filename, input);

}


