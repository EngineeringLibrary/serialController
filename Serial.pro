#-------------------------------------------------
#
# Project created by QtCreator 2017-05-19T19:20:53
#
#-------------------------------------------------

QT       += core gui
QT       += charts
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets\
                                        printsupport

TARGET = Serial
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    SistemasdeControle/src/communicationLibs/serial/comunicacao.cpp \
    pwmdialogbox.cpp \
    settingsdialog.cpp \
    SistemasdeControle/src/graphicLibs/plot/plot.cpp \
    SistemasdeControle/src/graphicLibs/callout.cpp \
    SistemasdeControle/src/communicationLibs/opc/opccomn_i.c \
    SistemasdeControle/src/communicationLibs/opc/OpcEnum_i.c \
    simulador.cpp \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.cpp \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/actionhandler.cpp \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/datasnapshot.cpp \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/firebase.cpp \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/json.cpp

HEADERS  += mainwindow.h \
    SistemasdeControle/headers/communicationLibs/serial/comunicacao.h \
    SistemasdeControle/headers/graphicLibs/plot.h \
    SistemasdeControle/src/graphicLibs/plot.hpp \
    pwmdialogbox.h \
    SistemasdeControle/headers/modelLibs/model.h \
    SistemasdeControle/headers/modelLibs/transferfunction.h \
    SistemasdeControle/src/modelLibs/model.hpp \
    SistemasdeControle/src/modelLibs/transferfunction.hpp \
    SistemasdeControle/headers/controlLibs/pid.h \
    SistemasdeControle/src/controlLibs/pid.hpp \
    settingsdialog.h \
    SistemasdeControle/headers/advancedApplication/datarecognition/classification.h \
    SistemasdeControle/headers/advancedApplication/datarecognition/movingmask.h \
    SistemasdeControle/headers/advancedControlLibs/droneControl/dronecontrol.h \
    SistemasdeControle/headers/advancedLinALg/PCA.h \
    SistemasdeControle/headers/advancedModelLibs/droneModel/dronemodel.h \
    SistemasdeControle/headers/communicationLibs/opc/opccomn.h \
    SistemasdeControle/headers/controlLibs/modelpredictivecontrol.h \
    SistemasdeControle/headers/controlLibs/pid.h.dZ2236 \
    SistemasdeControle/headers/controlLibs/pid.h.EG9960 \
    SistemasdeControle/headers/graphicLibs/plot/plot.h \
    SistemasdeControle/headers/graphicLibs/callout.h \
    SistemasdeControle/headers/ImageProcessing/grayimage.h \
    SistemasdeControle/headers/ImageProcessing/imageconversion.h \
    SistemasdeControle/headers/ImageProcessing/imagepreview.h \
    SistemasdeControle/headers/ImageProcessing/imageprocessing.h \
    SistemasdeControle/headers/ImageProcessing/rgbimage.h \
    SistemasdeControle/headers/modelLibs/activefunction.h \
    SistemasdeControle/headers/modelLibs/armax.h \
    SistemasdeControle/headers/modelLibs/arx.h \
    SistemasdeControle/headers/modelLibs/conversions.h \
    SistemasdeControle/headers/modelLibs/conversions.h.ft4388 \
    SistemasdeControle/headers/modelLibs/conversions.h.kV4388 \
    SistemasdeControle/headers/modelLibs/fir.h \
    SistemasdeControle/headers/modelLibs/integrativemodel.h \
    SistemasdeControle/headers/modelLibs/ma.h \
    SistemasdeControle/headers/modelLibs/neuron.h \
    SistemasdeControle/headers/modelLibs/neuron.hpp \
    SistemasdeControle/headers/modelLibs/nfir.h \
    SistemasdeControle/headers/modelLibs/predictionmodel.h \
    SistemasdeControle/headers/modelLibs/rna.h \
    SistemasdeControle/headers/modelLibs/rna.hpp \
    SistemasdeControle/headers/modelLibs/simfunction.h \
    SistemasdeControle/headers/modelLibs/statespace.h \
    SistemasdeControle/headers/optimizationLibs/leastsquare.h \
    SistemasdeControle/headers/optimizationLibs/optimization.h \
    SistemasdeControle/headers/optimizationLibs/pso.h \
    SistemasdeControle/headers/optimizationLibs/recursiveleastsquare.h \
    SistemasdeControle/headers/optimizationLibs/relay.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/identifiers.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/matrixrestriction.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/matrixrestriction.hpp \
    SistemasdeControle/headers/primitiveLibs/polynom.h \
    SistemasdeControle/headers/primitiveLibs/polynom.h.du4996 \
    SistemasdeControle/headers/primitiveLibs/primitives.h \
    SistemasdeControle/headers/restrictedOptimization/activeset.h \
    SistemasdeControle/headers/restrictedOptimization/activeset.hpp \
    SistemasdeControle/headers/restrictedOptimization/generalisedrestrictednewton.h \
    SistemasdeControle/headers/restrictedOptimization/linprog.h \
    SistemasdeControle/headers/restrictedOptimization/polyhedron.h \
    SistemasdeControle/headers/restrictedOptimization/polyhedron.hpp \
    SistemasdeControle/headers/restrictedOptimization/quadprog.h \
    SistemasdeControle/headers/restrictedOptimization/recursiveactiveset.h \
    SistemasdeControle/headers/restrictedOptimization/simplex.h \
    SistemasdeControle/headers/simulationLibs/sim.h \
    SistemasdeControle/headers/zeroFunctionLib/bisseccao.h \
    SistemasdeControle/headers/zeroFunctionLib/fzero.h \
    SistemasdeControle/headers/zeroFunctionLib/newton.h \
    SistemasdeControle/headers/zeroFunctionLib/secant.h \
    SistemasdeControle/headers/zeroFunctionLib/steffensen.h \
    SistemasdeControle/src/advancedApplication/datarecognition/classification.hpp \
    SistemasdeControle/src/advancedApplication/datarecognition/movingmask.hpp \
    SistemasdeControle/src/advancedControlLibs/droneControl/dronecontrol.hpp \
    SistemasdeControle/src/advancedLinALg/PCA.hpp \
    SistemasdeControle/src/advancedModelLibs/droneModel/dronemodel.hpp \
    SistemasdeControle/src/controlLibs/modelpredictivecontrol.hpp \
    SistemasdeControle/src/controlLibs/modelpredictivecontrol.hpp.Gw4512 \
    SistemasdeControle/src/controlLibs/pid.hpp.YW3988 \
    SistemasdeControle/src/ImageProcessing/grayimage.hpp \
    SistemasdeControle/src/ImageProcessing/imageconversion.hpp \
    SistemasdeControle/src/ImageProcessing/imagepreview.hpp \
    SistemasdeControle/src/ImageProcessing/imageprocessing.hpp \
    SistemasdeControle/src/ImageProcessing/rgbimage.hpp \
    SistemasdeControle/src/modelLibs/armax.hpp \
    SistemasdeControle/src/modelLibs/arx.hpp \
    SistemasdeControle/src/modelLibs/conversions.hpp \
    SistemasdeControle/src/modelLibs/fir.hpp \
    SistemasdeControle/src/modelLibs/integrativemodel.hpp \
    SistemasdeControle/src/modelLibs/ma.hpp \
    SistemasdeControle/src/modelLibs/nfir.hpp \
    SistemasdeControle/src/modelLibs/predictionmodel.hpp \
    SistemasdeControle/src/modelLibs/simfunction.hpp \
    SistemasdeControle/src/modelLibs/statespace.hpp \
    SistemasdeControle/src/modelLibs/statespace.hpp.Tj1196 \
    SistemasdeControle/src/optimizationLibs/leastsquare.hpp \
    SistemasdeControle/src/optimizationLibs/optimization.hpp \
    SistemasdeControle/src/optimizationLibs/pso.hpp \
    SistemasdeControle/src/optimizationLibs/recursiveleastsquare.hpp \
    SistemasdeControle/src/optimizationLibs/relay.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp.Ag5656 \
    SistemasdeControle/src/primitiveLibs/LinAlg/matrixrestriction.hpp \
    SistemasdeControle/src/primitiveLibs/polynom.hpp \
    SistemasdeControle/src/primitiveLibs/polynom.hpp.KI9960 \
    SistemasdeControle/src/restrictedOptimization/activeset.hpp \
    SistemasdeControle/src/restrictedOptimization/generalisedrestrictednewton.hpp \
    SistemasdeControle/src/restrictedOptimization/linprog.hpp \
    SistemasdeControle/src/restrictedOptimization/polyhedron.hpp \
    SistemasdeControle/src/restrictedOptimization/quadprog.hpp \
    SistemasdeControle/src/restrictedOptimization/recursiveactiveset.hpp \
    SistemasdeControle/src/restrictedOptimization/simplex.hpp \
    SistemasdeControle/src/simulationLibs/sim.hpp \
    SistemasdeControle/src/zeroFunctionLib/bisseccao.hpp \
    SistemasdeControle/src/zeroFunctionLib/fzero.hpp \
    SistemasdeControle/src/zeroFunctionLib/newton.hpp \
    SistemasdeControle/src/zeroFunctionLib/secant.hpp \
    SistemasdeControle/src/zeroFunctionLib/steffensen.hpp \
    simulador.h \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.h \
    SistemasdeControle/headers/graphicLibs/plot.h \
    SistemasdeControle/src/graphicLibs/plot.hpp \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/actionhandler.h \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/datasnapshot.h \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/firebase.h \
#    ../../Documents/Git/Sistema de Controle/Serial v4.0 QT/qt-firebaseapi/json.h

FORMS    += mainwindow.ui \
    pwmdialogbox.ui \
    settingsdialog.ui \
    simulador.ui

DISTFILES += \
    rad.ico \
    myapp.rc \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/GPL.txt

RC_FILE = myapp.rc
