/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QProgressBar *Niveaubar;
    QLabel *Niveau;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 650);
        MainWindow->setMaximumSize(QSize(1000, 650));
        MainWindow->setAnimated(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(-30, 540, 1091, 111));
        pushButton->setMaximumSize(QSize(5000, 5000));
        pushButton->setStyleSheet(QLatin1String("border-radius:5px;\n"
"border-width:2px;\n"
"border-color:black;\n"
"border-style:solid;\n"
"background-color:grey;"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(400, 470, 191, 61));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"border-width:2px;\n"
"border-color:black;\n"
"border-style:solid;"));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);
        Niveaubar = new QProgressBar(centralWidget);
        Niveaubar->setObjectName(QStringLiteral("Niveaubar"));
        Niveaubar->setGeometry(QRect(0, 0, 1001, 23));
        Niveaubar->setStyleSheet(QLatin1String("text-align:center;\n"
""));
        Niveaubar->setValue(0);
        Niveaubar->setTextDirection(QProgressBar::TopToBottom);
        Niveau = new QLabel(centralWidget);
        Niveau->setObjectName(QStringLiteral("Niveau"));
        Niveau->setGeometry(QRect(-10, 20, 1011, 20));
        Niveau->setStyleSheet(QStringLiteral(""));
        Niveau->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QString());
        Niveau->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
