/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *back;
    QPushButton *reload;
    QPushButton *forward;
    QLineEdit *url;
    QLCDNumber *lcdNumber;
    QPushButton *Go;
    QToolButton *Menu;
    QWebView *webView;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(842, 606);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::East);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(24, 24));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        back = new QPushButton(tab);
        back->setObjectName(QStringLiteral("back"));
        back->setDefault(false);
        back->setFlat(true);

        gridLayout->addWidget(back, 0, 0, 1, 1);

        reload = new QPushButton(tab);
        reload->setObjectName(QStringLiteral("reload"));
        reload->setFlat(true);

        gridLayout->addWidget(reload, 0, 1, 1, 1);

        forward = new QPushButton(tab);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setFlat(true);

        gridLayout->addWidget(forward, 0, 2, 1, 1);

        url = new QLineEdit(tab);
        url->setObjectName(QStringLiteral("url"));
        url->setClearButtonEnabled(true);

        gridLayout->addWidget(url, 0, 3, 1, 1);

        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lcdNumber, 0, 4, 1, 1);

        Go = new QPushButton(tab);
        Go->setObjectName(QStringLiteral("Go"));
        Go->setFlat(true);

        gridLayout->addWidget(Go, 0, 5, 1, 1);

        Menu = new QToolButton(tab);
        Menu->setObjectName(QStringLiteral("Menu"));
        Menu->setPopupMode(QToolButton::MenuButtonPopup);
        Menu->setAutoRaise(true);
        Menu->setArrowType(Qt::DownArrow);

        gridLayout->addWidget(Menu, 0, 7, 1, 1);

        webView = new QWebView(tab);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setLayoutDirection(Qt::RightToLeft);
        webView->setAutoFillBackground(true);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout->addWidget(webView, 1, 0, 1, 8);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFlat(true);

        gridLayout_2->addWidget(pushButton_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        back->setText(QApplication::translate("MainWindow", "<-", 0));
        reload->setText(QApplication::translate("MainWindow", "Refresh", 0));
        forward->setText(QApplication::translate("MainWindow", "->", 0));
        url->setPlaceholderText(QApplication::translate("MainWindow", "Enter Website to start", 0));
        Go->setText(QApplication::translate("MainWindow", "Go -->>", 0));
        Menu->setText(QApplication::translate("MainWindow", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "HomeTab", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Add Tab", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
