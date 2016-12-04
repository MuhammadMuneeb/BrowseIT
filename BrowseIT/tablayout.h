#ifndef TABLAYOUT_H
#define TABLAYOUT_H

#include <QWidget>

namespace Ui {
class TabLayout;
}

class TabLayout : public QWidget
{
    Q_OBJECT

public:
    explicit TabLayout(QWidget *parent = 0);
    ~TabLayout();

private:
    Ui::TabLayout *ui;
};

#endif // TABLAYOUT_H
