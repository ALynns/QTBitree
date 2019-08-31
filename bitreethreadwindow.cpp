#include "bitreethreadwindow.h"
#include "ui_bitreethreadwindow.h"

BiTreeThreadWindow::BiTreeThreadWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BiTreeThreadWindow)
{
    ui->setupUi(this);
    connect(ui->threadWindowButton_OK,SIGNAL(clicked()),this,SLOT(biTreeThreadWindowButtonOK_click()));
}

BiTreeThreadWindow::~BiTreeThreadWindow()
{
    delete ui;
}

void BiTreeThreadWindow::biTreeThreadWindowButtonOK_click()
{
    if(ui->preOrderThreadRadioButton->isChecked())
        type=1;
    else
    {
        if(ui->inOrderThreadRadioButton)
            type=2;
        else
        {
            type=3;
        }
    }
    QMessageBox *biTreeThreadSuccessMessageBox;
    biTreeThreadSuccessMessageBox=new QMessageBox("Success","Thread success",QMessageBox::Information,QMessageBox::Ok,0,0);
    biTreeThreadSuccessMessageBox->exec();
    close();
}

int BiTreeThreadWindow::getType()
{
    return type;
}
