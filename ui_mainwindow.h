/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *MenuFileLoad;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label_2;
    QDoubleSpinBox *scaleYSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *scaleZSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *scaleXSpinBox;
    QRadioButton *scaleManual;
    QRadioButton *scaleAuto;
    QLineEdit *autoScaleEdit;
    QLineEdit *scaleStepLineEdit;
    QLabel *label_5;
    QFrame *scaleFrame;
    QLabel *scaleFrameLabel;
    QRadioButton *autoRotateRadioButton;
    QFrame *rotateFrame;
    QLabel *rotateFrameLabel;
    QRadioButton *manualRotateRadioButton;
    QGroupBox *springForceSimulationGroupBox;
    QRadioButton *springForceSimulationOff;
    QRadioButton *springForceSimulationOn;
    QLineEdit *springForceSimulationAmplitudeEdit;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *springForceSimulationConstantEdit;
    QLineEdit *springForceSimulationObjectMassEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QCheckBox *springForceSimulationApplyOnTranslationCb;
    QCheckBox *springForceSimulationApplyOnScaleCb;
    QCheckBox *springForceSimulationApplyOnTextureCb;
    QLineEdit *lineEdit;
    QPushButton *springForceSimulationLoadTextureBtn;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QButtonGroup *scaleButtonGroup;
    QButtonGroup *rotateButtonGroup;
    QButtonGroup *springForceActiveGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 435);
        MenuFileLoad = new QAction(MainWindow);
        MenuFileLoad->setObjectName(QStringLiteral("MenuFileLoad"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 21, 16));
        label_2->setAlignment(Qt::AlignCenter);
        scaleYSpinBox = new QDoubleSpinBox(centralwidget);
        scaleYSpinBox->setObjectName(QStringLiteral("scaleYSpinBox"));
        scaleYSpinBox->setEnabled(false);
        scaleYSpinBox->setGeometry(QRect(130, 140, 62, 22));
        scaleYSpinBox->setDecimals(5);
        scaleYSpinBox->setMinimum(1e-05);
        scaleYSpinBox->setMaximum(1e+06);
        scaleYSpinBox->setSingleStep(1e-05);
        scaleYSpinBox->setValue(1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 120, 21, 16));
        label_3->setAlignment(Qt::AlignCenter);
        scaleZSpinBox = new QDoubleSpinBox(centralwidget);
        scaleZSpinBox->setObjectName(QStringLiteral("scaleZSpinBox"));
        scaleZSpinBox->setEnabled(false);
        scaleZSpinBox->setGeometry(QRect(210, 140, 62, 22));
        scaleZSpinBox->setDecimals(5);
        scaleZSpinBox->setMinimum(1e-05);
        scaleZSpinBox->setMaximum(1e+06);
        scaleZSpinBox->setSingleStep(0.1);
        scaleZSpinBox->setValue(1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 120, 21, 16));
        label_4->setAlignment(Qt::AlignCenter);
        scaleXSpinBox = new QDoubleSpinBox(centralwidget);
        scaleXSpinBox->setObjectName(QStringLiteral("scaleXSpinBox"));
        scaleXSpinBox->setEnabled(false);
        scaleXSpinBox->setGeometry(QRect(50, 140, 62, 22));
        scaleXSpinBox->setDecimals(5);
        scaleXSpinBox->setMinimum(1e-05);
        scaleXSpinBox->setMaximum(1e+06);
        scaleXSpinBox->setSingleStep(1e-05);
        scaleXSpinBox->setValue(1);
        scaleManual = new QRadioButton(centralwidget);
        scaleButtonGroup = new QButtonGroup(MainWindow);
        scaleButtonGroup->setObjectName(QStringLiteral("scaleButtonGroup"));
        scaleButtonGroup->addButton(scaleManual);
        scaleManual->setObjectName(QStringLiteral("scaleManual"));
        scaleManual->setGeometry(QRect(30, 140, 16, 21));
        scaleAuto = new QRadioButton(centralwidget);
        scaleButtonGroup->addButton(scaleAuto);
        scaleAuto->setObjectName(QStringLiteral("scaleAuto"));
        scaleAuto->setGeometry(QRect(30, 170, 82, 18));
        scaleAuto->setChecked(true);
        autoScaleEdit = new QLineEdit(centralwidget);
        autoScaleEdit->setObjectName(QStringLiteral("autoScaleEdit"));
        autoScaleEdit->setEnabled(false);
        autoScaleEdit->setGeometry(QRect(90, 170, 181, 20));
        autoScaleEdit->setMaxLength(7);
        scaleStepLineEdit = new QLineEdit(centralwidget);
        scaleStepLineEdit->setObjectName(QStringLiteral("scaleStepLineEdit"));
        scaleStepLineEdit->setGeometry(QRect(290, 140, 61, 20));
        scaleStepLineEdit->setMaxLength(10);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 120, 51, 16));
        scaleFrame = new QFrame(centralwidget);
        scaleFrame->setObjectName(QStringLiteral("scaleFrame"));
        scaleFrame->setGeometry(QRect(10, 110, 361, 91));
        scaleFrame->setFrameShape(QFrame::StyledPanel);
        scaleFrame->setFrameShadow(QFrame::Raised);
        scaleFrameLabel = new QLabel(scaleFrame);
        scaleFrameLabel->setObjectName(QStringLiteral("scaleFrameLabel"));
        scaleFrameLabel->setGeometry(QRect(10, 0, 31, 21));
        autoRotateRadioButton = new QRadioButton(centralwidget);
        rotateButtonGroup = new QButtonGroup(MainWindow);
        rotateButtonGroup->setObjectName(QStringLiteral("rotateButtonGroup"));
        rotateButtonGroup->addButton(autoRotateRadioButton);
        autoRotateRadioButton->setObjectName(QStringLiteral("autoRotateRadioButton"));
        autoRotateRadioButton->setGeometry(QRect(40, 60, 82, 18));
        autoRotateRadioButton->setChecked(false);
        rotateFrame = new QFrame(centralwidget);
        rotateFrame->setObjectName(QStringLiteral("rotateFrame"));
        rotateFrame->setGeometry(QRect(10, 20, 120, 71));
        rotateFrame->setFrameShape(QFrame::StyledPanel);
        rotateFrame->setFrameShadow(QFrame::Raised);
        rotateFrameLabel = new QLabel(rotateFrame);
        rotateFrameLabel->setObjectName(QStringLiteral("rotateFrameLabel"));
        rotateFrameLabel->setGeometry(QRect(10, 0, 46, 13));
        manualRotateRadioButton = new QRadioButton(rotateFrame);
        rotateButtonGroup->addButton(manualRotateRadioButton);
        manualRotateRadioButton->setObjectName(QStringLiteral("manualRotateRadioButton"));
        manualRotateRadioButton->setGeometry(QRect(30, 20, 82, 18));
        manualRotateRadioButton->setChecked(true);
        springForceSimulationGroupBox = new QGroupBox(centralwidget);
        springForceSimulationGroupBox->setObjectName(QStringLiteral("springForceSimulationGroupBox"));
        springForceSimulationGroupBox->setGeometry(QRect(10, 220, 601, 161));
        springForceSimulationOff = new QRadioButton(springForceSimulationGroupBox);
        springForceActiveGroup = new QButtonGroup(MainWindow);
        springForceActiveGroup->setObjectName(QStringLiteral("springForceActiveGroup"));
        springForceActiveGroup->addButton(springForceSimulationOff);
        springForceSimulationOff->setObjectName(QStringLiteral("springForceSimulationOff"));
        springForceSimulationOff->setGeometry(QRect(10, 20, 51, 20));
        springForceSimulationOff->setChecked(true);
        springForceSimulationOn = new QRadioButton(springForceSimulationGroupBox);
        springForceActiveGroup->addButton(springForceSimulationOn);
        springForceSimulationOn->setObjectName(QStringLiteral("springForceSimulationOn"));
        springForceSimulationOn->setGeometry(QRect(60, 20, 51, 20));
        springForceSimulationOn->setChecked(false);
        springForceSimulationAmplitudeEdit = new QLineEdit(springForceSimulationGroupBox);
        springForceSimulationAmplitudeEdit->setObjectName(QStringLiteral("springForceSimulationAmplitudeEdit"));
        springForceSimulationAmplitudeEdit->setGeometry(QRect(10, 130, 81, 22));
        springForceSimulationAmplitudeEdit->setMaxLength(7);
        label = new QLabel(springForceSimulationGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 110, 81, 16));
        label_6 = new QLabel(springForceSimulationGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 110, 111, 16));
        springForceSimulationConstantEdit = new QLineEdit(springForceSimulationGroupBox);
        springForceSimulationConstantEdit->setObjectName(QStringLiteral("springForceSimulationConstantEdit"));
        springForceSimulationConstantEdit->setGeometry(QRect(110, 130, 113, 22));
        springForceSimulationConstantEdit->setMaxLength(10);
        springForceSimulationObjectMassEdit = new QLineEdit(springForceSimulationGroupBox);
        springForceSimulationObjectMassEdit->setObjectName(QStringLiteral("springForceSimulationObjectMassEdit"));
        springForceSimulationObjectMassEdit->setGeometry(QRect(240, 130, 113, 22));
        label_7 = new QLabel(springForceSimulationGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 110, 101, 16));
        label_8 = new QLabel(springForceSimulationGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 20, 261, 21));
        label_9 = new QLabel(springForceSimulationGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 60, 61, 16));
        springForceSimulationApplyOnTranslationCb = new QCheckBox(springForceSimulationGroupBox);
        springForceSimulationApplyOnTranslationCb->setObjectName(QStringLiteral("springForceSimulationApplyOnTranslationCb"));
        springForceSimulationApplyOnTranslationCb->setGeometry(QRect(10, 80, 91, 20));
        springForceSimulationApplyOnTranslationCb->setChecked(true);
        springForceSimulationApplyOnScaleCb = new QCheckBox(springForceSimulationGroupBox);
        springForceSimulationApplyOnScaleCb->setObjectName(QStringLiteral("springForceSimulationApplyOnScaleCb"));
        springForceSimulationApplyOnScaleCb->setGeometry(QRect(110, 80, 61, 20));
        springForceSimulationApplyOnTextureCb = new QCheckBox(springForceSimulationGroupBox);
        springForceSimulationApplyOnTextureCb->setObjectName(QStringLiteral("springForceSimulationApplyOnTextureCb"));
        springForceSimulationApplyOnTextureCb->setGeometry(QRect(180, 80, 111, 20));
        lineEdit = new QLineEdit(springForceSimulationGroupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(310, 80, 201, 22));
        lineEdit->setReadOnly(true);
        springForceSimulationLoadTextureBtn = new QPushButton(springForceSimulationGroupBox);
        springForceSimulationLoadTextureBtn->setObjectName(QStringLiteral("springForceSimulationLoadTextureBtn"));
        springForceSimulationLoadTextureBtn->setGeometry(QRect(310, 50, 111, 28));
        MainWindow->setCentralWidget(centralwidget);
        rotateFrame->raise();
        scaleFrame->raise();
        label_2->raise();
        scaleYSpinBox->raise();
        label_3->raise();
        scaleZSpinBox->raise();
        label_4->raise();
        scaleXSpinBox->raise();
        scaleManual->raise();
        scaleAuto->raise();
        autoScaleEdit->raise();
        scaleStepLineEdit->raise();
        label_5->raise();
        autoRotateRadioButton->raise();
        springForceSimulationGroupBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(MenuFileLoad);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        MenuFileLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        label_2->setText(QApplication::translate("MainWindow", "X", 0));
        label_3->setText(QApplication::translate("MainWindow", "Y", 0));
        label_4->setText(QApplication::translate("MainWindow", "Z", 0));
        scaleManual->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        scaleAuto->setText(QApplication::translate("MainWindow", "Auto", 0));
        scaleStepLineEdit->setText(QApplication::translate("MainWindow", "0,1", 0));
        label_5->setText(QApplication::translate("MainWindow", "SpinStep", 0));
        scaleFrameLabel->setText(QApplication::translate("MainWindow", "Scale", 0));
        autoRotateRadioButton->setText(QApplication::translate("MainWindow", "Auto", 0));
        rotateFrameLabel->setText(QApplication::translate("MainWindow", "Rotate", 0));
        manualRotateRadioButton->setText(QApplication::translate("MainWindow", "Manual", 0));
        springForceSimulationGroupBox->setTitle(QApplication::translate("MainWindow", "Spring force simulation", 0));
        springForceSimulationOff->setText(QApplication::translate("MainWindow", "Off", 0));
        springForceSimulationOn->setText(QApplication::translate("MainWindow", "On", 0));
        springForceSimulationAmplitudeEdit->setText(QApplication::translate("MainWindow", "1,0", 0));
        label->setText(QApplication::translate("MainWindow", "Amplitude (A)", 0));
        label_6->setText(QApplication::translate("MainWindow", "Spring constant (k)", 0));
        springForceSimulationConstantEdit->setText(QApplication::translate("MainWindow", "81,75", 0));
        springForceSimulationObjectMassEdit->setText(QApplication::translate("MainWindow", "100", 0));
        label_7->setText(QApplication::translate("MainWindow", "Object mass (m)", 0));
        label_8->setText(QApplication::translate("MainWindow", "Base formula: x = A cos (w t); w=sqrt(k/m)", 0));
        label_9->setText(QApplication::translate("MainWindow", "Apply on:", 0));
        springForceSimulationApplyOnTranslationCb->setText(QApplication::translate("MainWindow", "Translation", 0));
        springForceSimulationApplyOnScaleCb->setText(QApplication::translate("MainWindow", "Scale", 0));
        springForceSimulationApplyOnTextureCb->setText(QApplication::translate("MainWindow", "Texture (scale)", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "none", 0));
        springForceSimulationLoadTextureBtn->setText(QApplication::translate("MainWindow", "Load texture", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
