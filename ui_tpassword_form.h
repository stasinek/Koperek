/********************************************************************************
** Form generated from reading UI file 'tpassword_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPASSWORD_FORM_H
#define UI_TPASSWORD_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TPassword_form
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TPassword_form)
    {
        if (TPassword_form->objectName().isEmpty())
            TPassword_form->setObjectName(QStringLiteral("TPassword_form"));
        TPassword_form->resize(400, 275);
        verticalLayout = new QVBoxLayout(TPassword_form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(TPassword_form);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(graphicsView);

        label_2 = new QLabel(TPassword_form);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(TPassword_form);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label = new QLabel(TPassword_form);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(TPassword_form);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        checkBox = new QCheckBox(TPassword_form);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font);
        checkBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        toolButton = new QToolButton(TPassword_form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(45, 45));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/ICO/Icon8.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(false);

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(TPassword_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TPassword_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TPassword_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TPassword_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TPassword_form);
    } // setupUi

    void retranslateUi(QDialog *TPassword_form)
    {
        TPassword_form->setWindowTitle(QApplication::translate("TPassword_form", "Koperek32::Enter Password!", 0));
        label_2->setText(QApplication::translate("TPassword_form", "Set password:", 0));
        label->setText(QApplication::translate("TPassword_form", "Repeat:", 0));
        checkBox->setText(QApplication::translate("TPassword_form", "Show text", 0));
        toolButton->setText(QApplication::translate("TPassword_form", "OR LOAD/SAVE IT FROM...", 0));
    } // retranslateUi

};

namespace Ui {
    class TPassword_form: public Ui_TPassword_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPASSWORD_FORM_H
