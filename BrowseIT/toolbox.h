#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <QToolBox>
#include <tablayout.h>

namespace Ui {
class ToolBox;
}

class ToolBox : public QToolBox
{
    Q_OBJECT

public:
    explicit ToolBox(QWidget *parent = 0);
    ~ToolBox();

private slots:
    void on_BookmarksDisplay_clicked();

private:
    Ui::ToolBox *ui;
};

#endif // TOOLBOX_H
