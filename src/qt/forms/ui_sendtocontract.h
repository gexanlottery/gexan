/********************************************************************************
** Form generated from reading UI file 'sendtocontract.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDTOCONTRACT_H
#define UI_SENDTOCONTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addressfield.h"
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"
#include "qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendToContract
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *sendContractPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle;
    QFrame *frameContract;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *lineEditContractAddress;
    QToolButton *loadInfoButton;
    QFrame *vLine;
    QToolButton *pasteAddressButton;
    QFrame *vLine2;
    QToolButton *saveInfoButton;
    QLabel *labelContractAddress;
    QValidatedTextEdit *textEditInterface;
    QLabel *labelInterface;
    QGroupBox *groupBoxFunction;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollAreaFunction;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBoxOptional;
    QGridLayout *gridLayout_2;
    BitcoinAmountField *lineEditAmount;
    QLabel *labelGasLimit;
    QLabel *labelGasPrice;
    AddressField *lineEditSenderAddress;
    QLabel *labelAmount;
    BitcoinAmountField *lineEditGasPrice;
    QLabel *labelSenderAddress;
    QSpinBox *lineEditGasLimit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSendToContract;

    void setupUi(QWidget *SendToContract)
    {
        if (SendToContract->objectName().isEmpty())
            SendToContract->setObjectName(QStringLiteral("SendToContract"));
        SendToContract->resize(689, 583);
        verticalLayout = new QVBoxLayout(SendToContract);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(SendToContract);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sendContractPage = new QWidget();
        sendContractPage->setObjectName(QStringLiteral("sendContractPage"));
        verticalLayout_4 = new QVBoxLayout(sendContractPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelTitle = new QLabel(sendContractPage);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        verticalLayout_4->addWidget(labelTitle);

        frameContract = new QFrame(sendContractPage);
        frameContract->setObjectName(QStringLiteral("frameContract"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameContract->sizePolicy().hasHeightForWidth());
        frameContract->setSizePolicy(sizePolicy);
        frameContract->setFrameShape(QFrame::StyledPanel);
        frameContract->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameContract);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(12, -1, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEditContractAddress = new QValidatedLineEdit(frameContract);
        lineEditContractAddress->setObjectName(QStringLiteral("lineEditContractAddress"));

        horizontalLayout_2->addWidget(lineEditContractAddress);

        loadInfoButton = new QToolButton(frameContract);
        loadInfoButton->setObjectName(QStringLiteral("loadInfoButton"));
        loadInfoButton->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(loadInfoButton);

        vLine = new QFrame(frameContract);
        vLine->setObjectName(QStringLiteral("vLine"));
        vLine->setMaximumSize(QSize(1, 22));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(vLine);

        pasteAddressButton = new QToolButton(frameContract);
        pasteAddressButton->setObjectName(QStringLiteral("pasteAddressButton"));
        pasteAddressButton->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(pasteAddressButton);

        vLine2 = new QFrame(frameContract);
        vLine2->setObjectName(QStringLiteral("vLine2"));
        vLine2->setMaximumSize(QSize(1, 22));
        vLine2->setFrameShape(QFrame::VLine);
        vLine2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(vLine2);

        saveInfoButton = new QToolButton(frameContract);
        saveInfoButton->setObjectName(QStringLiteral("saveInfoButton"));
        saveInfoButton->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(saveInfoButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        labelContractAddress = new QLabel(frameContract);
        labelContractAddress->setObjectName(QStringLiteral("labelContractAddress"));

        gridLayout->addWidget(labelContractAddress, 0, 0, 1, 1);

        textEditInterface = new QValidatedTextEdit(frameContract);
        textEditInterface->setObjectName(QStringLiteral("textEditInterface"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEditInterface->sizePolicy().hasHeightForWidth());
        textEditInterface->setSizePolicy(sizePolicy1);
        textEditInterface->setMaximumSize(QSize(16777215, 65));
        textEditInterface->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(textEditInterface, 1, 2, 1, 1);

        labelInterface = new QLabel(frameContract);
        labelInterface->setObjectName(QStringLiteral("labelInterface"));

        gridLayout->addWidget(labelInterface, 1, 0, 1, 1, Qt::AlignTop);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_4->addWidget(frameContract);

        groupBoxFunction = new QGroupBox(sendContractPage);
        groupBoxFunction->setObjectName(QStringLiteral("groupBoxFunction"));
        verticalLayout_3 = new QVBoxLayout(groupBoxFunction);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 15, -1, 9);
        scrollAreaFunction = new QScrollArea(groupBoxFunction);
        scrollAreaFunction->setObjectName(QStringLiteral("scrollAreaFunction"));
        scrollAreaFunction->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 639, 182));
        scrollAreaFunction->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollAreaFunction);


        verticalLayout_4->addWidget(groupBoxFunction);

        groupBoxOptional = new QGroupBox(sendContractPage);
        groupBoxOptional->setObjectName(QStringLiteral("groupBoxOptional"));
        gridLayout_2 = new QGridLayout(groupBoxOptional);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(15, 15, -1, -1);
        lineEditAmount = new BitcoinAmountField(groupBoxOptional);
        lineEditAmount->setObjectName(QStringLiteral("lineEditAmount"));

        gridLayout_2->addWidget(lineEditAmount, 0, 1, 1, 4);

        labelGasLimit = new QLabel(groupBoxOptional);
        labelGasLimit->setObjectName(QStringLiteral("labelGasLimit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelGasLimit->sizePolicy().hasHeightForWidth());
        labelGasLimit->setSizePolicy(sizePolicy2);
        labelGasLimit->setMinimumSize(QSize(130, 0));

        gridLayout_2->addWidget(labelGasLimit, 1, 0, 1, 1);

        labelGasPrice = new QLabel(groupBoxOptional);
        labelGasPrice->setObjectName(QStringLiteral("labelGasPrice"));
        sizePolicy2.setHeightForWidth(labelGasPrice->sizePolicy().hasHeightForWidth());
        labelGasPrice->setSizePolicy(sizePolicy2);
        labelGasPrice->setMinimumSize(QSize(90, 0));

        gridLayout_2->addWidget(labelGasPrice, 1, 3, 1, 1);

        lineEditSenderAddress = new AddressField(groupBoxOptional);
        lineEditSenderAddress->setObjectName(QStringLiteral("lineEditSenderAddress"));
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));

        gridLayout_2->addWidget(lineEditSenderAddress, 3, 1, 1, 4);

        labelAmount = new QLabel(groupBoxOptional);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        sizePolicy2.setHeightForWidth(labelAmount->sizePolicy().hasHeightForWidth());
        labelAmount->setSizePolicy(sizePolicy2);
        labelAmount->setMinimumSize(QSize(130, 0));

        gridLayout_2->addWidget(labelAmount, 0, 0, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(groupBoxOptional);
        lineEditGasPrice->setObjectName(QStringLiteral("lineEditGasPrice"));

        gridLayout_2->addWidget(lineEditGasPrice, 1, 4, 1, 1);

        labelSenderAddress = new QLabel(groupBoxOptional);
        labelSenderAddress->setObjectName(QStringLiteral("labelSenderAddress"));
        sizePolicy2.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy2);
        labelSenderAddress->setMinimumSize(QSize(130, 0));

        gridLayout_2->addWidget(labelSenderAddress, 3, 0, 1, 1);

        lineEditGasLimit = new QSpinBox(groupBoxOptional);
        lineEditGasLimit->setObjectName(QStringLiteral("lineEditGasLimit"));
        sizePolicy1.setHeightForWidth(lineEditGasLimit->sizePolicy().hasHeightForWidth());
        lineEditGasLimit->setSizePolicy(sizePolicy1);
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEditGasLimit, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        verticalLayout_4->addWidget(groupBoxOptional);

        stackedWidget->addWidget(sendContractPage);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClearAll = new QPushButton(SendToContract);
        pushButtonClearAll->setObjectName(QStringLiteral("pushButtonClearAll"));

        horizontalLayout->addWidget(pushButtonClearAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonSendToContract = new QPushButton(SendToContract);
        pushButtonSendToContract->setObjectName(QStringLiteral("pushButtonSendToContract"));

        horizontalLayout->addWidget(pushButtonSendToContract);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SendToContract);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SendToContract);
    } // setupUi

    void retranslateUi(QWidget *SendToContract)
    {
        SendToContract->setWindowTitle(QApplication::translate("SendToContract", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SendToContract", "Send to Smart Contract", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loadInfoButton->setToolTip(QApplication::translate("SendToContract", "Choose from contract book page", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        loadInfoButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pasteAddressButton->setToolTip(QApplication::translate("SendToContract", "Paste contract address from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pasteAddressButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveInfoButton->setToolTip(QApplication::translate("SendToContract", "Save contract info", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveInfoButton->setText(QString());
        labelContractAddress->setText(QApplication::translate("SendToContract", "Contract Address", Q_NULLPTR));
        labelInterface->setText(QApplication::translate("SendToContract", "Interface (ABI)", Q_NULLPTR));
        groupBoxFunction->setTitle(QApplication::translate("SendToContract", "Function", Q_NULLPTR));
        groupBoxOptional->setTitle(QApplication::translate("SendToContract", "Optional", Q_NULLPTR));
        labelGasLimit->setText(QApplication::translate("SendToContract", "Gas Limit", Q_NULLPTR));
        labelGasPrice->setText(QApplication::translate("SendToContract", "Gas Price", Q_NULLPTR));
        labelAmount->setText(QApplication::translate("SendToContract", "Amount", Q_NULLPTR));
        labelSenderAddress->setText(QApplication::translate("SendToContract", "Sender Address", Q_NULLPTR));
        pushButtonClearAll->setText(QApplication::translate("SendToContract", "Clear All", Q_NULLPTR));
        pushButtonSendToContract->setText(QApplication::translate("SendToContract", "Send To Contract", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendToContract: public Ui_SendToContract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDTOCONTRACT_H
