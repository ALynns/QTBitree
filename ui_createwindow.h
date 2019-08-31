/********************************************************************************
** Form generated from reading UI file 'createwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWINDOW_H
#define UI_CREATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *createWindowText;
    QTextEdit *createWindowTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *createBitreeWindowButton_OK;
    QPushButton *createBitreeWindowButton_Cancel;

    void setupUi(QDialog *CreateWindow)
    {
        if (CreateWindow->objectName().isEmpty())
            CreateWindow->setObjectName(QStringLiteral("CreateWindow"));
        CreateWindow->resize(400, 300);
        layoutWidget = new QWidget(CreateWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 310, 253));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        createWindowText = new QLabel(layoutWidget);
        createWindowText->setObjectName(QStringLiteral("createWindowText"));

        verticalLayout->addWidget(createWindowText);

        createWindowTextEdit = new QTextEdit(layoutWidget);
        createWindowTextEdit->setObjectName(QStringLiteral("createWindowTextEdit"));

        verticalLayout->addWidget(createWindowTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        createBitreeWindowButton_OK = new QPushButton(layoutWidget);
        createBitreeWindowButton_OK->setObjectName(QStringLiteral("createBitreeWindowButton_OK"));

        horizontalLayout->addWidget(createBitreeWindowButton_OK);

        createBitreeWindowButton_Cancel = new QPushButton(layoutWidget);
        createBitreeWindowButton_Cancel->setObjectName(QStringLiteral("createBitreeWindowButton_Cancel"));

        horizontalLayout->addWidget(createBitreeWindowButton_Cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CreateWindow);

        QMetaObject::connectSlotsByName(CreateWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateWindow)
    {
        CreateWindow->setWindowTitle(QApplication::translate("CreateWindow", "CreateBiTree", Q_NULLPTR));
        createWindowText->setText(QApplication::translate("CreateWindow", "\350\257\267\350\276\223\345\205\245\344\272\214\345\217\211\346\240\221\345\205\210\345\272\217\351\201\215\345\216\206\345\272\217\345\210\227\357\274\214\346\227\240\345\255\220\350\212\202\347\202\271\347\224\250#\350\241\250\347\244\272", Q_NULLPTR));
        createBitreeWindowButton_OK->setText(QApplication::translate("CreateWindow", "OK", Q_NULLPTR));
        createBitreeWindowButton_Cancel->setText(QApplication::translate("CreateWindow", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateWindow: public Ui_CreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWINDOW_H
