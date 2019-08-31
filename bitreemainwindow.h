#ifndef BitreeMainWindow_H
#define BitreeMainWindow_H

#include <QMainWindow>
#include <QWidget>
#include <QDialog>
#include <QMenu>
#include <QMenuBar>
#include <qlogging.h>
#include <string>
#include <QMessageBox>
#include <QScrollArea>
#include <QTextCodec>

#include "createwindow.h"
#include "bitreetravelwindow.h"
#include "bitreethreadwindow.h"
#include "paint.h"


namespace Ui
{
    class BitreeMainWindow;
}


class BitreeMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BitreeMainWindow(QWidget *parent = nullptr);
    ~BitreeMainWindow();

    friend class CreateWindow;

private slots:
    void createWindowButton_clicked();
    void biTreeLeafCountButton_clicked();
    void bitreeTravelButton_clicked();
    void biTreeTreadButton_clicked();
    void bitreeDisplayButton_clicked();
    void actionHelpButton_clicked();

private:
    Ui::BitreeMainWindow *ui;

    QMenu *menuBarHelp;
    QAction *actionHelpOpen;

protected:
    QString biTreeString,*preString,*inString,*postString;
    BiTreeP bt;
    BiTreeP tbt;
};


#endif // BitreeMainWindow_H
