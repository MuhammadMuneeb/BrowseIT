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

private:
    Ui::ToolBox *ui;
};

#endif // TOOLBOX_H
