/********************************************************************************
** Form generated from reading UI file 'tlister_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLISTER_FORM_H
#define UI_TLISTER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TLister_form
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QToolButton *toolButton_3;

    void setupUi(QDialog *TLister_form)
    {
        if (TLister_form->objectName().isEmpty())
            TLister_form->setObjectName(QStringLiteral("TLister_form"));
        TLister_form->resize(423, 195);
        verticalLayout = new QVBoxLayout(TLister_form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(TLister_form);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(graphicsView);

        label = new QLabel(TLister_form);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TLister_form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        progressBar = new QProgressBar(TLister_form);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_2 = new QToolButton(TLister_form);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/BMP/pause.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(toolButton_2);

        toolButton = new QToolButton(TLister_form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/BMP/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(toolButton);

        toolButton_3 = new QToolButton(TLister_form);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setMinimumSize(QSize(50, 0));
        toolButton_3->setBaseSize(QSize(0, 0));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/BMP/resume.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TLister_form);

        QMetaObject::connectSlotsByName(TLister_form);
    } // setupUi

    void retranslateUi(QDialog *TLister_form)
    {
        TLister_form->setWindowTitle(QApplication::translate("TLister_form", "Koperek32::listowanie", 0));
        label->setText(QApplication::translate("TLister_form", "Searching for source files...", 0));
        label_2->setText(QApplication::translate("TLister_form", "C:\\Some Directory\\File.exe", 0));
        toolButton_2->setText(QApplication::translate("TLister_form", "||", 0));
        toolButton->setText(QApplication::translate("TLister_form", "STOP", 0));
        toolButton_3->setText(QApplication::translate("TLister_form", ">>", 0));
    } // retranslateUi

};

namespace Ui {
    class TLister_form: public Ui_TLister_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLISTER_FORM_H
