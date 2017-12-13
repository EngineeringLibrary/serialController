#ifndef SIMULADOR_H
#define SIMULADOR_H

#include <QDialog>
#include "SistemasdeControle/headers/controlLibs/pid.h"
#include "SistemasdeControle/headers/ImageProcessing/grayimage.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/modelLibs/statespace.h"
#include "SistemasdeControle/headers/graphicLibs/plot.h"


namespace Ui {
class Simulador;
}

class Simulador : public QDialog
{
    Q_OBJECT

public:
    explicit Simulador(QWidget *parent = 0);
    ~Simulador();

    void closedLoopSimulation();
    void openedLoopSimulation();
    void escolhaPID(int);

    void setY(LinAlg::Matrix<double>);
    void setU(LinAlg::Matrix<double>);

    double getKp();
    double getKi();
    double getKd();

    bool enviar = false;

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_pushButton_2_clicked();

private:
    Ui::Simulador *ui;
    LinAlg::Matrix<double> U, Y;
    ModelHandler::TransferFunction<double> FOP;
    ControlHandler::PID<double> PID;
//    Plot *openLoopSimulation, *closeLoopSimulation;
    PlotHandler::plot<double> *openLoopSimulation, *closeLoopSimulation;
    double Kp, Ki, Kd, sampletime;
};

#endif // SIMULADOR_H
