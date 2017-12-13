/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAtmelISP;
    QAction *actionExit;
    QAction *actionSobre;
    QAction *actionSettings;
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *ErroLineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *SinalLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *PWMLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *TempLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *TempoLineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PortLineEdit;
    QPushButton *ConnectPushButton;
    QPushButton *DisconnectPushButton;
    QPushButton *ClearPushButton;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SendLineEdit;
    QPushButton *SendPushButton;
    QWidget *tab_3;
    QProgressBar *progressBar;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_29;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_14;
    QWidget *widget_fechada;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *kPLineEdit;
    QLineEdit *kILineEdit;
    QLineEdit *kDLineEdit;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_20;
    QLineEdit *SetPointLineEditFechad;
    QPushButton *AjustePushButtonFechad;
    QWidget *widget_aberta;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *PWMLineEditAberta;
    QPushButton *AjustepushButtonAberta;
    QWidget *widget_Sintonia;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_39;
    QLabel *label_40;
    QPushButton *SimuladorPushButton;
    QWidget *widgetNivel;
    QLabel *label_22;
    QLabel *label_23;
    QSlider *verticalSlider;
    QLabel *label_26;
    QLabel *label_25;
    QLabel *label_27;
    QProgressBar *SetPointProgressBar;
    QLabel *label_21;
    QLabel *label_24;
    QLabel *label_28;
    QWidget *tab_2;
    QWidget *widSINAL;
    QWidget *widPWM;
    QWidget *widERRO;
    QFrame *line;
    QFrame *line_2;
    QWidget *tab_4;
    QFrame *line_5;
    QWidget *widgetSimulation;
    QPushButton *EnviarParamPushButton;
    QPushButton *ReSintonizaPushButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_23;
    QVBoxLayout *verticalLayout_22;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_36;
    QComboBox *ControllerComboBox;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_37;
    QComboBox *MethodsComboBox;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_38;
    QComboBox *ModelsComboBox;
    QPushButton *SimularPushButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_33;
    QLabel *PIDLabel;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_42;
    QLabel *EquacaoLabel;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_32;
    QLineEdit *kPLineEdit_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_34;
    QLineEdit *kILineEdit_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_35;
    QLineEdit *kDLineEdit_2;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_41;
    QLabel *AtrasoLabel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(759, 709);
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
        MainWindow->setPalette(palette);
        actionAtmelISP = new QAction(MainWindow);
        actionAtmelISP->setObjectName(QStringLiteral("actionAtmelISP"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        ErroLineEdit = new QLineEdit(centralWidget);
        ErroLineEdit->setObjectName(QStringLiteral("ErroLineEdit"));

        verticalLayout_6->addWidget(ErroLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        SinalLineEdit = new QLineEdit(centralWidget);
        SinalLineEdit->setObjectName(QStringLiteral("SinalLineEdit"));

        verticalLayout_5->addWidget(SinalLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        PWMLineEdit = new QLineEdit(centralWidget);
        PWMLineEdit->setObjectName(QStringLiteral("PWMLineEdit"));

        verticalLayout_4->addWidget(PWMLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        TempLineEdit = new QLineEdit(centralWidget);
        TempLineEdit->setObjectName(QStringLiteral("TempLineEdit"));

        verticalLayout_3->addWidget(TempLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        TempoLineEdit = new QLineEdit(centralWidget);
        TempoLineEdit->setObjectName(QStringLiteral("TempoLineEdit"));

        verticalLayout_2->addWidget(TempoLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        PortLineEdit = new QLineEdit(tab);
        PortLineEdit->setObjectName(QStringLiteral("PortLineEdit"));

        horizontalLayout->addWidget(PortLineEdit);

        ConnectPushButton = new QPushButton(tab);
        ConnectPushButton->setObjectName(QStringLiteral("ConnectPushButton"));

        horizontalLayout->addWidget(ConnectPushButton);

        DisconnectPushButton = new QPushButton(tab);
        DisconnectPushButton->setObjectName(QStringLiteral("DisconnectPushButton"));

        horizontalLayout->addWidget(DisconnectPushButton);

        ClearPushButton = new QPushButton(tab);
        ClearPushButton->setObjectName(QStringLiteral("ClearPushButton"));

        horizontalLayout->addWidget(ClearPushButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SendLineEdit = new QLineEdit(tab);
        SendLineEdit->setObjectName(QStringLiteral("SendLineEdit"));

        horizontalLayout_2->addWidget(SendLineEdit);

        SendPushButton = new QPushButton(tab);
        SendPushButton->setObjectName(QStringLiteral("SendPushButton"));

        horizontalLayout_2->addWidget(SendPushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        progressBar = new QProgressBar(tab_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(60, 60, 151, 441));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 490, 31, 16));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 60, 31, 16));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 310, 31, 20));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 30, 131, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 400, 21, 20));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 230, 31, 20));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 140, 31, 20));
        line_3 = new QFrame(tab_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(220, -10, 20, 971));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tab_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(470, -10, 20, 961));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 40, 221, 41));
        verticalLayout_15 = new QVBoxLayout(layoutWidget);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_29);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_15->addWidget(comboBox);

        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(490, 90, 241, 315));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        widget_fechada = new QWidget(layoutWidget1);
        widget_fechada->setObjectName(QStringLiteral("widget_fechada"));
        gridLayout = new QGridLayout(widget_fechada);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_17 = new QLabel(widget_fechada);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_17);

        label_18 = new QLabel(widget_fechada);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_18);

        label_19 = new QLabel(widget_fechada);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_19);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        kPLineEdit = new QLineEdit(widget_fechada);
        kPLineEdit->setObjectName(QStringLiteral("kPLineEdit"));

        horizontalLayout_3->addWidget(kPLineEdit);

        kILineEdit = new QLineEdit(widget_fechada);
        kILineEdit->setObjectName(QStringLiteral("kILineEdit"));

        horizontalLayout_3->addWidget(kILineEdit);

        kDLineEdit = new QLineEdit(widget_fechada);
        kDLineEdit->setObjectName(QStringLiteral("kDLineEdit"));

        horizontalLayout_3->addWidget(kDLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_20 = new QLabel(widget_fechada);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_20);

        SetPointLineEditFechad = new QLineEdit(widget_fechada);
        SetPointLineEditFechad->setObjectName(QStringLiteral("SetPointLineEditFechad"));

        verticalLayout_8->addWidget(SetPointLineEditFechad);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(verticalLayout_9);

        AjustePushButtonFechad = new QPushButton(widget_fechada);
        AjustePushButtonFechad->setObjectName(QStringLiteral("AjustePushButtonFechad"));

        verticalLayout_10->addWidget(AjustePushButtonFechad);


        gridLayout->addLayout(verticalLayout_10, 0, 0, 1, 1);


        verticalLayout_14->addWidget(widget_fechada);

        widget_aberta = new QWidget(layoutWidget1);
        widget_aberta->setObjectName(QStringLiteral("widget_aberta"));
        gridLayout_2 = new QGridLayout(widget_aberta);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_30 = new QLabel(widget_aberta);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_30);


        verticalLayout_12->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        PWMLineEditAberta = new QLineEdit(widget_aberta);
        PWMLineEditAberta->setObjectName(QStringLiteral("PWMLineEditAberta"));

        horizontalLayout_7->addWidget(PWMLineEditAberta);


        verticalLayout_12->addLayout(horizontalLayout_7);


        verticalLayout_11->addLayout(verticalLayout_12);

        AjustepushButtonAberta = new QPushButton(widget_aberta);
        AjustepushButtonAberta->setObjectName(QStringLiteral("AjustepushButtonAberta"));

        verticalLayout_11->addWidget(AjustepushButtonAberta);


        gridLayout_2->addLayout(verticalLayout_11, 0, 0, 1, 1);


        verticalLayout_14->addWidget(widget_aberta);


        gridLayout_4->addLayout(verticalLayout_14, 0, 0, 1, 1);

        widget_Sintonia = new QWidget(layoutWidget1);
        widget_Sintonia->setObjectName(QStringLiteral("widget_Sintonia"));
        gridLayout_3 = new QGridLayout(widget_Sintonia);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_39 = new QLabel(widget_Sintonia);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_9->addWidget(label_39);

        label_40 = new QLabel(widget_Sintonia);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_9->addWidget(label_40);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        SimuladorPushButton = new QPushButton(widget_Sintonia);
        SimuladorPushButton->setObjectName(QStringLiteral("SimuladorPushButton"));

        gridLayout_3->addWidget(SimuladorPushButton, 1, 0, 1, 1);


        gridLayout_4->addWidget(widget_Sintonia, 1, 0, 1, 1);

        widgetNivel = new QWidget(tab_3);
        widgetNivel->setObjectName(QStringLiteral("widgetNivel"));
        widgetNivel->setGeometry(QRect(240, 10, 231, 521));
        label_22 = new QLabel(widgetNivel);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 500, 47, 13));
        label_23 = new QLabel(widgetNivel);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(0, 130, 31, 20));
        verticalSlider = new QSlider(widgetNivel);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(200, 50, 31, 441));
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);
        label_26 = new QLabel(widgetNivel);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 390, 21, 20));
        label_25 = new QLabel(widgetNivel);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(0, 220, 31, 20));
        label_27 = new QLabel(widgetNivel);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(0, 50, 31, 16));
        SetPointProgressBar = new QProgressBar(widgetNivel);
        SetPointProgressBar->setObjectName(QStringLiteral("SetPointProgressBar"));
        SetPointProgressBar->setGeometry(QRect(40, 50, 151, 441));
        SetPointProgressBar->setValue(0);
        SetPointProgressBar->setOrientation(Qt::Vertical);
        label_21 = new QLabel(widgetNivel);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(50, 20, 131, 20));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(widgetNivel);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(0, 300, 31, 20));
        label_28 = new QLabel(widgetNivel);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 480, 31, 16));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        widSINAL = new QWidget(tab_2);
        widSINAL->setObjectName(QStringLiteral("widSINAL"));
        widSINAL->setGeometry(QRect(10, 10, 711, 161));
        widPWM = new QWidget(tab_2);
        widPWM->setObjectName(QStringLiteral("widPWM"));
        widPWM->setGeometry(QRect(10, 390, 711, 161));
        widERRO = new QWidget(tab_2);
        widERRO->setObjectName(QStringLiteral("widERRO"));
        widERRO->setGeometry(QRect(10, 200, 711, 161));
        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 180, 751, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-10, 360, 751, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        line_5 = new QFrame(tab_4);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(440, -10, 20, 821));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        widgetSimulation = new QWidget(tab_4);
        widgetSimulation->setObjectName(QStringLiteral("widgetSimulation"));
        widgetSimulation->setGeometry(QRect(10, 10, 431, 261));
        EnviarParamPushButton = new QPushButton(tab_4);
        EnviarParamPushButton->setObjectName(QStringLiteral("EnviarParamPushButton"));
        EnviarParamPushButton->setGeometry(QRect(110, 530, 241, 23));
        ReSintonizaPushButton = new QPushButton(tab_4);
        ReSintonizaPushButton->setObjectName(QStringLiteral("ReSintonizaPushButton"));
        ReSintonizaPushButton->setGeometry(QRect(480, 280, 239, 23));
        layoutWidget2 = new QWidget(tab_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(480, 40, 241, 191));
        verticalLayout_23 = new QVBoxLayout(layoutWidget2);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_36 = new QLabel(layoutWidget2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(label_36);

        ControllerComboBox = new QComboBox(layoutWidget2);
        ControllerComboBox->setObjectName(QStringLiteral("ControllerComboBox"));

        verticalLayout_19->addWidget(ControllerComboBox);


        verticalLayout_22->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_37 = new QLabel(layoutWidget2);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(label_37);

        MethodsComboBox = new QComboBox(layoutWidget2);
        MethodsComboBox->setObjectName(QStringLiteral("MethodsComboBox"));

        verticalLayout_20->addWidget(MethodsComboBox);


        verticalLayout_22->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        label_38 = new QLabel(layoutWidget2);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setAlignment(Qt::AlignCenter);

        verticalLayout_21->addWidget(label_38);

        ModelsComboBox = new QComboBox(layoutWidget2);
        ModelsComboBox->setObjectName(QStringLiteral("ModelsComboBox"));

        verticalLayout_21->addWidget(ModelsComboBox);


        verticalLayout_22->addLayout(verticalLayout_21);


        verticalLayout_23->addLayout(verticalLayout_22);

        SimularPushButton = new QPushButton(layoutWidget2);
        SimularPushButton->setObjectName(QStringLiteral("SimularPushButton"));

        verticalLayout_23->addWidget(SimularPushButton);

        layoutWidget3 = new QWidget(tab_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 400, 451, 61));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget3);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_33);

        PIDLabel = new QLabel(layoutWidget3);
        PIDLabel->setObjectName(QStringLiteral("PIDLabel"));
        PIDLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(PIDLabel);

        layoutWidget4 = new QWidget(tab_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 280, 451, 91));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(layoutWidget4);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_42);

        EquacaoLabel = new QLabel(layoutWidget4);
        EquacaoLabel->setObjectName(QStringLiteral("EquacaoLabel"));
        EquacaoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(EquacaoLabel);

        line_6 = new QFrame(tab_4);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 390, 451, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(tab_4);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(-10, 270, 461, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(tab_4);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(-10, 450, 461, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(tab_4);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(0, 360, 451, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(tab_4);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(0, 510, 451, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        layoutWidget5 = new QWidget(tab_4);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 480, 431, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_32 = new QLabel(layoutWidget5);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_32);

        kPLineEdit_2 = new QLineEdit(layoutWidget5);
        kPLineEdit_2->setObjectName(QStringLiteral("kPLineEdit_2"));

        horizontalLayout_13->addWidget(kPLineEdit_2);


        horizontalLayout_8->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_34 = new QLabel(layoutWidget5);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_34);

        kILineEdit_2 = new QLineEdit(layoutWidget5);
        kILineEdit_2->setObjectName(QStringLiteral("kILineEdit_2"));

        horizontalLayout_14->addWidget(kILineEdit_2);


        horizontalLayout_8->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_35 = new QLabel(layoutWidget5);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_35);

        kDLineEdit_2 = new QLineEdit(layoutWidget5);
        kDLineEdit_2->setObjectName(QStringLiteral("kDLineEdit_2"));

        horizontalLayout_15->addWidget(kDLineEdit_2);


        horizontalLayout_8->addLayout(horizontalLayout_15);

        layoutWidget6 = new QWidget(tab_4);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 370, 451, 31));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(layoutWidget6);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_41);

        AtrasoLabel = new QLabel(layoutWidget6);
        AtrasoLabel->setObjectName(QStringLiteral("AtrasoLabel"));
        AtrasoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(AtrasoLabel);

        tabWidget->addTab(tab_4, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 759, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuMenu->addAction(actionAtmelISP);
        menuMenu->addAction(actionSettings);
        menuMenu->addAction(actionExit);
        menuAbout->addAction(actionSobre);

        retranslateUi(MainWindow);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), SetPointProgressBar, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Serial Controller", Q_NULLPTR));
        actionAtmelISP->setText(QApplication::translate("MainWindow", "AtmelISP", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAtmelISP->setShortcut(QApplication::translate("MainWindow", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Alt+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSobre->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSettings->setShortcut(QApplication::translate("MainWindow", "Alt+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_5->setText(QApplication::translate("MainWindow", "Erro", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "N\303\255vel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Tempo (s)", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Porta", Q_NULLPTR));
        PortLineEdit->setText(QApplication::translate("MainWindow", "COM6", Q_NULLPTR));
        ConnectPushButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        DisconnectPushButton->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        ClearPushButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        SendPushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Serial", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "0 cm", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "25 cm", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "10 cm", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "N\303\255vel Atual", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "5 cm", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "15 cm", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "20 cm", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Modo de Funcionamento", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Malha Aberta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Malha Fechada", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sintonizar", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("MainWindow", "kP", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "kI", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "kD", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "SetPoint", Q_NULLPTR));
        AjustePushButtonFechad->setText(QApplication::translate("MainWindow", "Ajustar", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        AjustepushButtonAberta->setText(QApplication::translate("MainWindow", "Ajustar", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Contador:", Q_NULLPTR));
        label_40->setText(QString());
        SimuladorPushButton->setText(QApplication::translate("MainWindow", "Simulador", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Setpoint", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "20 cm", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "5 cm", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "15 cm", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "25 cm", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "N\303\255vel Desejado", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "10 cm", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "0 cm", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Modo", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gr\303\241ficos", Q_NULLPTR));
        EnviarParamPushButton->setText(QApplication::translate("MainWindow", "Enviar Par\303\242metros", Q_NULLPTR));
        ReSintonizaPushButton->setText(QApplication::translate("MainWindow", "Resintonizar", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Controlador", Q_NULLPTR));
        ControllerComboBox->clear();
        ControllerComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "P", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PI", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PID", Q_NULLPTR)
        );
        label_37->setText(QApplication::translate("MainWindow", "M\303\251todos", Q_NULLPTR));
        MethodsComboBox->clear();
        MethodsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ZN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CHR REG", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CHR 0 OV", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CHR 20 OV", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IAE LOPES", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IAE ROVIRA", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IMC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ITAE LOPES", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ITAE ROVIRA", Q_NULLPTR)
        );
        label_38->setText(QApplication::translate("MainWindow", "Modelos", Q_NULLPTR));
        ModelsComboBox->clear();
        ModelsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sunderesen/Krishnaswany", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Grafico Ziegler-Nichols", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Grafico", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Smith", Q_NULLPTR)
        );
        SimularPushButton->setText(QApplication::translate("MainWindow", "Simular", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "PID:", Q_NULLPTR));
        PIDLabel->setText(QString());
        label_42->setText(QApplication::translate("MainWindow", "Fun\303\247\303\243o de Transfer\303\252ncia:", Q_NULLPTR));
        EquacaoLabel->setText(QString());
        label_32->setText(QApplication::translate("MainWindow", "kP", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "kI", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "kD", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "Atraso de Transporte:", Q_NULLPTR));
        AtrasoLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Simulations", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
