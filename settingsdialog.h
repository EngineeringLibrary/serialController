#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class settingsDialog;
}

class settingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingsDialog(QWidget *parent = 0);
    ~settingsDialog();

    bool DistanciaSensor, NivelSensor;
    int TamanhoTanque;

    int GetTamanhoTanque();
    int GetSensor();

private slots:
    void on_OkPushButton_clicked();

    void on_CancelarPushButton_clicked();

private:
    Ui::settingsDialog *ui;
};

#endif // SETTINGSDIALOG_H
