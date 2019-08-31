/********************************************************************************
** Form generated from reading UI file 'bitreemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITREEMAINWINDOW_H
#define UI_BITREEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BitreeMainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *createBitreeButton;
    QPushButton *bitreeLeafCountButton;
    QPushButton *bitreeThreadButton;
    QPushButton *bitreeTravelButton;
    QPushButton *bitreeDisplayButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BitreeMainWindow)
    {
        if (BitreeMainWindow->objectName().isEmpty())
            BitreeMainWindow->setObjectName(QStringLiteral("BitreeMainWindow"));
        BitreeMainWindow->resize(352, 302);
        centralWidget = new QWidget(BitreeMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        createBitreeButton = new QPushButton(centralWidget);
        createBitreeButton->setObjectName(QStringLiteral("createBitreeButton"));

        verticalLayout->addWidget(createBitreeButton);

        bitreeLeafCountButton = new QPushButton(centralWidget);
        bitreeLeafCountButton->setObjectName(QStringLiteral("bitreeLeafCountButton"));

        verticalLayout->addWidget(bitreeLeafCountButton);

        bitreeThreadButton = new QPushButton(centralWidget);
        bitreeThreadButton->setObjectName(QStringLiteral("bitreeThreadButton"));

        verticalLayout->addWidget(bitreeThreadButton);

        bitreeTravelButton = new QPushButton(centralWidget);
        bitreeTravelButton->setObjectName(QStringLiteral("bitreeTravelButton"));

        verticalLayout->addWidget(bitreeTravelButton);

        bitreeDisplayButton = new QPushButton(centralWidget);
        bitreeDisplayButton->setObjectName(QStringLiteral("bitreeDisplayButton"));

        verticalLayout->addWidget(bitreeDisplayButton);

        BitreeMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BitreeMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 352, 26));
        BitreeMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BitreeMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BitreeMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BitreeMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BitreeMainWindow->setStatusBar(statusBar);

        retranslateUi(BitreeMainWindow);

        QMetaObject::connectSlotsByName(BitreeMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BitreeMainWindow)
    {
        BitreeMainWindow->setWindowTitle(QApplication::translate("BitreeMainWindow", "BitreeMainWindow", Q_NULLPTR));
        createBitreeButton->setText(QApplication::translate("BitreeMainWindow", "CreateBitree", Q_NULLPTR));
        bitreeLeafCountButton->setText(QApplication::translate("BitreeMainWindow", "BitreeLeafCount", Q_NULLPTR));
        bitreeThreadButton->setText(QApplication::translate("BitreeMainWindow", "BitreeThread", Q_NULLPTR));
        bitreeTravelButton->setText(QApplication::translate("BitreeMainWindow", "BitreeTravel", Q_NULLPTR));
        bitreeDisplayButton->setText(QApplication::translate("BitreeMainWindow", "BitreeDisplay", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BitreeMainWindow: public Ui_BitreeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITREEMAINWINDOW_H
