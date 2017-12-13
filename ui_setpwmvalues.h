/********************************************************************************
** Form generated from reading UI file 'setpwmvalues.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPWMVALUES_H
#define UI_SETPWMVALUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SetPWMValues
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *pmwMin;
    QSpinBox *pwmMax;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SetPWMValues)
    {
        if (SetPWMValues->objectName().isEmpty())
            SetPWMValues->setObjectName(QStringLiteral("SetPWMValues"));
        SetPWMValues->resize(192, 178);
        pushButton = new QPushButton(SetPWMValues);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 140, 75, 23));
        pushButton_2 = new QPushButton(SetPWMValues);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 140, 75, 23));
        pmwMin = new QSpinBox(SetPWMValues);
        pmwMin->setObjectName(QStringLiteral("pmwMin"));
        pmwMin->setGeometry(QRect(110, 40, 42, 22));
        pmwMin->setMaximum(198);
        pwmMax = new QSpinBox(SetPWMValues);
        pwmMax->setObjectName(QStringLiteral("pwmMax"));
        pwmMax->setGeometry(QRect(110, 80, 42, 22));
        pwmMax->setMaximum(198);
        label = new QLabel(SetPWMValues);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 61, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(SetPWMValues);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 61, 16));
        label_2->setFont(font);

        retranslateUi(SetPWMValues);

        QMetaObject::connectSlotsByName(SetPWMValues);
    } // setupUi

    void retranslateUi(QDialog *SetPWMValues)
    {
        SetPWMValues->setWindowTitle(QApplication::translate("SetPWMValues", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SetPWMValues", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SetPWMValues", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("SetPWMValues", "PWM Min", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetPWMValues", "PWM Max", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetPWMValues: public Ui_SetPWMValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPWMVALUES_H
