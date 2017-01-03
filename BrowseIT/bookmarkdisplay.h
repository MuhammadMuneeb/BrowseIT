#ifndef BOOKMARKDISPLAY_H
#define BOOKMARKDISPLAY_H

#include <QWidget>

namespace Ui {
class BookmarkDisplay;
}

class BookmarkDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit BookmarkDisplay(QWidget *parent = 0);
    ~BookmarkDisplay();

private:
    Ui::BookmarkDisplay *ui;
};

#endif // BOOKMARKDISPLAY_H
