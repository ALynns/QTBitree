#ifndef BITREETRAVELWINDOW_H
#define BITREETRAVELWINDOW_H

#include <QDialog>
#include <QString>
#include <QMessageBox>

namespace Ui {
class biTreeTravelWindow;
}

class biTreeTravelWindow : public QDialog
{
    Q_OBJECT

public:
    explicit biTreeTravelWindow(QWidget *parent = nullptr);
    ~biTreeTravelWindow();
    void getBiTreeString(QString pre,QString in,QString post);

private slots:
    void preTravelButton_clicked();
    void inTravelButton_clicked();
    void postTravelButton_clicked();

private:
    Ui::biTreeTravelWindow *ui;
    QString preString,inString,postString;
};

#endif // BITREETRAVELWINDOW_H
