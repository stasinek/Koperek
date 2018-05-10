/********************************************************************************
** Form generated from reading UI file 'tabout_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABOUT_FORM_H
#define UI_TABOUT_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TAbout_form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QCheckBox *checkBox;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TAbout_form)
    {
        if (TAbout_form->objectName().isEmpty())
            TAbout_form->setObjectName(QStringLiteral("TAbout_form"));
        TAbout_form->setWindowModality(Qt::NonModal);
        TAbout_form->resize(424, 294);
        TAbout_form->setModal(false);
        verticalLayout = new QVBoxLayout(TAbout_form);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        label = new QLabel(TAbout_form);
        label->setObjectName(QStringLiteral("label"));
        label->setContextMenuPolicy(Qt::NoContextMenu);
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/BMP/logo2_mini.bmp")));
        label->setScaledContents(false);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(TAbout_form);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setAcceptRichText(false);
        textBrowser->setSource(QUrl(QStringLiteral("qrc:/new/prefix1/Koperek32_license.txt")));

        verticalLayout->addWidget(textBrowser);

        checkBox = new QCheckBox(TAbout_form);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setContextMenuPolicy(Qt::NoContextMenu);

        verticalLayout->addWidget(checkBox);

        line = new QFrame(TAbout_form);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(TAbout_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setContextMenuPolicy(Qt::NoContextMenu);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TAbout_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TAbout_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TAbout_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TAbout_form);
    } // setupUi

    void retranslateUi(QDialog *TAbout_form)
    {
        TAbout_form->setWindowTitle(QApplication::translate("TAbout_form", "Koperek32::About the autor", 0));
        label->setText(QString());
        checkBox->setText(QApplication::translate("TAbout_form", "I understand and accept the license from above!", 0));
    } // retranslateUi

};

namespace Ui {
    class TAbout_form: public Ui_TAbout_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABOUT_FORM_H
