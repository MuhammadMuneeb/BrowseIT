/********************************************************************************
** Form generated from reading UI file 'toolbox.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBOX_H
#define UI_TOOLBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBox
{
public:
    QWidget *page;
    QWidget *page1;

    void setupUi(QToolBox *ToolBox)
    {
        if (ToolBox->objectName().isEmpty())
            ToolBox->setObjectName(QStringLiteral("ToolBox"));
        ToolBox->resize(561, 401);
        ToolBox->setFrameShape(QFrame::StyledPanel);
        ToolBox->setLineWidth(1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 559, 357));
        ToolBox->addItem(page, QStringLiteral("Bookmarks"));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        page1->setGeometry(QRect(0, 0, 559, 357));
        ToolBox->addItem(page1, QStringLiteral("History"));

        retranslateUi(ToolBox);

        ToolBox->setCurrentIndex(0);
        ToolBox->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(ToolBox);
    } // setupUi

    void retranslateUi(QToolBox *ToolBox)
    {
        ToolBox->setWindowTitle(QApplication::translate("ToolBox", "ToolBox", 0));
        ToolBox->setItemText(ToolBox->indexOf(page), QApplication::translate("ToolBox", "Bookmarks", 0));
        ToolBox->setItemText(ToolBox->indexOf(page1), QApplication::translate("ToolBox", "History", 0));
    } // retranslateUi

};

namespace Ui {
    class ToolBox: public Ui_ToolBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBOX_H
