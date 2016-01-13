#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "SpringForceSimu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_MenuFileLoad_triggered();    
    void on_scaleXSpinBox_valueChanged(double arg1);
    void on_scaleYSpinBox_valueChanged(double arg1);
    void on_scaleZSpinBox_valueChanged(double arg1);
    void on_scaleManual_clicked();
    void on_scaleAuto_clicked();

    void on_scaleStepLineEdit_textChanged(const QString &arg1);
    void on_manualRotateRadioButton_clicked();
    void on_autoRotateRadioButton_clicked();
    void on_actionAbout_triggered();

    void on_springForceSimulationAmplitudeEdit_textEdited(const QString &ampl);
    void on_springForceSimulationConstantEdit_textEdited(const QString &arg1);
    void on_springForceSimulationObjectMassEdit_textEdited(const QString &arg1);

    void on_springForceSimulationOn_clicked();

    void on_springForceSimulationOff_clicked();    

    void on_springForceSimulationApplyOnTranslationCb_stateChanged(int arg1);

    void on_springForceSimulationApplyOnScaleCb_stateChanged(int arg1);

    void on_springForceSimulationApplyOnTextureCb_stateChanged(int arg1);

private:
    Ui::MainWindow *uiMainWindow;
    //Ui::About      *uiAboutDlg;

    GlWindow *MyGlWindow;

    static const QString configFileName;
    QString  defaultDataDir;
    void     readDefaultDataDir();
    void     checkConfigfile();
    bool     saveConfigFile();
    void     setGlWindowScale();
    void     setManualScaletoAuto();
    void     setScaleStep();
    double   calculateStep(double val);

    void closeEvent (QCloseEvent *);    
};

#endif // MAINWINDOW_H
