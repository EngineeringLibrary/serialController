#include "settingsdialog.h"
#include "ui_settingsdialog.h"

settingsDialog::settingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsDialog)
{
    ui->setupUi(this);
    this->TamanhoTanque = ui->AlturaLineEdit->text().toInt();
    this->DistanciaSensor = ui->DistanciaRadioButton->isChecked();
    this->NivelSensor = ui->NivelRadioButton->isChecked();
}

settingsDialog::~settingsDialog()
{
    delete ui;
}

void settingsDialog::on_OkPushButton_clicked()
{
    this->TamanhoTanque = ui->AlturaLineEdit->text().toInt();
    this->DistanciaSensor = ui->DistanciaRadioButton->isChecked();
    this->NivelSensor = ui->NivelRadioButton->isChecked();
    this->close();
}

void settingsDialog::on_CancelarPushButton_clicked()
{
    this->close();
}

int settingsDialog::GetTamanhoTanque(){
    return this->TamanhoTanque;
}

int settingsDialog::GetSensor(){

    if (ui->DistanciaRadioButton->isChecked()){
        return 1;
    } else if (ui->NivelRadioButton->isChecked()){
        return 2;
    }
}
