/********************************************************************************
** Form generated from reading UI file 'tmain_mini_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMAIN_MINI_FORM_H
#define UI_TMAIN_MINI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TMain_mini_form
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGraphicsView *Animation_graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar_1;
    QProgressBar *progressBar_2;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_MENU;

    void setupUi(QDialog *TMain_mini_form)
    {
        if (TMain_mini_form->objectName().isEmpty())
            TMain_mini_form->setObjectName(QStringLiteral("TMain_mini_form"));
        TMain_mini_form->resize(367, 213);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TMain_mini_form->sizePolicy().hasHeightForWidth());
        TMain_mini_form->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/ICO/Icon4.ico"), QSize(), QIcon::Normal, QIcon::Off);
        TMain_mini_form->setWindowIcon(icon);
        TMain_mini_form->setWindowOpacity(1);
        gridLayout = new QGridLayout(TMain_mini_form);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Animation_graphicsView = new QGraphicsView(TMain_mini_form);
        Animation_graphicsView->setObjectName(QStringLiteral("Animation_graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Animation_graphicsView->sizePolicy().hasHeightForWidth());
        Animation_graphicsView->setSizePolicy(sizePolicy1);
        Animation_graphicsView->setMinimumSize(QSize(200, 100));
        Animation_graphicsView->setMaximumSize(QSize(16777215, 100));
        QPalette palette;
        QBrush brush(QColor(192, 192, 192, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        Animation_graphicsView->setPalette(palette);
        Animation_graphicsView->setFrameShape(QFrame::NoFrame);
        Animation_graphicsView->setFrameShadow(QFrame::Plain);
        Animation_graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Animation_graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Animation_graphicsView->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        Animation_graphicsView->setCacheMode(QGraphicsView::CacheBackground);

        verticalLayout->addWidget(Animation_graphicsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        progressBar_1 = new QProgressBar(TMain_mini_form);
        progressBar_1->setObjectName(QStringLiteral("progressBar_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar_1->sizePolicy().hasHeightForWidth());
        progressBar_1->setSizePolicy(sizePolicy2);
        progressBar_1->setMinimumSize(QSize(100, 15));
        progressBar_1->setMaximumSize(QSize(16777215, 15));
        progressBar_1->setValue(0);
        progressBar_1->setTextVisible(false);

        horizontalLayout_2->addWidget(progressBar_1);

        progressBar_2 = new QProgressBar(TMain_mini_form);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        sizePolicy.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy);
        progressBar_2->setMinimumSize(QSize(100, 15));
        progressBar_2->setMaximumSize(QSize(16777215, 15));
        progressBar_2->setValue(0);
        progressBar_2->setTextVisible(false);

        horizontalLayout_2->addWidget(progressBar_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(TMain_mini_form);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(TMain_mini_form);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        line = new QFrame(TMain_mini_form);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        toolButton = new QToolButton(TMain_mini_form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(30, 30));
        toolButton->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/BMP/console.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(0, 24, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(TMain_mini_form);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMaximumSize(QSize(16777215, 25));
        label->setMargin(5);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(5, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        toolButton_2 = new QToolButton(TMain_mini_form);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(30, 30));
        toolButton_2->setMaximumSize(QSize(30, 30));
        QPalette palette1;
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(106, 104, 100, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        toolButton_2->setPalette(palette1);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        toolButton_2->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/BMP/pause.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/new/prefix1/BMP/resume.PNG"), QSize(), QIcon::Normal, QIcon::On);
        toolButton_2->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(TMain_mini_form);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(30, 30));
        toolButton_3->setMaximumSize(QSize(30, 30));
        QPalette palette2;
        QBrush brush4(QColor(255, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        toolButton_3->setPalette(palette2);
        toolButton_3->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/BMP/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon3);

        horizontalLayout->addWidget(toolButton_3);

        toolButton_MENU = new QToolButton(TMain_mini_form);
        toolButton_MENU->setObjectName(QStringLiteral("toolButton_MENU"));
        toolButton_MENU->setMinimumSize(QSize(30, 30));
        toolButton_MENU->setMaximumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/BMP/menu.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_MENU->setIcon(icon4);
        toolButton_MENU->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(toolButton_MENU);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TMain_mini_form);

        QMetaObject::connectSlotsByName(TMain_mini_form);
    } // setupUi

    void retranslateUi(QDialog *TMain_mini_form)
    {
        TMain_mini_form->setWindowTitle(QApplication::translate("TMain_mini_form", "sstsoft::Koperek32::Mini", 0));
        label_2->setText(QApplication::translate("TMain_mini_form", "Kopiowanie z 'pliku' do 'pliku'", 0));
        label_3->setText(QApplication::translate("TMain_mini_form", "Z 'C:\\' do 'D:\\cel'", 0));
        toolButton->setText(QApplication::translate("TMain_mini_form", "CONSOLE", 0));
        label->setText(QApplication::translate("TMain_mini_form", "Czas do zako\305\204czenia: 1h i 1 minut", 0));
        toolButton_2->setText(QApplication::translate("TMain_mini_form", "||", 0));
        toolButton_3->setText(QApplication::translate("TMain_mini_form", "[]", 0));
        toolButton_MENU->setText(QApplication::translate("TMain_mini_form", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class TMain_mini_form: public Ui_TMain_mini_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMAIN_MINI_FORM_H
