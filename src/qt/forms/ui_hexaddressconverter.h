/********************************************************************************
** Form generated from reading UI file 'hexaddressconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXADDRESSCONVERTER_H
#define UI_HEXADDRESSCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_HexAddressConverter
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QValidatedLineEdit *addressEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *resultLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyButton;

    void setupUi(QMainWindow *HexAddressConverter)
    {
        if (HexAddressConverter->objectName().isEmpty())
            HexAddressConverter->setObjectName(QStringLiteral("HexAddressConverter"));
        HexAddressConverter->resize(500, 100);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HexAddressConverter->sizePolicy().hasHeightForWidth());
        HexAddressConverter->setSizePolicy(sizePolicy);
        HexAddressConverter->setMaximumSize(QSize(500, 100));
        centralwidget = new QWidget(HexAddressConverter);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        addressEdit = new QValidatedLineEdit(centralwidget);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        gridLayout->addWidget(addressEdit, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        resultLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(resultLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        copyButton = new QPushButton(centralwidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        horizontalLayout->addWidget(copyButton);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        HexAddressConverter->setCentralWidget(centralwidget);

        retranslateUi(HexAddressConverter);

        QMetaObject::connectSlotsByName(HexAddressConverter);
    } // setupUi

    void retranslateUi(QMainWindow *HexAddressConverter)
    {
        HexAddressConverter->setWindowTitle(QApplication::translate("HexAddressConverter", "Hex Address Converter", Q_NULLPTR));
        label->setText(QApplication::translate("HexAddressConverter", "Address", Q_NULLPTR));
        label_2->setText(QApplication::translate("HexAddressConverter", "Result", Q_NULLPTR));
        resultLabel->setText(QString());
        copyButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HexAddressConverter: public Ui_HexAddressConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXADDRESSCONVERTER_H
