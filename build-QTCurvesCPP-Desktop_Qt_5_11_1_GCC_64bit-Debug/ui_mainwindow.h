/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    RenderArea *renderArea;
    QPushButton *btnAsteroid;
    QPushButton *btnCycloid;
    QPushButton *btnHuygens;
    QPushButton *btnHypo;
    QPushButton *btnLine;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinInterval;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinCount;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 385);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        renderArea->setGeometry(QRect(10, 10, 231, 201));
        btnAsteroid = new QPushButton(centralWidget);
        btnAsteroid->setObjectName(QStringLiteral("btnAsteroid"));
        btnAsteroid->setGeometry(QRect(261, 11, 80, 25));
        btnCycloid = new QPushButton(centralWidget);
        btnCycloid->setObjectName(QStringLiteral("btnCycloid"));
        btnCycloid->setGeometry(QRect(261, 42, 80, 25));
        btnHuygens = new QPushButton(centralWidget);
        btnHuygens->setObjectName(QStringLiteral("btnHuygens"));
        btnHuygens->setGeometry(QRect(261, 73, 80, 25));
        btnHypo = new QPushButton(centralWidget);
        btnHypo->setObjectName(QStringLiteral("btnHypo"));
        btnHypo->setGeometry(QRect(261, 104, 97, 25));
        btnLine = new QPushButton(centralWidget);
        btnLine->setObjectName(QStringLiteral("btnLine"));
        btnLine->setGeometry(QRect(261, 135, 80, 25));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(270, 170, 116, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(widget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(176, 220, 189, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinInterval = new QDoubleSpinBox(widget1);
        spinInterval->setObjectName(QStringLiteral("spinInterval"));
        spinInterval->setMaximum(100);
        spinInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinInterval);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(220, 290, 141, 28));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinCount = new QSpinBox(widget2);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(8);

        horizontalLayout_3->addWidget(spinCount);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAsteroid->setText(QApplication::translate("MainWindow", "Asteroid", nullptr));
        btnCycloid->setText(QApplication::translate("MainWindow", "Cycloid", nullptr));
        btnHuygens->setText(QApplication::translate("MainWindow", "Huygens", nullptr));
        btnHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid", nullptr));
        btnLine->setText(QApplication::translate("MainWindow", "Line", nullptr));
        label->setText(QApplication::translate("MainWindow", "Scale:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Interval Length", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Step Count", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
