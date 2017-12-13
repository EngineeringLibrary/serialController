/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_settingsDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QRadioButton *DistanciaRadioButton;
    QRadioButton *NivelRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *AlturaLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *OkPushButton;
    QPushButton *CancelarPushButton;

    void setupUi(QDialog *settingsDialog)
    {
        if (settingsDialog->objectName().isEmpty())
            settingsDialog->setObjectName(QStringLiteral("settingsDialog"));
        settingsDialog->resize(249, 140);
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
        settingsDialog->setPalette(palette);
        gridLayout = new QGridLayout(settingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(settingsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DistanciaRadioButton = new QRadioButton(settingsDialog);
        DistanciaRadioButton->setObjectName(QStringLiteral("DistanciaRadioButton"));
        DistanciaRadioButton->setChecked(false);

        verticalLayout->addWidget(DistanciaRadioButton);

        NivelRadioButton = new QRadioButton(settingsDialog);
        NivelRadioButton->setObjectName(QStringLiteral("NivelRadioButton"));
        NivelRadioButton->setCheckable(true);
        NivelRadioButton->setChecked(true);

        verticalLayout->addWidget(NivelRadioButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(settingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        AlturaLineEdit = new QLineEdit(settingsDialog);
        AlturaLineEdit->setObjectName(QStringLiteral("AlturaLineEdit"));

        horizontalLayout_2->addWidget(AlturaLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        OkPushButton = new QPushButton(settingsDialog);
        OkPushButton->setObjectName(QStringLiteral("OkPushButton"));

        horizontalLayout_3->addWidget(OkPushButton);

        CancelarPushButton = new QPushButton(settingsDialog);
        CancelarPushButton->setObjectName(QStringLiteral("CancelarPushButton"));

        horizontalLayout_3->addWidget(CancelarPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(settingsDialog);

        QMetaObject::connectSlotsByName(settingsDialog);
    } // setupUi

    void retranslateUi(QDialog *settingsDialog)
    {
        settingsDialog->setWindowTitle(QApplication::translate("settingsDialog", "Settings", Q_NULLPTR));
        label->setText(QApplication::translate("settingsDialog", "Valor do Sensor:", Q_NULLPTR));
        DistanciaRadioButton->setText(QApplication::translate("settingsDialog", "Dist\303\242ncia", Q_NULLPTR));
        NivelRadioButton->setText(QApplication::translate("settingsDialog", "N\303\255vel", Q_NULLPTR));
        label_2->setText(QApplication::translate("settingsDialog", "Altura do Tanque (cm):", Q_NULLPTR));
        AlturaLineEdit->setText(QApplication::translate("settingsDialog", "25", Q_NULLPTR));
        OkPushButton->setText(QApplication::translate("settingsDialog", "OK", Q_NULLPTR));
        CancelarPushButton->setText(QApplication::translate("settingsDialog", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingsDialog: public Ui_settingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
