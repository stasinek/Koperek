/********************************************************************************
** Form generated from reading UI file 'treplace_rename_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREPLACE_RENAME_FORM_H
#define UI_TREPLACE_RENAME_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TReplace_rename_form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TReplace_rename_form)
    {
        if (TReplace_rename_form->objectName().isEmpty())
            TReplace_rename_form->setObjectName(QStringLiteral("TReplace_rename_form"));
        TReplace_rename_form->resize(368, 91);
        verticalLayout = new QVBoxLayout(TReplace_rename_form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(TReplace_rename_form);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(TReplace_rename_form);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(TReplace_rename_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TReplace_rename_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TReplace_rename_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TReplace_rename_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TReplace_rename_form);
    } // setupUi

    void retranslateUi(QDialog *TReplace_rename_form)
    {
        TReplace_rename_form->setWindowTitle(QApplication::translate("TReplace_rename_form", "Koperek32::Rename source file", 0));
        label->setText(QApplication::translate("TReplace_rename_form", "Set the new name:", 0));
    } // retranslateUi

};

namespace Ui {
    class TReplace_rename_form: public Ui_TReplace_rename_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREPLACE_RENAME_FORM_H
