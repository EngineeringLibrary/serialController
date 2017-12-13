#include "simulador.h"
#include "ui_simulador.h"

Simulador::Simulador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Simulador)
{
    ui->setupUi(this);


}

Simulador::~Simulador()
{
    delete ui;
}

void Simulador::openedLoopSimulation()
{
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();
    sampletime = ui->lineEdit_3->text().toDouble();
    FOP(1,1).setNum(FOP(1,1).getNum()/FOP(1,1).getDen()(1,1));
    FOP(1,1).setDen(FOP(1,1).getDen()/FOP(1,1).getDen()(1,1));

    LinAlg::Matrix<double> Ytemp = ModelHandler::c2d(FOP,sampletime).sim(U-U(1,1)); // simula os dados em malha aberta
    Ytemp = (LinAlg::Zeros<double>(1,unsigned(round(FOP.getTransportDelay()/sampletime)))|Ytemp)+Y(1,1); // insere efeito do atraso de transporte

    // Comparar com o Y real;
    Y = Y||Ytemp(1,from(1)-->Y.getNumberOfColumns()); // cria um vetor que será plotado com 2 linhas de cores diferentes no gráfico
    LinAlg::Matrix<double> Utemp = LinAlg::LineVector<double>(0,U.getNumberOfColumns()-1,1)*sampletime||LinAlg::LineVector<double>(0,U.getNumberOfColumns()-1,1)*sampletime; // cria o vetor de tempo para mostrar no gráfico

    openLoopSimulation = new PlotHandler::plot<double>(Utemp,Y,ui->widget);
    openLoopSimulation->hide();    openLoopSimulation->show();
//    openLoopSimulation->setTitle("Comparação entre dados reais e simulados em malha aberta");
//    openLoopSimulation->setxLabel("Tempo em segundos");
//    openLoopSimulation->setyLabel("Nível em Centímetros");
}

void Simulador::closedLoopSimulation()
{
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();
    sampletime = ui->lineEdit_3->text().toDouble();

    LinAlg::Matrix<double> Umf = LinAlg::Zeros<double>(1,20*U.getNumberOfColumns()+unsigned(round(FOP.getTransportDelay()/sampletime))); // inicializa as matrizes para simulação em malha fechada
    LinAlg::Matrix<double> Ymf = LinAlg::Zeros<double>(1,20*U.getNumberOfColumns()+unsigned(round(FOP.getTransportDelay()/sampletime)));

    unsigned tam =  unsigned(round(FOP.getTransportDelay()/sampletime))- 1;
    FOP.setIO(0.0,0.0); FOP.setIO("0.0","0.0");
    double tempY = 0;double tempU = 0;
    for(unsigned i = 1; i <= 20*U.getNumberOfColumns(); ++i)
    {
        tempU = PID.OutputControl(1.0,tempY);
        Umf(1, tam+i) = tempU; //simula o cálculo do sinal de controle com atraso de transporte
        tempY = FOP.sim(Umf(1,i));
        Ymf(1,i) = tempY;// simula o sistema em malha fechada
    }

    LinAlg::Matrix<double> Utemp = LinAlg::LineVector<double>(0,20*U.getNumberOfColumns()-1,1)*sampletime;

//    std::cout << "Utemp: " << Utemp << std::endl;
//    std::cout << "Ymf: " << Ymf << std::endl;

    closeLoopSimulation = new PlotHandler::plot<double>(Utemp,Ymf,ui->widget_2);
    ui->widget_2->hide();ui->widget_2->show();

    //    closeLoopSimulation = new PlotHandler::plot<double>(Utemp,Y,ui->widget_2);

//    closeLoopSimulation->hide();    closeLoopSimulation->show();
//    closeLoopSimulation->setTitle("Simulação do sistema em malha fechada");
//    closeLoopSimulation->setxLabel("Tempo em segundos");
//    closeLoopSimulation->setyLabel("Nível em Centímetros");
}

void Simulador::escolhaPID(int valor)
{

    switch (valor) {
    case 1:
        PID = ControlHandler::tunningZieglerNichols(FOP, "P");
        break;
    case 2:
        PID =  ControlHandler::tunningCHRServo0OV(FOP, "P");
        break;
    case 3:
        PID = ControlHandler::tunningCHRServo20OV(FOP, "P");
        break;
    case 4:
        PID = ControlHandler::tunningCHRRegulatorio(FOP, "P");
        break;
    case 5:
        PID = ControlHandler::tunningCohenCoon(FOP, "P");
        break;
    case 6:
        PID =  ControlHandler::tunningIAELopes(FOP, "P");
        break;
    case 7:
        PID = ControlHandler::tunningITAELopes(FOP, "P");
        break;
    case 8:
        PID = ControlHandler::tunningIAERovira(FOP, "P");
        break;
    case 9:
        PID = ControlHandler::tunningITAERovira(FOP, "P");
        break;
    case 10:
        PID = ControlHandler::tunningIMC(FOP, "P",ui->horizontalSlider_4->value()/1000.0);
        break;
    case 13:
        PID = ControlHandler::tunningZieglerNichols(FOP, "PI");
        break;
    case 14:
        PID =  ControlHandler::tunningCHRServo0OV(FOP, "PI");
        break;
    case 15:
        PID = ControlHandler::tunningCHRServo20OV(FOP, "PI");
        break;
    case 16:
        PID = ControlHandler::tunningCHRRegulatorio(FOP, "PI");
        break;
    case 17:
        PID = ControlHandler::tunningCohenCoon(FOP, "PI");
        break;
    case 18:
        PID =  ControlHandler::tunningIAELopes(FOP, "PI");
        break;
    case 19:
        PID = ControlHandler::tunningITAELopes(FOP, "PI");
        break;
    case 20:
        PID = ControlHandler::tunningIAERovira(FOP, "PI");
        break;
    case 21:
        PID = ControlHandler::tunningITAERovira(FOP, "PI");
        break;
    case 22:
        PID = ControlHandler::tunningIMC(FOP, "PI",ui->horizontalSlider_4->value()/1000.0);
        break;
    case 25:
        PID = ControlHandler::tunningZieglerNichols(FOP, "PID");
        break;
    case 26:
        PID =  ControlHandler::tunningCHRServo0OV(FOP, "PID");
        break;
    case 27:
        PID = ControlHandler::tunningCHRServo20OV(FOP, "PID");
        break;
    case 28:
        PID = ControlHandler::tunningCHRRegulatorio(FOP, "PID");
        break;
    case 29:
        PID = ControlHandler::tunningCohenCoon(FOP, "PID");
        break;
    case 30:
        PID =  ControlHandler::tunningIAELopes(FOP, "PID");
        break;
    case 31:
        PID = ControlHandler::tunningITAELopes(FOP, "PID");
        break;
    case 32:
        PID = ControlHandler::tunningIAERovira(FOP, "PID");
        break;
    case 33:
        PID = ControlHandler::tunningITAERovira(FOP, "PID");
        break;
    case 34:
        PID = ControlHandler::tunningIMC(FOP, "PID",ui->horizontalSlider_4->value()/1000.0);
        break;
    default:
        break;
    }
}

void Simulador::on_pushButton_clicked()
{
    // essa parte deve ser trocada pelos dados obtidos no teste de sintonia

    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();

    // esse é o período de amostragem (escolher conforme tempo de aquisição dos dados)
    sampletime = ui->lineEdit_3->text().toDouble();
    // Estimação da função de transferência (Testadas adequadamente, mas pode ter bugs)
    FOP = ModelHandler::FOPDTSundaresanKrishnaswamy(Y,U,sampletime);

    //sintonia dos parâmetros do controlador PID (precisam validar se as tabelas estão corretas)
    PID = ControlHandler::tunningIMC(FOP,"PI",4.7);

    openedLoopSimulation();
    //   malha fechada
    closedLoopSimulation();

    std::string str; str << FOP; str += "\nAtraso de Transporte: "; // converte função de transferência para string
    str += QString::number(FOP.getTransportDelay()).toStdString() + "\n"; // converte função de transferência para string
    ui->textEdit->setText(str.c_str()); // mostra ft na tela;
    str.clear(); str << PID; str += "\n"; // Converte função do PID em string
    ui->textEdit->append(str.c_str());
}

void Simulador::on_comboBox_currentIndexChanged(int index)
{
//    if(FOP.getTransportDelay() != 0)
//    {
        escolhaPID(index);
        closedLoopSimulation();
        LinAlg::Matrix<double> par = PID.getParams();
        ui->horizontalSlider->setValue(par(1,1)*1000.0);
        ui->label_11->setText(QString::number(par(1,1)));
        ui->horizontalSlider_2->setValue(par(1,2)*1000.0);
        ui->label_12->setText(QString::number(par(1,1)));
        ui->horizontalSlider_3->setValue(par(1,3)*1000.0);
        ui->label_13->setText(QString::number(par(1,1)));
        std::string str; str << PID; str += "\n"; // Converte função do PID em string
        ui->textEdit->setText(str.c_str());

        Kp = par(1,1);
        Ki = par(1,2);
        Kd = par(1,3);
//    }

}

void Simulador::on_comboBox_2_currentIndexChanged(int index)
{
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();
    sampletime = ui->lineEdit_3->text().toDouble();

    switch (index) {
    case 1:
        FOP =  ModelHandler::FOPDTCurvaDeReacao(Y, U, sampletime);
        break;
    case 2:
        FOP = ModelHandler::FOPDTZieglerNichols(Y, U, sampletime);
        break;
    case 3:
        FOP = ModelHandler::FOPDTSmith(Y, U, sampletime);
        break;
    case 4:
        FOP = ModelHandler::FOPDTSundaresanKrishnaswamy(Y, U, sampletime);
        break;
    default:
        break;
    }

    openedLoopSimulation();
    std::string str; str << FOP; str += "\nAtraso de Transporte: "; // converte função de transferência para string
    str += QString::number(FOP.getTransportDelay()).toStdString() + "\n"; // converte função de transferência para string
    ui->textEdit->setText(str.c_str()); // mostra ft na tela;
}

void Simulador::on_horizontalSlider_valueChanged(int value)
{
    ui->label_11->setText(QString::number(value/1000.0));
    Kp = value/1000.0;
    Ki = ui->horizontalSlider_2->value()/1000.0;
    Kd = ui->horizontalSlider_3->value()/1000.0;
    PID.setParams(Kp,Ki,Kd);
    closedLoopSimulation();
}

void Simulador::on_horizontalSlider_2_valueChanged(int value)
{
    ui->label_12->setText(QString::number(value/1000.0));
    Kp = ui->horizontalSlider->value()/1000.0;
    Ki = value/1000.0;
    Kd = ui->horizontalSlider_3->value()/1000.0;
    PID.setParams(Kp,Ki,Kd);
    closedLoopSimulation();
}

void Simulador::on_horizontalSlider_3_valueChanged(int value)
{
    ui->label_13->setText(QString::number(value/1000.0));
    Kp = ui->horizontalSlider->value()/1000.0;
    Ki = ui->horizontalSlider_2->value()/1000.0;
    Kd = value/1000.0;
    PID.setParams(Kp,Ki,Kd);
    closedLoopSimulation();
}

void Simulador::on_horizontalSlider_4_valueChanged(int value)
{
    ui->label_14->setText(QString::number(value/1000.0));
    escolhaPID(ui->comboBox->currentIndex());
    LinAlg::Matrix<double> par = PID.getParams();
    ui->horizontalSlider->setValue(par(1,1)*1000.0);
    ui->horizontalSlider_2->setValue(par(1,2)*1000.0);
    ui->horizontalSlider_3->setValue(par(1,3)*1000.0);
    closedLoopSimulation();
}

void Simulador::setY(LinAlg::Matrix<double> Ysetted){
    std::string str; str <<= Ysetted;
    ui->lineEdit->setText(QString::fromStdString(str));

}

void Simulador::setU(LinAlg::Matrix<double> Usetted){

    std::string str; str <<= Usetted;
    ui->lineEdit_2->setText(QString::fromStdString(str));

}

double Simulador::getKp(){

    std::cout<<"kp: " <<Kp <<std::endl;
    return Kp;
}

double Simulador::getKi(){
    std::cout<<"ki: " <<Ki <<std::endl;
    return Ki;

}

double Simulador::getKd(){

    std::cout<<"kd: " <<Kd <<std::endl;
    return Kd;
}

void Simulador::on_pushButton_2_clicked()
{
    enviar = true;
}
