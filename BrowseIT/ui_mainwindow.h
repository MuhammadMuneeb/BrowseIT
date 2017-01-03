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
#include <QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Options;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *back;
    QPushButton *reload;
    QPushButton *forward;
    QLCDNumber *lcdNumber;
    QLineEdit *url;
    QWebView *webView;
    QPushButton *Go;
    QPushButton *AddBookmark;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(842, 606);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Symbol"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setTabShape(QTabWidget::Triangular);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Options = new QPushButton(centralwidget);
        Options->setObjectName(QStringLiteral("Options"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/btns and icns/tabs.png"), QSize(), QIcon::Normal, QIcon::Off);
        Options->setIcon(icon);
        Options->setFlat(true);

        horizontalLayout->addWidget(Options);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/btns and icns/new-tab.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/btns and icns/back-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon2);
        back->setDefault(false);
        back->setFlat(true);

        gridLayout->addWidget(back, 0, 0, 1, 1);

        reload = new QPushButton(tab);
        reload->setObjectName(QStringLiteral("reload"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/btns and icns/refresh-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon3);
        reload->setFlat(true);

        gridLayout->addWidget(reload, 0, 1, 1, 1);

        forward = new QPushButton(tab);
        forward->setObjectName(QStringLiteral("forward"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/btns and icns/next-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        forward->setIcon(icon4);
        forward->setFlat(true);

        gridLayout->addWidget(forward, 0, 2, 1, 1);

        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lcdNumber, 0, 6, 1, 1);

        url = new QLineEdit(tab);
        url->setObjectName(QStringLiteral("url"));
        url->setClearButtonEnabled(true);

        gridLayout->addWidget(url, 0, 3, 1, 1);

        webView = new QWebView(tab);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setLayoutDirection(Qt::RightToLeft);
        webView->setAutoFillBackground(true);
        webView->setUrl(QUrl(QStringLiteral("file:///C:/Users/M.M.Haq/workspace/BrowseIT/BrowseIT/Landing Page/index.html")));

        gridLayout->addWidget(webView, 2, 0, 1, 10);

        Go = new QPushButton(tab);
        Go->setObjectName(QStringLiteral("Go"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/btns and icns/fast-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        Go->setIcon(icon5);
        Go->setFlat(true);

        gridLayout->addWidget(Go, 0, 5, 1, 1);

        AddBookmark = new QPushButton(tab);
        AddBookmark->setObjectName(QStringLiteral("AddBookmark"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/btns and icns/bookmarks.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddBookmark->setIcon(icon6);
        AddBookmark->setIconSize(QSize(24, 24));
        AddBookmark->setFlat(true);

        gridLayout->addWidget(AddBookmark, 0, 4, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Options->setText(QApplication::translate("MainWindow", "Options", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Add Tab", 0));
#ifndef QT_NO_WHATSTHIS
        back->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Back</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        back->setText(QString());
#ifndef QT_NO_WHATSTHIS
        reload->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Refresh</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        reload->setText(QString());
#ifndef QT_NO_WHATSTHIS
        forward->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Forward</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        forward->setText(QString());
#ifndef QT_NO_WHATSTHIS
        lcdNumber->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Load Progress</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        url->setPlaceholderText(QApplication::translate("MainWindow", "Enter Website to start", 0));
#ifndef QT_NO_WHATSTHIS
        Go->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Go!</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Go->setText(QString());
        AddBookmark->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "HomeTab", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
