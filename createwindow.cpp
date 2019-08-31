#include "createwindow.h"
#include "ui_createwindow.h"
#include <QMessageBox>

#include<QDebug>

CreateWindow::CreateWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateWindow)
{
    ui->setupUi(this);
    connect(ui->createBitreeWindowButton_OK,SIGNAL(clicked()),this,SLOT(createWindow_OKButton_clicked()));
    connect(ui->createBitreeWindowButton_Cancel,SIGNAL(clicked()),this,SLOT(createWindow_CancelButton_clicked()));
}

CreateWindow::~CreateWindow()
{
    delete ui;
}

void CreateWindow::createWindow_OKButton_clicked()
{
    createWindowTextEditString=ui->createWindowTextEdit->toPlainText();
    QMessageBox *biTreeCreateSuccessMessageBox;
    biTreeCreateSuccessMessageBox=new QMessageBox("Success","Create success",QMessageBox::Information,QMessageBox::Ok,0,0);
    biTreeCreateSuccessMessageBox->exec();
    close();
}


void CreateWindow::createWindow_CancelButton_clicked()
{
    this->close();
}

