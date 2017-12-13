#ifndef PWMDIALOGBOX_H
#define PWMDIALOGBOX_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class PwmDialogBox;
}

class PwmDialogBox : public QDialog
{
    Q_OBJECT

public:
    explicit PwmDialogBox(QWidget *parent = 0);
    ~PwmDialogBox();

    bool ok = false;
    double ppwmMin, ppwmMax;
    double getPWMMax();
    double getPWMMin();

    bool getOk();
private slots:
    void on_OKPushButton_clicked();

    void on_CancelarPushButton_clicked();

private:
    Ui::PwmDialogBox *ui;
};

#endif // PWMDIALOGBOX_H
