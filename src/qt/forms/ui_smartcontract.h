/********************************************************************************
** Form generated from reading UI file 'smartcontract.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTCONTRACT_H
#define UI_SMARTCONTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartContract
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *SmartContractTabWidget;

    void setupUi(QWidget *SmartContract)
    {
        if (SmartContract->objectName().isEmpty())
            SmartContract->setObjectName(QStringLiteral("SmartContract"));
        SmartContract->resize(1031, 639);
        verticalLayout = new QVBoxLayout(SmartContract);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SmartContractTabWidget = new QTabWidget(SmartContract);
        SmartContractTabWidget->setObjectName(QStringLiteral("SmartContractTabWidget"));
        SmartContractTabWidget->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        SmartContractTabWidget->setFont(font);
        SmartContractTabWidget->setTabPosition(QTabWidget::North);
        SmartContractTabWidget->setTabShape(QTabWidget::Rounded);

        verticalLayout->addWidget(SmartContractTabWidget);


        retranslateUi(SmartContract);

        SmartContractTabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SmartContract);
    } // setupUi

    void retranslateUi(QWidget *SmartContract)
    {
        SmartContract->setWindowTitle(QApplication::translate("SmartContract", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmartContract: public Ui_SmartContract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTCONTRACT_H
