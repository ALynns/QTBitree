#include "bitreemainwindow.h"
#include "ui_bitreemainwindow.h"

#include<QDebug>

BitreeMainWindow::BitreeMainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::BitreeMainWindow)
{
    ui->setupUi(this);

    bt=nullptr;
	tbt = nullptr;

    this->setWindowFlags(Qt::WindowCloseButtonHint|Qt::WindowMinimizeButtonHint);

    QMenuBar *pMenuBar = menuBar();

    //工具栏创建
    menuBarHelp= new QMenu(tr("帮助(Alt+&H)"));
    //工具栏菜单创建
    actionHelpOpen = new QAction(tr("关于软件"), this);
    actionHelpOpen->setShortcut(Qt::CTRL | Qt::Key_A);
    menuBarHelp->addAction(actionHelpOpen);
    //将菜单添加至工具栏按钮
    pMenuBar->addMenu(menuBarHelp);

    preString=new QString;
    inString=new QString;
    postString=new QString;

    connect(ui->createBitreeButton,SIGNAL(clicked()),this,SLOT(createWindowButton_clicked()));
    connect(ui->bitreeLeafCountButton,SIGNAL(clicked()),this,SLOT(biTreeLeafCountButton_clicked()));
    connect(ui->bitreeTravelButton,SIGNAL(clicked()),this,SLOT(bitreeTravelButton_clicked()));
    connect(ui->bitreeThreadButton,SIGNAL(clicked()),this,SLOT(biTreeTreadButton_clicked()));
    connect(ui->bitreeDisplayButton,SIGNAL(clicked()),this,SLOT(bitreeDisplayButton_clicked()));
    connect(actionHelpOpen,SIGNAL(triggered()),this,SLOT(actionHelpButton_clicked()));
}

BitreeMainWindow::~BitreeMainWindow()
{
    delete ui;
}

void BitreeMainWindow::createWindowButton_clicked()
{
    CreateWindow *form=new CreateWindow(this);
    form->exec();
    biTreeString=form->createWindowTextEditString;

    bt=new BiTNode;
    if(bt!=nullptr)
        bt->destroy();
	bt = new BiTNode;
    if(!biTreeString.isEmpty())
    {
        bt->createBiTree(biTreeString);
    //qDebug()<<biTreeString;

    //abc##d##ef###
        bt->preOrder(preString);
        bt->inOrder(inString);
        bt->postOrder(postString);
    }

    //bt->PreOrderTraverse();
    //bt->InOrderTraverse();
    //bt->PostOrderTraverse();
}

void BitreeMainWindow::biTreeLeafCountButton_clicked()
{
    QMessageBox *biTreeLeafCountMessageBox;
    biTreeLeafCountMessageBox=new QMessageBox("LeafCount",QString::number(bt->Leaves()),QMessageBox::Information,QMessageBox::Ok,0,0);
    biTreeLeafCountMessageBox->exec();
}

void BitreeMainWindow::bitreeTravelButton_clicked()
{
    biTreeTravelWindow *form=new biTreeTravelWindow;
    form->getBiTreeString(*preString,*inString,*postString);
    form->exec();
}

void BitreeMainWindow::biTreeTreadButton_clicked()
{
    int type;
    BiTreeThreadWindow *form=new BiTreeThreadWindow;
    form->exec();
    if(tbt!=nullptr)
        tbt->destroy();
    tbt = new BiTNode;
    if(!biTreeString.isEmpty())
    {
        tbt->createBiTree(biTreeString);
    //qDebug()<<biTreeString;

    //abc##d##ef###
    }
    type=form->getType();
    switch(type)
    {
        case 1:
        {
            tbt->preOrderThreading();
            break;
        }
        case 2:
        {

            tbt->inOrderThreading();
            break;
        }
        case 3:
        {
            tbt->postOrderThreading();
            break;
        }
    }
}

void BitreeMainWindow::bitreeDisplayButton_clicked()
{
    Paint *form=new Paint();

    form->setBiTree(bt);
    form->show();
}

void BitreeMainWindow:: actionHelpButton_clicked()
{
    QMessageBox *helpMessageBox;
    QString helpString=tr("同济大学计算机系2019年课程设计 作者：夏子寒 学号：1753935");
    helpMessageBox=new QMessageBox("About",helpString,QMessageBox::Information,QMessageBox::Ok,0,0);
    helpMessageBox->exec();
}
