/********************************************************************************
** Form generated from reading UI file 'tconsole_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCONSOLE_FORM_H
#define UI_TCONSOLE_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TConsole_form
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_MENU;

    void setupUi(QDialog *TConsole_form)
    {
        if (TConsole_form->objectName().isEmpty())
            TConsole_form->setObjectName(QStringLiteral("TConsole_form"));
        TConsole_form->resize(400, 300);
        verticalLayout = new QVBoxLayout(TConsole_form);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        listWidget = new QListWidget(TConsole_form);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setBold(true);
        font.setWeight(75);
        listWidget->setFont(font);
        listWidget->setFrameShape(QFrame::Box);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAutoScroll(true);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setModelColumn(0);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        toolButton = new QToolButton(TConsole_form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(40, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/BMP/progress.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_2 = new QToolButton(TConsole_form);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(40, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/BMP/pause.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(TConsole_form);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(40, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/BMP/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(toolButton_3);

        toolButton_MENU = new QToolButton(TConsole_form);
        toolButton_MENU->setObjectName(QStringLiteral("toolButton_MENU"));
        toolButton_MENU->setMinimumSize(QSize(40, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/BMP/menu.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_MENU->setIcon(icon3);
        toolButton_MENU->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(toolButton_MENU);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TConsole_form);

        QMetaObject::connectSlotsByName(TConsole_form);
    } // setupUi

    void retranslateUi(QDialog *TConsole_form)
    {
        TConsole_form->setWindowTitle(QApplication::translate("TConsole_form", "Koperek32::Console", 0));
        toolButton->setText(QApplication::translate("TConsole_form", "BACK", 0));
        toolButton_2->setText(QApplication::translate("TConsole_form", "PAUSE", 0));
        toolButton_3->setText(QApplication::translate("TConsole_form", "STOP", 0));
        toolButton_MENU->setText(QApplication::translate("TConsole_form", "MENU", 0));
    } // retranslateUi

};

namespace Ui {
    class TConsole_form: public Ui_TConsole_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCONSOLE_FORM_H
