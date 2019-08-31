/********************************************************************************
** Form generated from reading UI file 'bitreepaint.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITREEPAINT_H
#define UI_BITREEPAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BiTreePaint
{
public:

    void setupUi(QWidget *BiTreePaint)
    {
        if (BiTreePaint->objectName().isEmpty())
            BiTreePaint->setObjectName(QStringLiteral("BiTreePaint"));
        BiTreePaint->resize(400, 300);

        retranslateUi(BiTreePaint);

        QMetaObject::connectSlotsByName(BiTreePaint);
    } // setupUi

    void retranslateUi(QWidget *BiTreePaint)
    {
        BiTreePaint->setWindowTitle(QApplication::translate("BiTreePaint", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BiTreePaint: public Ui_BiTreePaint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITREEPAINT_H
