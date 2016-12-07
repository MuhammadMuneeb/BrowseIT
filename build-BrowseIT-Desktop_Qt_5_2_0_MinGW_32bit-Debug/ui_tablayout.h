/********************************************************************************
** Form generated from reading UI file 'tablayout.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLAYOUT_H
#define UI_TABLAYOUT_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabLayout
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QLineEdit *url;
    QPushButton *forward;
    QPushButton *back;
    QPushButton *reload;
    QWebView *webView;
    QPushButton *Go;

    void setupUi(QWidget *TabLayout)
    {
        if (TabLayout->objectName().isEmpty())
            TabLayout->setObjectName(QStringLiteral("TabLayout"));
        TabLayout->resize(833, 618);
        gridLayout_2 = new QGridLayout(TabLayout);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(TabLayout);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/btns and icns/tabs.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 1, 6, 1, 1);

        lcdNumber = new QLCDNumber(TabLayout);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lcdNumber, 1, 4, 1, 1);

        url = new QLineEdit(TabLayout);
        url->setObjectName(QStringLiteral("url"));
        url->setClearButtonEnabled(true);

        gridLayout->addWidget(url, 1, 3, 1, 1);

        forward = new QPushButton(TabLayout);
        forward->setObjectName(QStringLiteral("forward"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/btns and icns/next-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        forward->setIcon(icon1);
        forward->setFlat(true);

        gridLayout->addWidget(forward, 1, 2, 1, 1);

        back = new QPushButton(TabLayout);
        back->setObjectName(QStringLiteral("back"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/btns and icns/back-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon2);
        back->setDefault(false);
        back->setFlat(true);

        gridLayout->addWidget(back, 1, 0, 1, 1);

        reload = new QPushButton(TabLayout);
        reload->setObjectName(QStringLiteral("reload"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/btns and icns/refresh-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon3);
        reload->setFlat(true);

        gridLayout->addWidget(reload, 1, 1, 1, 1);

        webView = new QWebView(TabLayout);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setLayoutDirection(Qt::RightToLeft);
        webView->setAutoFillBackground(true);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout->addWidget(webView, 2, 0, 1, 9);

        Go = new QPushButton(TabLayout);
        Go->setObjectName(QStringLiteral("Go"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/btns and icns/fast-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        Go->setIcon(icon4);
        Go->setFlat(true);

        gridLayout->addWidget(Go, 1, 5, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(TabLayout);

        QMetaObject::connectSlotsByName(TabLayout);
    } // setupUi

    void retranslateUi(QWidget *TabLayout)
    {
        TabLayout->setWindowTitle(QApplication::translate("TabLayout", "Form", 0));
        pushButton->setText(QString());
        url->setPlaceholderText(QApplication::translate("TabLayout", "Enter Website to start", 0));
        forward->setText(QString());
        back->setText(QString());
        reload->setText(QString());
        Go->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TabLayout: public Ui_TabLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLAYOUT_H
