#include "pwmdialogbox.h"
#include "ui_pwmdialogbox.h"

PwmDialogBox::PwmDialogBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PwmDialogBox)
{
    ui->setupUi(this);
}

PwmDialogBox::~PwmDialogBox()
{
    delete ui;
}

void PwmDialogBox::on_OKPushButton_clicked()
{
    ppwmMax = ui->PWMMaxLineEdit->text().toDouble();
    ppwmMin = ui->PWMMinLineEdit->text().toDouble();
    ok = true;
    this->close();
}

void PwmDialogBox::on_CancelarPushButton_clicked()
{
    ok = false;
    this->close();
}

double PwmDialogBox::getPWMMax(){
    return ppwmMax;
}

double PwmDialogBox::getPWMMin(){
    return ppwmMin;
}

bool PwmDialogBox::getOk(){
    return ok;
}
