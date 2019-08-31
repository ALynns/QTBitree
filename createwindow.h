#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <QDialog>
#include <string>

namespace Ui {
class CreateWindow;
}

class CreateWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateWindow(QWidget *parent = nullptr);
    ~CreateWindow();

    friend class BitreeMainWindow;

private slots:
    void createWindow_OKButton_clicked();
    void createWindow_CancelButton_clicked();

private:
    Ui::CreateWindow *ui;

protected:
    QString createWindowTextEditString;
};

#endif // CREATEWINDOW_H
