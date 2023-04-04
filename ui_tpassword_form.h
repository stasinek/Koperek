/********************************************************************************
** Form generated from reading UI file 'tpassword_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPASSWORD_FORM_H
#define UI_TPASSWORD_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
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
            TPassword_form->setObjectName(QString::fromUtf8("TPassword_form"));
        TPassword_form->resize(400, 275);
        verticalLayout = new QVBoxLayout(TPassword_form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(TPassword_form);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(graphicsView);

        label_2 = new QLabel(TPassword_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(TPassword_form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label = new QLabel(TPassword_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(TPassword_form);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        checkBox = new QCheckBox(TPassword_form);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font);
        checkBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        toolButton = new QToolButton(TPassword_form);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(50, 42));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ICO/Icon7.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(false);

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(TPassword_form);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        TPassword_form->setWindowTitle(QApplication::translate("TPassword_form", "Koperek32::Enter Password!", nullptr));
        label_2->setText(QApplication::translate("TPassword_form", "Set password:", nullptr));
        label->setText(QApplication::translate("TPassword_form", "Repeat:", nullptr));
        checkBox->setText(QApplication::translate("TPassword_form", "Show text", nullptr));
        toolButton->setText(QApplication::translate("TPassword_form", "Load/Save It From/To...", nullptr));
#ifndef QT_NO_SHORTCUT
        toolButton->setShortcut(QApplication::translate("TPassword_form", "2, 4, Return", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class TPassword_form: public Ui_TPassword_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPASSWORD_FORM_H
