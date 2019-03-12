/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *Clear;
    QPushButton *PlusMinus;
    QPushButton *Percentage;
    QPushButton *Division;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine;
    QPushButton *Multiply;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Minus;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Plus;
    QPushButton *Dot;
    QPushButton *Equal;
    QPushButton *Zero;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(240, 370);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 241, 71));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(0, 70, 61, 61));
        Clear->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        PlusMinus = new QPushButton(centralWidget);
        PlusMinus->setObjectName(QStringLiteral("PlusMinus"));
        PlusMinus->setGeometry(QRect(60, 70, 61, 61));
        PlusMinus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Percentage = new QPushButton(centralWidget);
        Percentage->setObjectName(QStringLiteral("Percentage"));
        Percentage->setGeometry(QRect(120, 70, 61, 61));
        Percentage->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Division = new QPushButton(centralWidget);
        Division->setObjectName(QStringLiteral("Division"));
        Division->setGeometry(QRect(180, 70, 61, 61));
        Division->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Seven = new QPushButton(centralWidget);
        Seven->setObjectName(QStringLiteral("Seven"));
        Seven->setGeometry(QRect(0, 130, 61, 61));
        Seven->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Eight = new QPushButton(centralWidget);
        Eight->setObjectName(QStringLiteral("Eight"));
        Eight->setGeometry(QRect(60, 130, 61, 61));
        Eight->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Nine = new QPushButton(centralWidget);
        Nine->setObjectName(QStringLiteral("Nine"));
        Nine->setGeometry(QRect(120, 130, 61, 61));
        Nine->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        Multiply->setGeometry(QRect(180, 130, 61, 61));
        Multiply->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Four = new QPushButton(centralWidget);
        Four->setObjectName(QStringLiteral("Four"));
        Four->setGeometry(QRect(0, 190, 61, 61));
        Four->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Five = new QPushButton(centralWidget);
        Five->setObjectName(QStringLiteral("Five"));
        Five->setGeometry(QRect(60, 190, 61, 61));
        Five->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Six = new QPushButton(centralWidget);
        Six->setObjectName(QStringLiteral("Six"));
        Six->setGeometry(QRect(120, 190, 61, 61));
        Six->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Minus = new QPushButton(centralWidget);
        Minus->setObjectName(QStringLiteral("Minus"));
        Minus->setGeometry(QRect(180, 190, 61, 61));
        Minus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        One = new QPushButton(centralWidget);
        One->setObjectName(QStringLiteral("One"));
        One->setGeometry(QRect(0, 250, 61, 61));
        One->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Two = new QPushButton(centralWidget);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setGeometry(QRect(60, 250, 61, 61));
        Two->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Three = new QPushButton(centralWidget);
        Three->setObjectName(QStringLiteral("Three"));
        Three->setGeometry(QRect(120, 250, 61, 61));
        Three->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Plus = new QPushButton(centralWidget);
        Plus->setObjectName(QStringLiteral("Plus"));
        Plus->setGeometry(QRect(180, 250, 61, 61));
        Plus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Dot = new QPushButton(centralWidget);
        Dot->setObjectName(QStringLiteral("Dot"));
        Dot->setGeometry(QRect(120, 310, 61, 61));
        Dot->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Equal = new QPushButton(centralWidget);
        Equal->setObjectName(QStringLiteral("Equal"));
        Equal->setGeometry(QRect(180, 310, 61, 61));
        Equal->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Zero = new QPushButton(centralWidget);
        Zero->setObjectName(QStringLiteral("Zero"));
        Zero->setGeometry(QRect(0, 310, 121, 61));
        Zero->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "0", nullptr));
        Clear->setText(QApplication::translate("MainWindow", "C", nullptr));
        PlusMinus->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        Percentage->setText(QApplication::translate("MainWindow", "%", nullptr));
        Division->setText(QApplication::translate("MainWindow", "/", nullptr));
        Seven->setText(QApplication::translate("MainWindow", "7", nullptr));
        Eight->setText(QApplication::translate("MainWindow", "8", nullptr));
        Nine->setText(QApplication::translate("MainWindow", "9", nullptr));
        Multiply->setText(QApplication::translate("MainWindow", "X", nullptr));
        Four->setText(QApplication::translate("MainWindow", "4", nullptr));
        Five->setText(QApplication::translate("MainWindow", "5", nullptr));
        Six->setText(QApplication::translate("MainWindow", "6", nullptr));
        Minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        One->setText(QApplication::translate("MainWindow", "1", nullptr));
        Two->setText(QApplication::translate("MainWindow", "2", nullptr));
        Three->setText(QApplication::translate("MainWindow", "3", nullptr));
        Plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        Dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        Equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        Zero->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
