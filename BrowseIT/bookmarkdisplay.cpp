#include "bookmarkdisplay.h"
#include "ui_bookmarkdisplay.h"

BookmarkDisplay::BookmarkDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookmarkDisplay)
{
    ui->setupUi(this);
}

BookmarkDisplay::~BookmarkDisplay()
{
    delete ui;
}
