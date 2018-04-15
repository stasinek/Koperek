/********************************************************************************
** Form generated from reading UI file 'tjournal_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TJOURNAL_FORM_H
#define UI_TJOURNAL_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TJournal_form
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QListWidget *listWidget_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TJournal_form)
    {
        if (TJournal_form->objectName().isEmpty())
            TJournal_form->setObjectName(QStringLiteral("TJournal_form"));
        TJournal_form->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(TJournal_form);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_5 = new QLabel(TJournal_form);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        verticalLayout_7->addWidget(label_5);

        listWidget_7 = new QListWidget(TJournal_form);
        listWidget_7->setObjectName(QStringLiteral("listWidget_7"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush2(QColor(106, 104, 100, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(212, 208, 200, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        listWidget_7->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Lucida Sans Unicode"));
        font1.setBold(true);
        font1.setWeight(75);
        listWidget_7->setFont(font1);
        listWidget_7->setFrameShape(QFrame::WinPanel);
        listWidget_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_7->setWordWrap(true);

        verticalLayout_7->addWidget(listWidget_7);


        verticalLayout->addLayout(verticalLayout_7);

        buttonBox = new QDialogButtonBox(TJournal_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TJournal_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TJournal_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TJournal_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TJournal_form);
    } // setupUi

    void retranslateUi(QDialog *TJournal_form)
    {
        TJournal_form->setWindowTitle(QApplication::translate("TJournal_form", "Dialog", 0));
        label_5->setText(QApplication::translate("TJournal_form", "Process journal viewer:", 0));
    } // retranslateUi

};

namespace Ui {
    class TJournal_form: public Ui_TJournal_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TJOURNAL_FORM_H
