#ifndef BITREETHREADWINDOW_H
#define BITREETHREADWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QPushButton>

namespace Ui {
class BiTreeThreadWindow;
}

class BiTreeThreadWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BiTreeThreadWindow(QWidget *parent = nullptr);
    ~BiTreeThreadWindow();
    int getType();
private slots:
    void biTreeThreadWindowButtonOK_click();
private:
    Ui::BiTreeThreadWindow *ui;
    int type;

};

#endif // BITREETHREADWINDOW_H
