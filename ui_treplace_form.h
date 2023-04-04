/********************************************************************************
** Form generated from reading UI file 'treplace_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREPLACE_FORM_H
#define UI_TREPLACE_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TReplace_form
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QToolButton *toolButton_2;
    QGraphicsView *graphicsView;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QToolButton *toolButton;
    QGraphicsView *graphicsView_2;
    QListView *listView_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TReplace_form)
    {
        if (TReplace_form->objectName().isEmpty())
            TReplace_form->setObjectName(QString::fromUtf8("TReplace_form"));
        TReplace_form->setWindowModality(Qt::ApplicationModal);
        TReplace_form->resize(614, 416);
        TReplace_form->setMinimumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ICO/8.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        TReplace_form->setWindowIcon(icon);
        TReplace_form->setModal(true);
        gridLayout = new QGridLayout(TReplace_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TReplace_form);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TReplace_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        line_2 = new QFrame(TReplace_form);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, -1, -1, -1);
        pushButton = new QPushButton(TReplace_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(80, 0));
        pushButton->setMaximumSize(QSize(80, 16777215));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignTop);

        toolButton_2 = new QToolButton(TReplace_form);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        verticalLayout_2->addWidget(toolButton_2, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(verticalLayout_2);

        graphicsView = new QGraphicsView(TReplace_form);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMaximumSize(QSize(100, 100));
        graphicsView->setFrameShape(QFrame::Panel);

        horizontalLayout->addWidget(graphicsView, 0, Qt::AlignTop);

        listView = new QListView(TReplace_form);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(listView);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, -1, -1, -1);
        pushButton_2 = new QPushButton(TReplace_form);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(80, 0));
        pushButton_2->setMaximumSize(QSize(80, 16777215));

        verticalLayout_3->addWidget(pushButton_2, 0, Qt::AlignTop);

        toolButton = new QToolButton(TReplace_form);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        verticalLayout_3->addWidget(toolButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout_2->addLayout(verticalLayout_3);

        graphicsView_2 = new QGraphicsView(TReplace_form);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        sizePolicy.setHeightForWidth(graphicsView_2->sizePolicy().hasHeightForWidth());
        graphicsView_2->setSizePolicy(sizePolicy);
        graphicsView_2->setMaximumSize(QSize(100, 100));
        graphicsView_2->setFrameShape(QFrame::Panel);

        horizontalLayout_2->addWidget(graphicsView_2, 0, Qt::AlignTop);

        listView_2 = new QListView(TReplace_form);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(listView_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(TReplace_form);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 4, -1, 4);
        pushButton_3 = new QPushButton(TReplace_form);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/BMP/doneplus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setFlat(false);

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        checkBox = new QCheckBox(TReplace_form);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_3->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(TReplace_form);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::No|QDialogButtonBox::NoToAll|QDialogButtonBox::Yes|QDialogButtonBox::YesToAll);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TReplace_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TReplace_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TReplace_form, SLOT(reject()));

        pushButton_3->setDefault(true);


        QMetaObject::connectSlotsByName(TReplace_form);
    } // setupUi

    void retranslateUi(QDialog *TReplace_form)
    {
        TReplace_form->setWindowTitle(QApplication::translate("TReplace_form", "Koperek32::Co mam zrobi\304\207?", nullptr));
        label->setText(QApplication::translate("TReplace_form", "File/directory already exists, should you want to overwrite it?", nullptr));
        label_2->setText(QApplication::translate("TReplace_form", "WARNING: If you click \"Yes to All\" it would made decission to all files in current directory and all sub-directories", nullptr));
        pushButton->setText(QApplication::translate("TReplace_form", "Open...", nullptr));
        toolButton_2->setText(QApplication::translate("TReplace_form", "M", nullptr));
        pushButton_2->setText(QApplication::translate("TReplace_form", "Open...", nullptr));
        toolButton->setText(QApplication::translate("TReplace_form", "M", nullptr));
        pushButton_3->setText(QApplication::translate("TReplace_form", "More advanced rules...", nullptr));
        checkBox->setText(QApplication::translate("TReplace_form", "Use my answer for all other, don't ask me anymore...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TReplace_form: public Ui_TReplace_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREPLACE_FORM_H
