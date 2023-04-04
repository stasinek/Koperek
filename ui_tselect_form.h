/********************************************************************************
** Form generated from reading UI file 'tselect_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSELECT_FORM_H
#define UI_TSELECT_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TSelect_form
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TSelect_form)
    {
        if (TSelect_form->objectName().isEmpty())
            TSelect_form->setObjectName(QString::fromUtf8("TSelect_form"));
        TSelect_form->resize(400, 300);
        verticalLayout = new QVBoxLayout(TSelect_form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(TSelect_form);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        label_2 = new QLabel(TSelect_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(TSelect_form);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        toolButton = new QToolButton(TSelect_form);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, 5, -1);
        label_3 = new QLabel(TSelect_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        dateEdit = new QDateEdit(TSelect_form);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);

        timeEdit = new QTimeEdit(TSelect_form);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        horizontalLayout_3->addWidget(timeEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(TSelect_form);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout->addWidget(tableWidget);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(TSelect_form);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TSelect_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TSelect_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TSelect_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TSelect_form);
    } // setupUi

    void retranslateUi(QDialog *TSelect_form)
    {
        TSelect_form->setWindowTitle(QApplication::translate("TSelect_form", "Koperek32::Set Custom Replacement Filter", nullptr));
        label->setText(QApplication::translate("TSelect_form", "Source/destination replacement policy", nullptr));
        label_2->setText(QApplication::translate("TSelect_form", "Extension filter:", nullptr));
        toolButton->setText(QApplication::translate("TSelect_form", "SET!", nullptr));
        label_3->setText(QApplication::translate("TSelect_form", "Modification Date/time :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TSelect_form: public Ui_TSelect_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSELECT_FORM_H
