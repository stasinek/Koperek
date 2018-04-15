/********************************************************************************
** Form generated from reading UI file 'tfinished_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFINISHED_FORM_H
#define UI_TFINISHED_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TFinished_form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TFinished_form)
    {
        if (TFinished_form->objectName().isEmpty())
            TFinished_form->setObjectName(QStringLiteral("TFinished_form"));
        TFinished_form->resize(400, 300);
        verticalLayout = new QVBoxLayout(TFinished_form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(TFinished_form);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TFinished_form);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(TFinished_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TFinished_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TFinished_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TFinished_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TFinished_form);
    } // setupUi

    void retranslateUi(QDialog *TFinished_form)
    {
        TFinished_form->setWindowTitle(QApplication::translate("TFinished_form", "Koperek32::Finished!", 0));
        label->setText(QApplication::translate("TFinished_form", "Koniec!", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TFinished_form: public Ui_TFinished_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFINISHED_FORM_H
