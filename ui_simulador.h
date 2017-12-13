/********************************************************************************
** Form generated from reading UI file 'simulador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULADOR_H
#define UI_SIMULADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulador
{
public:
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QGridLayout *gridLayout_2;
    QMenuBar *menuBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_4;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_8;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Simulador)
    {
        if (Simulador->objectName().isEmpty())
            Simulador->setObjectName(QStringLiteral("Simulador"));
        Simulador->resize(855, 422);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(172, 199, 225, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Simulador->setPalette(palette);
        mainToolBar = new QToolBar(Simulador);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 4, 12));
        statusBar = new QStatusBar(Simulador);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 18));
        gridLayout_2 = new QGridLayout(Simulador);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        menuBar = new QMenuBar(Simulador);
        menuBar->setObjectName(QStringLiteral("menuBar"));

        gridLayout_2->addWidget(menuBar, 0, 0, 1, 1);

        tabWidget = new QTabWidget(Simulador);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 2);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 2, 1, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 4, 0, 1, 2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widget = new QWidget(tab_2);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout_5->addWidget(widget, 0, 0, 1, 2);

        widget_2 = new QWidget(tab_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        gridLayout_5->addWidget(widget_2, 1, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_2 = new QSlider(tab_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(10000);
        horizontalSlider_2->setSingleStep(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 2, 1, 1);

        horizontalSlider_3 = new QSlider(tab_2);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(10000);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 2, 2, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(10000);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 2, 1, 1);

        horizontalSlider_4 = new QSlider(tab_2);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(10000);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_4, 3, 2, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 1, 1, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 3, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 2, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 2, 1, 1, 2);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 1, 1, 1, 2);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 3);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 3, 0, 1, 3);


        gridLayout_5->addLayout(gridLayout_4, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(Simulador);

        tabWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(25);


        QMetaObject::connectSlotsByName(Simulador);
    } // setupUi

    void retranslateUi(QDialog *Simulador)
    {
        Simulador->setWindowTitle(QApplication::translate("Simulador", "Simulador", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Simulador", "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.951625819640404,1.81269246922018,2.59181779318282,3.29679953964361,3.93469340287367,4.51188363905974,5.03414696208591,5.50671035882778,5.93430340259401,6.32120558828558,6.67128916301921,6.98805788087798,7.27468206965988,7.53403036058394,7.76869839851570,7.98103482005345,8.17316475947266,8.34701111778414,8.50431380777365,8.64664716763388,8.77543571747018,8.89196841637666,8.99741156277196,9.09282046710588,9.17915001376101,9.25726421785666,9.32794487260250,9.39189937374782,9.44976779943593,9.50212931632136,9.54950797606442,9.59237796021634,9.63116832598760,9.66626730039674,9.69802616577682,9.72676277552707,9.75276473529661,9.77629228143834,9.79758088554196,9.81684361111266,9.83427324598239,9.85004423179522,9.86431440987799,9.87722660096932,9.88891003461758,9.89948164255367,9.90904722898304,9.91770252950980,9.92553416929076,9.93262053000915,9.93903253434484,9.94483435579239,9.95008406093090,9.95483419057387,9.95913228561536,9.96302136283517,9.966540"
                        "34542529,9.96972445254624,9.97260555181232,9.97521247823334,9.97757132280514,9.97970569363704,9.98163695222971,9.98338442726826,9.98496560807022,9.98639631962452,9.98769088097327,9.98886224852155,9.98992214570951,9.99088118034445,9.99174895076734,9.99253414191623,9.99324461224806,9.99388747238870,9.99446915629852,9.99499548566559,9.99547172817113,9.99590265021020,9.99629256459541,9.99664537372097,9.99696460861921,9.99725346430028,9.99751483172892,9.99775132675821,9.99796531630989,9.99815894206332,9.99833414189012,9.99849266924904,9.99863611073518,9.99876590195913,9.99888334191510,9.99898960598163,9.99908575768522,9.99917275934443,9.99925148170112,9.99932271263509,9.99938716504947,9.99944548400568,9.99949825317944,9.99954600070238,9.99958920444775,9.99962829681316,9.99966366904814,9.99969567516992,9.99972463550650,9.99975083990269,9.99977455062087,9.99979600496589,9.99981541766004,9.99983298299210,9.99984887676180,9.99986325803934,9.99987627075738,9.99988804515158,9.99989869906402,9.99990833912264,9.99991706180"
                        "839,9.99992495442085,9.99993209595193,9.99993855787647,9.99994440486758,9.99994969544393,9.99995448255537,9.99995881411292,9.99996273346828,9.99996627984766,9.99996948874442,9.99997239227428,9.99997501949674,9.99997739670593,9.99997954769375,9.99998149398802,9.99998325506791,9.99998484855888,9.99998629040914,9.99998759504920,9.99998877553635,9.99998984368529,9.99999081018642,9.99999168471281,9.99999247601701,9.99999319201866,9.99999383988374,9.99999442609631,9.99999495652337,9.99999543647363,9.99999587075058,9.99999626370062,9.99999661925651,9.99999694097680,9.99999723208134,9.99999749548363,9.99999773381987,9.99999794947543,9.99999814460864,9.99999832117247,9.99999848093403,9.99999862549227,9.99999875629398,9.99999887464825,9.99999898173963,9.99999907863992,9.99999916631892,9.99999924565416,9.99999931743966,9.99999938239387,9.99999944116686,9.99999949434687,9.99999954246612,9.99999958600623,9.99999962540294,9.99999966105057,9.99999969330587,9.99999972249167,9.99999974890008,9.99999977279540,9.99999979441678,9"
                        ".99999981398061,9.99999983168269,9.99999984770020,9.99999986219344,9.99999987530747,9.99999988717353,9.99999989791039,9.99999990762550,9.99999991641610,9.99999992437016,9.99999993156729,9.99999993807952,9.99999994397203,9.99999994930380,9.99999995412818,9.99999995849346,9.99999996244333,9.99999996601732,9.99999996925120,9.99999997217734,9.99999997482501,9.99999997722073,9.99999997938846,9.99999998134991,9.99999998312470,9.99999998473060,9.99999998618367,9.99999998749847,9.99999998868815,9.99999998976461,9.99999999073864,9.99999999161997,9.99999999241744,9.99999999313902,9.99999999379192,9.99999999438270,9.99999999491726,9.99999999540094,9.99999999583860,9.99999999623461,9.99999999659294,9.99999999691716,9.99999999721053,9.99999999747599,9.99999999771618,9.99999999793351,9.99999999813016,9.99999999830810,9.99999999846911,9.99999999861479,9.99999999874661,9.99999999886589,9.99999999897381,9.99999999907147,9.99999999915983,9.99999999923978,9.99999999931213,9.99999999937759,9.99999999943682,9.99999999949041,9.9999"
                        "9999953890,9.99999999958278,9.99999999962249,9.99999999965841,9.99999999969092,9.99999999972033,9.99999999974695,9.99999999977103,9.99999999979282,9.99999999981253,9.99999999983037,9.99999999984652,9.99999999986112,9.99999999987434,9.99999999988630,9.99999999989712,9.99999999990691,9.99999999991577,9.99999999992378,9.99999999993104,9.99999999993760,9.99999999994354,9.99999999994891,9.99999999995377,9.99999999995817,9.99999999996215,9.99999999996575,9.99999999996901,9.99999999997196,9.99999999997463,9.99999999997704,9.99999999997923,9.99999999998120,9.99999999998299,9.99999999998461,9.99999999998608,9.99999999998740,9.99999999998860,9.99999999998969,9.99999999999067,9.99999999999156,9.99999999999236,9.99999999999309,9.99999999999374,9.99999999999434,9.99999999999488,9.99999999999537,9.99999999999581,9.99999999999621,9.99999999999657,9.99999999999689,9.99999999999719,9.99999999999746,9.99999999999770,9.99999999999792,9.99999999999812,9.99999999999830,9.99999999999846,9.99999999999860,9.99999999999874,9.999999999"
                        "99886,9.99999999999897,9.99999999999906,9.99999999999915,9.99999999999923,9.99999999999931,9.99999999999937,9.99999999999943,9.99999999999949,9.99999999999954,9.99999999999958,9.99999999999962,9.99999999999966,9.99999999999969,9.99999999999972,9.99999999999975,9.99999999999977,9.99999999999979,9.99999999999981,9.99999999999983,9.99999999999985,9.99999999999986,9.99999999999987,9.99999999999989,9.99999999999990,9.99999999999991,9.99999999999992,9.99999999999993,9.99999999999993,9.99999999999994,9.99999999999994,9.99999999999995,9.99999999999995,9.99999999999996,9.99999999999996,9.99999999999997,9.99999999999997,9.99999999999997,9.99999999999998,9.99999999999998,9.99999999999998,9.99999999999998,9.99999999999998,9.99999999999998,9.99999999999999,9.99999999999999,9.99999999999999,9.99999999999999,9.99999999999999,9.99999999999999,9.99999999999999,9.99999999999999,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000"
                        ",10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0"
                        "000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000,10.0000000000000", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("Simulador", "0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Simulador", "Simular", Q_NULLPTR));
        label_4->setText(QApplication::translate("Simulador", "Y", Q_NULLPTR));
        label_5->setText(QApplication::translate("Simulador", "U", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("Simulador", "1.0", Q_NULLPTR));
        label_10->setText(QApplication::translate("Simulador", "Per\303\255odo de Amostragem", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Simulador", "Entrada", Q_NULLPTR));
        label_2->setText(QApplication::translate("Simulador", "Ki", Q_NULLPTR));
        label->setText(QApplication::translate("Simulador", "Kp", Q_NULLPTR));
        label_3->setText(QApplication::translate("Simulador", "Kd", Q_NULLPTR));
        label_9->setText(QApplication::translate("Simulador", "Sensibilidade", Q_NULLPTR));
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Simulador", "M\303\251todos de Aproxima\303\247\303\243o de Modelos ", Q_NULLPTR)
         << QApplication::translate("Simulador", "    Curva de Rea\303\247\303\243o", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ZN", Q_NULLPTR)
         << QApplication::translate("Simulador", "    Smith", Q_NULLPTR)
         << QApplication::translate("Simulador", "    SK", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("Simulador", "Controladores", Q_NULLPTR));
        label_6->setText(QApplication::translate("Simulador", "Modelos", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Simulador", "Proporcional (P)", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ZN", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Servo 0 Ov", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Servo 20 OV", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Regulat\303\263rio", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CohenCoon", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IAE - Lopes", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ITAE - Lopes", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IAE - Rovira", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ITAE - Rovira", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IMC", Q_NULLPTR)
         << QApplication::translate("Simulador", "---------------------------------------------------", Q_NULLPTR)
         << QApplication::translate("Simulador", "Proporciona e Integral (PI)", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ZN", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Servo 0 Ov", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Servo 20 OV", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Regulat\303\263rio", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CohenCoon", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IAE - Lopes", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ITAE - Lopes", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IAE - Rovira", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ITAE - Rovira", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IMC", Q_NULLPTR)
         << QApplication::translate("Simulador", "---------------------------------------------------", Q_NULLPTR)
         << QApplication::translate("Simulador", "Proporciona e Integral e Derivativo (PID)", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ZN", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Servo 0 Ov", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Servo 20 OV", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CHR - Regulat\303\263rio", Q_NULLPTR)
         << QApplication::translate("Simulador", "    CohenCoon", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IAE - Lopes", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ITAE - Lopes", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IAE - Rovira", Q_NULLPTR)
         << QApplication::translate("Simulador", "    ITAE - Rovira", Q_NULLPTR)
         << QApplication::translate("Simulador", "    IMC", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("Simulador", "                                        Sintonia manual                                       ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Simulador", "Enviar Valores", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Simulador", "Gr\303\241ficos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Simulador: public Ui_Simulador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULADOR_H
