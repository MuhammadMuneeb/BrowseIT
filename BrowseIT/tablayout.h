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

private slots:
    void on_back_clicked();

    void on_reload_clicked();

    void on_forward_clicked();

    void on_url_returnPressed();

    void on_Go_clicked();

    void on_webView_loadProgress(int progress);

    void on_pushButton_clicked();

private:
    Ui::TabLayout *ui;
};

#endif // TABLAYOUT_H
