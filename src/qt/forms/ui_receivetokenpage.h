/********************************************************************************
** Form generated from reading UI file 'receivetokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVETOKENPAGE_H
#define UI_RECEIVETOKENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceiveTokenPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblQRCode;
    QLineEdit *lineEditAmount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyAddressButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ReceiveTokenPage)
    {
        if (ReceiveTokenPage->objectName().isEmpty())
            ReceiveTokenPage->setObjectName(QStringLiteral("ReceiveTokenPage"));
        ReceiveTokenPage->setEnabled(true);
        ReceiveTokenPage->resize(520, 342);
        verticalLayout = new QVBoxLayout(ReceiveTokenPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(40, -1, 40, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblQRCode = new QLabel(ReceiveTokenPage);
        lblQRCode->setObjectName(QStringLiteral("lblQRCode"));
        lblQRCode->setMinimumSize(QSize(200, 220));
        lblQRCode->setMaximumSize(QSize(240, 260));
        lblQRCode->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblQRCode);


        verticalLayout->addLayout(horizontalLayout_2);

        lineEditAmount = new QLineEdit(ReceiveTokenPage);
        lineEditAmount->setObjectName(QStringLiteral("lineEditAmount"));
        lineEditAmount->setStyleSheet(QStringLiteral(""));
        lineEditAmount->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEditAmount);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        copyAddressButton = new QPushButton(ReceiveTokenPage);
        copyAddressButton->setObjectName(QStringLiteral("copyAddressButton"));
        copyAddressButton->setMinimumSize(QSize(150, 50));

        horizontalLayout->addWidget(copyAddressButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReceiveTokenPage);

        QMetaObject::connectSlotsByName(ReceiveTokenPage);
    } // setupUi

    void retranslateUi(QWidget *ReceiveTokenPage)
    {
        ReceiveTokenPage->setWindowTitle(QApplication::translate("ReceiveTokenPage", "Form", Q_NULLPTR));
        lblQRCode->setText(QString());
        copyAddressButton->setText(QApplication::translate("ReceiveTokenPage", "Copy Address", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReceiveTokenPage: public Ui_ReceiveTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVETOKENPAGE_H
