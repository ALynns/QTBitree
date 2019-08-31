#include "bitreetravelwindow.h"
#include "ui_bitreetravelwindow.h"

biTreeTravelWindow::biTreeTravelWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::biTreeTravelWindow)
{
    ui->setupUi(this);
    connect(ui->preTravelButton,SIGNAL(clicked()),this,SLOT(preTravelButton_clicked()));
    connect(ui->inTravelButton,SIGNAL(clicked()),this,SLOT(inTravelButton_clicked()));
    connect(ui->postTravelButton,SIGNAL(clicked()),this,SLOT(postTravelButton_clicked()));
}

biTreeTravelWindow::~biTreeTravelWindow()
{
    delete ui;
}


void biTreeTravelWindow::preTravelButton_clicked()
{
    QMessageBox *preTravelButtonMessageBox;
    preTravelButtonMessageBox=new QMessageBox("PreTravelButton",preString,QMessageBox::Information,QMessageBox::Ok,0,0);
    preTravelButtonMessageBox->exec();
}

void biTreeTravelWindow::inTravelButton_clicked()
{
    QMessageBox *inTravelButtonMessageBox;
    inTravelButtonMessageBox=new QMessageBox("InTravelButton",inString,QMessageBox::Information,QMessageBox::Ok,0,0);
    inTravelButtonMessageBox->exec();
}

void biTreeTravelWindow::postTravelButton_clicked()
{
    QMessageBox *postTravelButtonMessageBox;
    postTravelButtonMessageBox=new QMessageBox("PostTravelButton",postString,QMessageBox::Information,QMessageBox::Ok,0,0);
    postTravelButtonMessageBox->exec();
}

void biTreeTravelWindow::getBiTreeString(QString pre,QString in,QString post)
{
    preString=pre;
    inString=in;
    postString=post;
    return;
}
