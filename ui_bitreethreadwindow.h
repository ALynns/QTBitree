/********************************************************************************
** Form generated from reading UI file 'bitreethreadwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITREETHREADWINDOW_H
#define UI_BITREETHREADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BiTreeThreadWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *threadGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *preOrderThreadRadioButton;
    QRadioButton *inOrderThreadRadioButton;
    QRadioButton *postOrderThreadRadioButton;
    QPushButton *threadWindowButton_OK;

    void setupUi(QDialog *BiTreeThreadWindow)
    {
        if (BiTreeThreadWindow->objectName().isEmpty())
            BiTreeThreadWindow->setObjectName(QStringLiteral("BiTreeThreadWindow"));
        BiTreeThreadWindow->resize(400, 300);
        widget = new QWidget(BiTreeThreadWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 50, 251, 211));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        threadGroupBox = new QGroupBox(widget);
        threadGroupBox->setObjectName(QStringLiteral("threadGroupBox"));
        verticalLayout = new QVBoxLayout(threadGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        preOrderThreadRadioButton = new QRadioButton(threadGroupBox);
        preOrderThreadRadioButton->setObjectName(QStringLiteral("preOrderThreadRadioButton"));

        verticalLayout->addWidget(preOrderThreadRadioButton);

        inOrderThreadRadioButton = new QRadioButton(threadGroupBox);
        inOrderThreadRadioButton->setObjectName(QStringLiteral("inOrderThreadRadioButton"));

        verticalLayout->addWidget(inOrderThreadRadioButton);

        postOrderThreadRadioButton = new QRadioButton(threadGroupBox);
        postOrderThreadRadioButton->setObjectName(QStringLiteral("postOrderThreadRadioButton"));

        verticalLayout->addWidget(postOrderThreadRadioButton);


        verticalLayout_2->addWidget(threadGroupBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        threadWindowButton_OK = new QPushButton(widget);
        threadWindowButton_OK->setObjectName(QStringLiteral("threadWindowButton_OK"));

        verticalLayout_3->addWidget(threadWindowButton_OK);


        retranslateUi(BiTreeThreadWindow);

        QMetaObject::connectSlotsByName(BiTreeThreadWindow);
    } // setupUi

    void retranslateUi(QDialog *BiTreeThreadWindow)
    {
        BiTreeThreadWindow->setWindowTitle(QApplication::translate("BiTreeThreadWindow", "BiTreeThread", Q_NULLPTR));
        threadGroupBox->setTitle(QApplication::translate("BiTreeThreadWindow", "Thread", Q_NULLPTR));
        preOrderThreadRadioButton->setText(QApplication::translate("BiTreeThreadWindow", "PreOrderThread", Q_NULLPTR));
        inOrderThreadRadioButton->setText(QApplication::translate("BiTreeThreadWindow", "InOrderThread", Q_NULLPTR));
        postOrderThreadRadioButton->setText(QApplication::translate("BiTreeThreadWindow", "PostOrderThread", Q_NULLPTR));
        threadWindowButton_OK->setText(QApplication::translate("BiTreeThreadWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BiTreeThreadWindow: public Ui_BiTreeThreadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITREETHREADWINDOW_H
