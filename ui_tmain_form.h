/********************************************************************************
** Form generated from reading UI file 'tmain_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMAIN_FORM_H
#define UI_TMAIN_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TMain_form
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_14;
    QGraphicsView *Animation_graphicsView;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_8;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_1;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_MENU;
    QToolButton *toolButton_F;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGraphicsView *graphicsView_2;
    QVBoxLayout *verticalLayout_3;
    QToolButton *toolButton_D1;
    QListView *listView;
    QLabel *label_6;
    QWidget *widget_2;
    QWidget *tab_1;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_5;
    QToolButton *toolButton_P;
    QToolButton *toolButton_M;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton_T;
    QToolButton *toolButton_U;
    QToolButton *toolButton_D;
    QToolButton *toolButton_B;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_7;
    QGraphicsView *Chart_graphicsView;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tableWidget_2;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *checkBox;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QWidget *widget_4;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_2;
    QWidget *widget_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_3;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_4;
    QDateTimeEdit *dateTimeEdit_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit;
    QToolButton *toolButton_8;
    QWidget *widget;
    QLabel *label_9;

    void setupUi(QDialog *TMain_form)
    {
        if (TMain_form->objectName().isEmpty())
            TMain_form->setObjectName(QString::fromUtf8("TMain_form"));
        TMain_form->resize(701, 527);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TMain_form->sizePolicy().hasHeightForWidth());
        TMain_form->setSizePolicy(sizePolicy);
        TMain_form->setMinimumSize(QSize(700, 500));
        TMain_form->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ICO/Icon4.ico"), QSize(), QIcon::Normal, QIcon::Off);
        TMain_form->setWindowIcon(icon);
        TMain_form->setSizeGripEnabled(true);
        verticalLayout_4 = new QVBoxLayout(TMain_form);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4->setContentsMargins(8, 8, 8, 8);
        widget_7 = new QWidget(TMain_form);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        widget_7->setMinimumSize(QSize(500, 100));
        verticalLayout_14 = new QVBoxLayout(widget_7);
        verticalLayout_14->setSpacing(4);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        Animation_graphicsView = new QGraphicsView(widget_7);
        Animation_graphicsView->setObjectName(QString::fromUtf8("Animation_graphicsView"));
        Animation_graphicsView->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Animation_graphicsView->sizePolicy().hasHeightForWidth());
        Animation_graphicsView->setSizePolicy(sizePolicy2);
        Animation_graphicsView->setMinimumSize(QSize(0, 50));
        Animation_graphicsView->setMaximumSize(QSize(16777215, 16777215));
        Animation_graphicsView->setBaseSize(QSize(-1, 150));
        QPalette palette;
        QBrush brush(QColor(192, 192, 192, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        Animation_graphicsView->setPalette(palette);
        Animation_graphicsView->setAutoFillBackground(true);
        Animation_graphicsView->setFrameShape(QFrame::NoFrame);
        Animation_graphicsView->setFrameShadow(QFrame::Sunken);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        Animation_graphicsView->setBackgroundBrush(brush2);
        Animation_graphicsView->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        Animation_graphicsView->setCacheMode(QGraphicsView::CacheBackground);
        Animation_graphicsView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
        Animation_graphicsView->setOptimizationFlags(QGraphicsView::IndirectPainting);

        verticalLayout_14->addWidget(Animation_graphicsView);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        label_8 = new QLabel(widget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);

        verticalLayout_14->addWidget(label_8);

        label_3 = new QLabel(widget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_14->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        progressBar_2 = new QProgressBar(widget_7);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy4);
        progressBar_2->setMinimumSize(QSize(80, 15));
        progressBar_2->setMaximumSize(QSize(80, 15));
        progressBar_2->setFont(font);
        progressBar_2->setValue(0);
        progressBar_2->setTextVisible(false);

        horizontalLayout_2->addWidget(progressBar_2);

        progressBar_1 = new QProgressBar(widget_7);
        progressBar_1->setObjectName(QString::fromUtf8("progressBar_1"));
        sizePolicy1.setHeightForWidth(progressBar_1->sizePolicy().hasHeightForWidth());
        progressBar_1->setSizePolicy(sizePolicy1);
        progressBar_1->setMinimumSize(QSize(0, 15));
        progressBar_1->setMaximumSize(QSize(16777215, 15));
        progressBar_1->setFont(font);
        progressBar_1->setMaximum(100);
        progressBar_1->setValue(0);
        progressBar_1->setTextVisible(false);
        progressBar_1->setInvertedAppearance(false);
        progressBar_1->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_2->addWidget(progressBar_1);


        verticalLayout_14->addLayout(horizontalLayout_2);

        line_2 = new QFrame(widget_7);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_14->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, 0);
        toolButton = new QToolButton(widget_7);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy5);
        toolButton->setMinimumSize(QSize(40, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/BMP/console.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer_2 = new QSpacerItem(10, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(label_4, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(0, 24, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(10, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        toolButton_2 = new QToolButton(widget_7);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy4.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy4);
        toolButton_2->setMinimumSize(QSize(40, 30));
        toolButton_2->setLayoutDirection(Qt::RightToLeft);
        toolButton_2->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/BMP/pause.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/new/prefix1/BMP/resume.PNG"), QSize(), QIcon::Normal, QIcon::On);
        toolButton_2->setIcon(icon2);
        toolButton_2->setIconSize(QSize(24, 24));
        toolButton_2->setCheckable(true);
        toolButton_2->setChecked(false);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widget_7);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        sizePolicy4.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy4);
        toolButton_3->setMinimumSize(QSize(40, 30));
        toolButton_3->setLayoutDirection(Qt::RightToLeft);
        toolButton_3->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/BMP/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon3);
        toolButton_3->setIconSize(QSize(24, 24));
        toolButton_3->setCheckable(true);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(toolButton_3);

        toolButton_MENU = new QToolButton(widget_7);
        toolButton_MENU->setObjectName(QString::fromUtf8("toolButton_MENU"));
        toolButton_MENU->setMinimumSize(QSize(40, 30));
        toolButton_MENU->setMaximumSize(QSize(16777215, 30));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/BMP/menu.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_MENU->setIcon(icon4);
        toolButton_MENU->setIconSize(QSize(24, 24));
        toolButton_MENU->setAutoRaise(false);

        horizontalLayout->addWidget(toolButton_MENU);

        toolButton_F = new QToolButton(widget_7);
        toolButton_F->setObjectName(QString::fromUtf8("toolButton_F"));
        sizePolicy4.setHeightForWidth(toolButton_F->sizePolicy().hasHeightForWidth());
        toolButton_F->setSizePolicy(sizePolicy4);
        toolButton_F->setMinimumSize(QSize(40, 30));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/BMP/ZWIN.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_F->setIcon(icon5);
        toolButton_F->setCheckable(true);
        toolButton_F->setChecked(true);
        toolButton_F->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_F);


        verticalLayout_14->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_3);


        verticalLayout_4->addWidget(widget_7);

        widget_5 = new QWidget(TMain_form);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        widget_5->setMinimumSize(QSize(500, 250));
        verticalLayout_12 = new QVBoxLayout(widget_5);
        verticalLayout_12->setSpacing(4);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 5);
        verticalSpacer_2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_2);

        line = new QFrame(widget_5);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line);

        tabWidget = new QTabWidget(widget_5);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(22, 22));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        graphicsView_2 = new QGraphicsView(tab_3);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        sizePolicy4.setHeightForWidth(graphicsView_2->sizePolicy().hasHeightForWidth());
        graphicsView_2->setSizePolicy(sizePolicy4);
        graphicsView_2->setMaximumSize(QSize(150, 150));
        graphicsView_2->setAutoFillBackground(true);
        graphicsView_2->setFrameShape(QFrame::NoFrame);
        graphicsView_2->setFrameShadow(QFrame::Plain);
        graphicsView_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_3->addWidget(graphicsView_2, 0, Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolButton_D1 = new QToolButton(tab_3);
        toolButton_D1->setObjectName(QString::fromUtf8("toolButton_D1"));
        toolButton_D1->setMinimumSize(QSize(24, 24));
        toolButton_D1->setMaximumSize(QSize(30, 16777215));

        verticalLayout_3->addWidget(toolButton_D1, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_3);

        listView = new QListView(tab_3);
        listView->setObjectName(QString::fromUtf8("listView"));
        sizePolicy1.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy1);
        listView->setMaximumSize(QSize(16777215, 150));
        listView->setFrameShape(QFrame::WinPanel);
        listView->setGridSize(QSize(0, 0));
        listView->setViewMode(QListView::ListMode);

        horizontalLayout_3->addWidget(listView, 0, Qt::AlignTop);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout_3->addWidget(widget_2, 2, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        gridLayout = new QGridLayout(tab_1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Tahoma"));
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);

        verticalLayout_6->addWidget(label_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tableWidget = new QTableWidget(tab_1);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        if (tableWidget->rowCount() < 100)
            tableWidget->setRowCount(100);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideNone);
        tableWidget->setGridStyle(Qt::DotLine);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(100);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_6->addWidget(tableWidget);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        toolButton_P = new QToolButton(tab_1);
        toolButton_P->setObjectName(QString::fromUtf8("toolButton_P"));
        sizePolicy3.setHeightForWidth(toolButton_P->sizePolicy().hasHeightForWidth());
        toolButton_P->setSizePolicy(sizePolicy3);
        toolButton_P->setMinimumSize(QSize(24, 24));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/BMP/PLUS2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_P->setIcon(icon6);

        verticalLayout_5->addWidget(toolButton_P, 0, Qt::AlignTop);

        toolButton_M = new QToolButton(tab_1);
        toolButton_M->setObjectName(QString::fromUtf8("toolButton_M"));
        sizePolicy3.setHeightForWidth(toolButton_M->sizePolicy().hasHeightForWidth());
        toolButton_M->setSizePolicy(sizePolicy3);
        toolButton_M->setMinimumSize(QSize(24, 24));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/BMP/minus2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_M->setIcon(icon7);

        verticalLayout_5->addWidget(toolButton_M, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        toolButton_T = new QToolButton(tab_1);
        toolButton_T->setObjectName(QString::fromUtf8("toolButton_T"));
        sizePolicy3.setHeightForWidth(toolButton_T->sizePolicy().hasHeightForWidth());
        toolButton_T->setSizePolicy(sizePolicy3);
        toolButton_T->setMinimumSize(QSize(24, 24));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/BMP/top.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_T->setIcon(icon8);

        verticalLayout_5->addWidget(toolButton_T);

        toolButton_U = new QToolButton(tab_1);
        toolButton_U->setObjectName(QString::fromUtf8("toolButton_U"));
        sizePolicy3.setHeightForWidth(toolButton_U->sizePolicy().hasHeightForWidth());
        toolButton_U->setSizePolicy(sizePolicy3);
        toolButton_U->setMinimumSize(QSize(24, 24));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/BMP/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_U->setIcon(icon9);

        verticalLayout_5->addWidget(toolButton_U);

        toolButton_D = new QToolButton(tab_1);
        toolButton_D->setObjectName(QString::fromUtf8("toolButton_D"));
        sizePolicy3.setHeightForWidth(toolButton_D->sizePolicy().hasHeightForWidth());
        toolButton_D->setSizePolicy(sizePolicy3);
        toolButton_D->setMinimumSize(QSize(24, 24));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/BMP/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_D->setIcon(icon10);

        verticalLayout_5->addWidget(toolButton_D);

        toolButton_B = new QToolButton(tab_1);
        toolButton_B->setObjectName(QString::fromUtf8("toolButton_B"));
        sizePolicy3.setHeightForWidth(toolButton_B->sizePolicy().hasHeightForWidth());
        toolButton_B->setSizePolicy(sizePolicy3);
        toolButton_B->setMinimumSize(QSize(24, 24));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/BMP/bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_B->setIcon(icon11);

        verticalLayout_5->addWidget(toolButton_B);


        horizontalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        verticalLayout_11->addWidget(label_7);

        Chart_graphicsView = new QGraphicsView(tab_2);
        Chart_graphicsView->setObjectName(QString::fromUtf8("Chart_graphicsView"));
        Chart_graphicsView->setFrameShape(QFrame::WinPanel);

        verticalLayout_11->addWidget(Chart_graphicsView);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        verticalLayout_8->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 5, -1, -1);
        tableWidget_2 = new QTableWidget(tab);
        if (tableWidget_2->columnCount() < 1)
            tableWidget_2->setColumnCount(1);
        if (tableWidget_2->rowCount() < 5)
            tableWidget_2->setRowCount(5);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy6);
        tableWidget_2->setMaximumSize(QSize(100, 16777215));
        tableWidget_2->setFrameShape(QFrame::WinPanel);
        tableWidget_2->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_2->setIconSize(QSize(32, 32));
        tableWidget_2->setTextElideMode(Qt::ElideLeft);
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setGridStyle(Qt::SolidLine);
        tableWidget_2->setRowCount(5);
        tableWidget_2->setColumnCount(1);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(50);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setStretchLastSection(true);

        horizontalLayout_7->addWidget(tableWidget_2, 0, Qt::AlignLeft|Qt::AlignTop);

        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        verticalLayout_10 = new QVBoxLayout(page_1);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        checkBox = new QCheckBox(page_1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_10->addWidget(checkBox);

        checkBox_6 = new QCheckBox(page_1);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_10->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(page_1);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_10->addWidget(checkBox_7);

        widget_4 = new QWidget(page_1);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));

        verticalLayout_10->addWidget(widget_4);

        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox_2 = new QCheckBox(page_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        widget_3 = new QWidget(page_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        verticalLayout_2->addWidget(widget_3);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_9 = new QVBoxLayout(page_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_3 = new QCheckBox(page_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_8->addWidget(checkBox_3);

        dateTimeEdit = new QDateTimeEdit(page_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        sizePolicy4.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy4);

        horizontalLayout_8->addWidget(dateTimeEdit);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkBox_4 = new QCheckBox(page_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        horizontalLayout_9->addWidget(checkBox_4);

        dateTimeEdit_2 = new QDateTimeEdit(page_2);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        sizePolicy4.setHeightForWidth(dateTimeEdit_2->sizePolicy().hasHeightForWidth());
        dateTimeEdit_2->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(dateTimeEdit_2);


        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkBox_5 = new QCheckBox(page_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout_10->addWidget(checkBox_5);

        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_10->addWidget(lineEdit);

        toolButton_8 = new QToolButton(page_2);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));

        horizontalLayout_10->addWidget(toolButton_8);


        verticalLayout_9->addLayout(horizontalLayout_10);

        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_9->addWidget(widget);

        stackedWidget->addWidget(page_2);

        horizontalLayout_7->addWidget(stackedWidget);


        verticalLayout_8->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab, QString());

        verticalLayout_12->addWidget(tabWidget);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setOpenExternalLinks(true);

        verticalLayout_12->addWidget(label_9);


        verticalLayout_4->addWidget(widget_5);


        retranslateUi(TMain_form);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TMain_form);
    } // setupUi

    void retranslateUi(QDialog *TMain_form)
    {
        TMain_form->setWindowTitle(QApplication::translate("TMain_form", "sstsoft::Koperek32::Main::kopiowanie, przenoszenie, usuwanie, kompresja sp. z o. o.", nullptr));
        label_8->setText(QApplication::translate("TMain_form", "Kopiuje: C:\\KATALOG\\plik.rozszerzenie", nullptr));
        label_3->setText(QApplication::translate("TMain_form", "Z 'C:\\' do 'D:\\cel'", nullptr));
        toolButton->setText(QApplication::translate("TMain_form", "CONSOLE", nullptr));
        label_4->setText(QApplication::translate("TMain_form", "Do zako\305\204czenia pozosta\305\202o: 1000 bajt\303\263w; 20 plik\303\263w, oko\305\202o 2 minuty", nullptr));
        toolButton_2->setText(QApplication::translate("TMain_form", "PAUSE", nullptr));
        toolButton_3->setText(QApplication::translate("TMain_form", "STOP", nullptr));
        toolButton_MENU->setText(QApplication::translate("TMain_form", "...", nullptr));
        toolButton_F->setText(QApplication::translate("TMain_form", "v", nullptr));
        toolButton_D1->setText(QApplication::translate("TMain_form", "...", nullptr));
        label_6->setText(QApplication::translate("TMain_form", "See curent source file && directory preview, detailed informations , hash(if enabled - see the options)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("TMain_form", "Current file && directory in details", nullptr));
        label_2->setText(QApplication::translate("TMain_form", "Processed file list. You can pause current opperation, review all unfinished, add and delete if You want", nullptr));
        toolButton_P->setText(QApplication::translate("TMain_form", "+", nullptr));
        toolButton_M->setText(QApplication::translate("TMain_form", "-", nullptr));
        toolButton_T->setText(QApplication::translate("TMain_form", "...", nullptr));
        toolButton_U->setText(QApplication::translate("TMain_form", "...", nullptr));
        toolButton_D->setText(QApplication::translate("TMain_form", "...", nullptr));
        toolButton_B->setText(QApplication::translate("TMain_form", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("TMain_form", "File list", nullptr));
        label_7->setText(QApplication::translate("TMain_form", "File sizes rounded chart, click to see details, double click to enter lower level, right click to came back..", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TMain_form", "File chart", nullptr));
        label->setText(QApplication::translate("TMain_form", "Setting options will affect on current or next file operation", nullptr));
        checkBox->setText(QApplication::translate("TMain_form", "Remember window size and position", nullptr));
        checkBox_6->setText(QApplication::translate("TMain_form", "If enabled i will wait some time after each operation so you could watch", nullptr));
        checkBox_7->setText(QApplication::translate("TMain_form", "If enabled i will stop if found file simmilar to chosen one", nullptr));
        checkBox_2->setText(QApplication::translate("TMain_form", "Write watch; compare source && destination file after each write(2x slower)", nullptr));
        checkBox_3->setText(QApplication::translate("TMain_form", "Set each file && directory creation date(and modification if older) to:", nullptr));
        checkBox_4->setText(QApplication::translate("TMain_form", "Set each file &&& directory modification date to:", nullptr));
        checkBox_5->setText(QApplication::translate("TMain_form", "Set each file && directory name to:", nullptr));
        toolButton_8->setText(QApplication::translate("TMain_form", "?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TMain_form", "Options", nullptr));
        label_9->setText(QApplication::translate("TMain_form", "Status...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TMain_form: public Ui_TMain_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMAIN_FORM_H
