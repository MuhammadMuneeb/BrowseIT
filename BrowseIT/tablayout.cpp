#include "tablayout.h"
#include "ui_tablayout.h"
#include <mainwindow.h>
TabLayout::TabLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TabLayout)
{
    ui->setupUi(this);
}

TabLayout::~TabLayout()
{
    delete ui;
}
/*ye File mein sab functions bilkul mainwindow wali file wlaey hain. difference dono mein ye hai bs k
ye file sirf tab call hoti hai jab naya tab bnatey hain. matlab k new tab k button pey click krein to wo
yahan sey layout or functions etc call krta hai sarey. jo k dono mein same hain. naya kuch bhi nhi is mein
compare krleyna
*/


//Begin basic nav operation switches and slots
void TabLayout::on_back_clicked()
{
    ui->webView->back();
}

void TabLayout::on_reload_clicked()
{
    ui->webView->reload();
}

void TabLayout::on_forward_clicked()
{
    ui->webView->forward();
}

void TabLayout::on_url_returnPressed()
{
    on_Go_clicked();
}

void TabLayout::on_Go_clicked()
{
    ui->webView->load(("http://"+ui->url->text()));
}

void TabLayout::on_webView_loadProgress(int progress)
{
    ui->lcdNumber->display(progress);
}
//end basic nav menu operations

//Options button



