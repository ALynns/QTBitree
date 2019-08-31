/********************************************************************************
** Form generated from reading UI file 'bitreetravelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITREETRAVELWINDOW_H
#define UI_BITREETRAVELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_biTreeTravelWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *preTravelButton;
    QPushButton *inTravelButton;
    QPushButton *postTravelButton;

    void setupUi(QDialog *biTreeTravelWindow)
    {
        if (biTreeTravelWindow->objectName().isEmpty())
            biTreeTravelWindow->setObjectName(QStringLiteral("biTreeTravelWindow"));
        biTreeTravelWindow->resize(400, 300);
        widget = new QWidget(biTreeTravelWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 40, 171, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        preTravelButton = new QPushButton(widget);
        preTravelButton->setObjectName(QStringLiteral("preTravelButton"));

        verticalLayout->addWidget(preTravelButton);

        inTravelButton = new QPushButton(widget);
        inTravelButton->setObjectName(QStringLiteral("inTravelButton"));

        verticalLayout->addWidget(inTravelButton);

        postTravelButton = new QPushButton(widget);
        postTravelButton->setObjectName(QStringLiteral("postTravelButton"));

        verticalLayout->addWidget(postTravelButton);


        retranslateUi(biTreeTravelWindow);

        QMetaObject::connectSlotsByName(biTreeTravelWindow);
    } // setupUi

    void retranslateUi(QDialog *biTreeTravelWindow)
    {
        biTreeTravelWindow->setWindowTitle(QApplication::translate("biTreeTravelWindow", "BiTreeTravel", Q_NULLPTR));
        preTravelButton->setText(QApplication::translate("biTreeTravelWindow", "PreTravel", Q_NULLPTR));
        inTravelButton->setText(QApplication::translate("biTreeTravelWindow", "InTravel", Q_NULLPTR));
        postTravelButton->setText(QApplication::translate("biTreeTravelWindow", "PostTravel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class biTreeTravelWindow: public Ui_biTreeTravelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITREETRAVELWINDOW_H
