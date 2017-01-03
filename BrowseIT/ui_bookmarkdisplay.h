/********************************************************************************
** Form generated from reading UI file 'bookmarkdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKDISPLAY_H
#define UI_BOOKMARKDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookmarkDisplay
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *BookmarkDisplay)
    {
        if (BookmarkDisplay->objectName().isEmpty())
            BookmarkDisplay->setObjectName(QStringLiteral("BookmarkDisplay"));
        BookmarkDisplay->resize(400, 300);
        gridLayout = new QGridLayout(BookmarkDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(BookmarkDisplay);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(BookmarkDisplay);

        QMetaObject::connectSlotsByName(BookmarkDisplay);
    } // setupUi

    void retranslateUi(QWidget *BookmarkDisplay)
    {
        BookmarkDisplay->setWindowTitle(QApplication::translate("BookmarkDisplay", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class BookmarkDisplay: public Ui_BookmarkDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKDISPLAY_H
