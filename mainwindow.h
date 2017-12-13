#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTime>
#include <QtSerialPort/QSerialPort>
#include <QTextCodec>
#include <QScrollBar>
//#include "SistemasdeControle/headers/graphicLibs/plot/plot.h"
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include "SistemasdeControle/headers/modelLibs/model.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/controlLibs/pid.h"
#include <iostream>

#include <pwmdialogbox.h>
#include <settingsdialog.h>
#include <simulador.h>



using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    settingsDialog SettingModal;

    Simulador simulador;

    void readData();
    void delay();
    int modulo(int);
    void stabilize(int);
    void setPWM(string, string);
    void Enviar(int);
    void Enviar(string);


    int contador = 0, contadorErro = 0;
    int nivel;
    int pwmMin;
    int pwmMax;
    bool malha; // 0 - Malha Aberta / 1 - Malha Fechada
    bool setMax = true;
    bool isMinSetted = false;
    bool isMaxSetted = false;
    bool matrizGerada = true;

    int tamanhoTanque = SettingModal.GetTamanhoTanque();
    int valorSensor = SettingModal.GetSensor(); // 1 - Recebe distância / 2 - Recebe nível

    int Yatual, Yanterior;
    LinAlg::Matrix<double> Y, U;

    double temp;

    QString espaco = " ";
    QString aberta = "a";
    QString fechada = "f";
    QString m = "m";
    QString p = "p";
    QString i = "i";
    QString d = "d";
    QString tempstring, pwmstring;
private slots:

    void on_ConnectPushButton_clicked();

    void on_DisconnectPushButton_clicked();

    void on_ClearPushButton_clicked();

    void on_SendPushButton_clicked();

    void on_verticalSlider_sliderMoved(int position);

    void on_kPLineEdit_textChanged(const QString &arg1);

    void on_kILineEdit_textChanged(const QString &arg1);

    void on_kDLineEdit_textChanged(const QString &arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_AjustepushButtonAberta_clicked();

    void on_AjustePushButtonFechad_clicked();

    void on_SetPointLineEditFechad_textChanged(const QString &arg1);

    void on_actionExit_triggered();

    void on_SimularPushButton_clicked();

    void on_EnviarParamPushButton_clicked();

    void on_PWMLineEditAberta_textChanged(const QString &arg1);

    void on_actionAtmelISP_triggered();

    void on_actionSettings_triggered();

    void on_ReSintonizaPushButton_clicked();

    void on_SimuladorPushButton_clicked();

private:

    Ui::MainWindow *ui;
    QSerialPort *serial;
    std::string tempSerialData;
    PlotHandler::plot<double> *closeLoopSimulation, *pSinal, *pTemp, *pPwm, *pErro;
//    Plot  *closeLoopSimulation, *pSinal, *pTemp, *pPwm, *pErro;

};

#endif // MAINWINDOW_H
