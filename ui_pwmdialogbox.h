/********************************************************************************
** Form generated from reading UI file 'pwmdialogbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWMDIALOGBOX_H
#define UI_PWMDIALOGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PwmDialogBox
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *PWMMinLineEdit;
    QLabel *label_2;
    QLineEdit *PWMMaxLineEdit;
    QPushButton *OKPushButton;
    QPushButton *CancelarPushButton;

    void setupUi(QDialog *PwmDialogBox)
    {
        if (PwmDialogBox->objectName().isEmpty())
            PwmDialogBox->setObjectName(QStringLiteral("PwmDialogBox"));
        PwmDialogBox->resize(199, 177);
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
        PwmDialogBox->setPalette(palette);
        gridLayout = new QGridLayout(PwmDialogBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(PwmDialogBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        PWMMinLineEdit = new QLineEdit(PwmDialogBox);
        PWMMinLineEdit->setObjectName(QStringLiteral("PWMMinLineEdit"));

        verticalLayout->addWidget(PWMMinLineEdit);

        label_2 = new QLabel(PwmDialogBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        PWMMaxLineEdit = new QLineEdit(PwmDialogBox);
        PWMMaxLineEdit->setObjectName(QStringLiteral("PWMMaxLineEdit"));

        verticalLayout->addWidget(PWMMaxLineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        OKPushButton = new QPushButton(PwmDialogBox);
        OKPushButton->setObjectName(QStringLiteral("OKPushButton"));

        verticalLayout_2->addWidget(OKPushButton);

        CancelarPushButton = new QPushButton(PwmDialogBox);
        CancelarPushButton->setObjectName(QStringLiteral("CancelarPushButton"));

        verticalLayout_2->addWidget(CancelarPushButton);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(PwmDialogBox);

        QMetaObject::connectSlotsByName(PwmDialogBox);
    } // setupUi

    void retranslateUi(QDialog *PwmDialogBox)
    {
        PwmDialogBox->setWindowTitle(QApplication::translate("PwmDialogBox", "PWM Settings", Q_NULLPTR));
        label->setText(QApplication::translate("PwmDialogBox", "PWM Min\303\255mo", Q_NULLPTR));
        label_2->setText(QApplication::translate("PwmDialogBox", "PWM M\303\241ximo", Q_NULLPTR));
        OKPushButton->setText(QApplication::translate("PwmDialogBox", "OK", Q_NULLPTR));
        CancelarPushButton->setText(QApplication::translate("PwmDialogBox", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PwmDialogBox: public Ui_PwmDialogBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWMDIALOGBOX_H
