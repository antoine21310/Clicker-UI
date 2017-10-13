#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"stdio.h"
#include "windows.h"
#include <math.h>
int argent=0;
int i=0;
int niveaup=0;
int niveau=1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int pas=4/niveau;
    float rando=rand();
    rando=rando/32768*50;
    argent=argent+rando+50*niveau*1.3;

    if(niveaup>=100){
        niveaup=0;
        niveau++;
    }
    ui->Niveau->setText(QString::number(niveau));
    niveaup=niveaup+pas;
    ui->lineEdit->setText(QString::number(argent));
    ui->Niveaubar->setValue(niveaup);
}
