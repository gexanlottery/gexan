/********************************************************************************
** Form generated from reading UI file 'createcontract.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECONTRACT_H
#define UI_CREATECONTRACT_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addressfield.h"
#include "bitcoinamountfield.h"
#include "qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_CreateContract
{
public:
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *createContractPage;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelSolidity;
    QLabel *labelToken;
    QFrame *frameContract;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout;
    QValidatedTextEdit *textEditBytecode;
    QVBoxLayout *verticalLayout;
    QLabel *labelBytecode;
    QSpacerItem *verticalSpacer_2;
    QValidatedTextEdit *textEditInterface;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelInterface;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBoxConstructor;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollAreaConstructor;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxOptional;
    QGridLayout *gridLayout_2;
    AddressField *lineEditSenderAddress;
    QLabel *labelSenderAddress;
    QLabel *labelGasPrice;
    QLabel *labelGasLimit;
    QSpinBox *lineEditGasLimit;
    BitcoinAmountField *lineEditGasPrice;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonCreateContract;

    void setupUi(QWidget *CreateContract)
    {
        if (CreateContract->objectName().isEmpty())
            CreateContract->setObjectName(QStringLiteral("CreateContract"));
        CreateContract->resize(706, 587);
        verticalLayout_7 = new QVBoxLayout(CreateContract);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        stackedWidget = new QStackedWidget(CreateContract);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        createContractPage = new QWidget();
        createContractPage->setObjectName(QStringLiteral("createContractPage"));
        verticalLayout_8 = new QVBoxLayout(createContractPage);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTitle = new QLabel(createContractPage);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        labelSolidity = new QLabel(createContractPage);
        labelSolidity->setObjectName(QStringLiteral("labelSolidity"));
        labelSolidity->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(labelSolidity);

        labelToken = new QLabel(createContractPage);
        labelToken->setObjectName(QStringLiteral("labelToken"));

        horizontalLayout->addWidget(labelToken);


        verticalLayout_8->addLayout(horizontalLayout);

        frameContract = new QFrame(createContractPage);
        frameContract->setObjectName(QStringLiteral("frameContract"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameContract->sizePolicy().hasHeightForWidth());
        frameContract->setSizePolicy(sizePolicy);
        frameContract->setFrameShape(QFrame::StyledPanel);
        frameContract->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frameContract);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, -1, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(12, -1, -1, -1);
        textEditBytecode = new QValidatedTextEdit(frameContract);
        textEditBytecode->setObjectName(QStringLiteral("textEditBytecode"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEditBytecode->sizePolicy().hasHeightForWidth());
        textEditBytecode->setSizePolicy(sizePolicy1);
        textEditBytecode->setMaximumSize(QSize(16777215, 65));
        textEditBytecode->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditBytecode->setAcceptRichText(false);

        gridLayout->addWidget(textEditBytecode, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelBytecode = new QLabel(frameContract);
        labelBytecode->setObjectName(QStringLiteral("labelBytecode"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelBytecode->sizePolicy().hasHeightForWidth());
        labelBytecode->setSizePolicy(sizePolicy2);
        labelBytecode->setMinimumSize(QSize(100, 0));

        verticalLayout->addWidget(labelBytecode);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        textEditInterface = new QValidatedTextEdit(frameContract);
        textEditInterface->setObjectName(QStringLiteral("textEditInterface"));
        sizePolicy1.setHeightForWidth(textEditInterface->sizePolicy().hasHeightForWidth());
        textEditInterface->setSizePolicy(sizePolicy1);
        textEditInterface->setMaximumSize(QSize(16777215, 65));
        textEditInterface->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditInterface->setAcceptRichText(false);

        gridLayout->addWidget(textEditInterface, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelInterface = new QLabel(frameContract);
        labelInterface->setObjectName(QStringLiteral("labelInterface"));
        sizePolicy2.setHeightForWidth(labelInterface->sizePolicy().hasHeightForWidth());
        labelInterface->setSizePolicy(sizePolicy2);
        labelInterface->setMinimumSize(QSize(100, 0));

        verticalLayout_3->addWidget(labelInterface);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout);


        verticalLayout_8->addWidget(frameContract);

        groupBoxConstructor = new QGroupBox(createContractPage);
        groupBoxConstructor->setObjectName(QStringLiteral("groupBoxConstructor"));
        verticalLayout_2 = new QVBoxLayout(groupBoxConstructor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, -1, -1);
        scrollAreaConstructor = new QScrollArea(groupBoxConstructor);
        scrollAreaConstructor->setObjectName(QStringLiteral("scrollAreaConstructor"));
        scrollAreaConstructor->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 656, 172));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrollAreaConstructor->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollAreaConstructor);


        verticalLayout_8->addWidget(groupBoxConstructor);

        groupBoxOptional = new QGroupBox(createContractPage);
        groupBoxOptional->setObjectName(QStringLiteral("groupBoxOptional"));
        gridLayout_2 = new QGridLayout(groupBoxOptional);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(15, 15, -1, -1);
        lineEditSenderAddress = new AddressField(groupBoxOptional);
        lineEditSenderAddress->setObjectName(QStringLiteral("lineEditSenderAddress"));
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));

        gridLayout_2->addWidget(lineEditSenderAddress, 2, 1, 1, 4);

        labelSenderAddress = new QLabel(groupBoxOptional);
        labelSenderAddress->setObjectName(QStringLiteral("labelSenderAddress"));
        sizePolicy2.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy2);
        labelSenderAddress->setMinimumSize(QSize(130, 0));

        gridLayout_2->addWidget(labelSenderAddress, 2, 0, 1, 1);

        labelGasPrice = new QLabel(groupBoxOptional);
        labelGasPrice->setObjectName(QStringLiteral("labelGasPrice"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelGasPrice->sizePolicy().hasHeightForWidth());
        labelGasPrice->setSizePolicy(sizePolicy3);
        labelGasPrice->setMinimumSize(QSize(90, 0));

        gridLayout_2->addWidget(labelGasPrice, 0, 3, 1, 1);

        labelGasLimit = new QLabel(groupBoxOptional);
        labelGasLimit->setObjectName(QStringLiteral("labelGasLimit"));
        sizePolicy2.setHeightForWidth(labelGasLimit->sizePolicy().hasHeightForWidth());
        labelGasLimit->setSizePolicy(sizePolicy2);
        labelGasLimit->setMinimumSize(QSize(130, 0));

        gridLayout_2->addWidget(labelGasLimit, 0, 0, 1, 1);

        lineEditGasLimit = new QSpinBox(groupBoxOptional);
        lineEditGasLimit->setObjectName(QStringLiteral("lineEditGasLimit"));
        sizePolicy1.setHeightForWidth(lineEditGasLimit->sizePolicy().hasHeightForWidth());
        lineEditGasLimit->setSizePolicy(sizePolicy1);
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEditGasLimit, 0, 1, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(groupBoxOptional);
        lineEditGasPrice->setObjectName(QStringLiteral("lineEditGasPrice"));

        gridLayout_2->addWidget(lineEditGasPrice, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_8->addWidget(groupBoxOptional);

        stackedWidget->addWidget(createContractPage);

        verticalLayout_7->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 9, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonClearAll = new QPushButton(CreateContract);
        pushButtonClearAll->setObjectName(QStringLiteral("pushButtonClearAll"));

        horizontalLayout_3->addWidget(pushButtonClearAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonCreateContract = new QPushButton(CreateContract);
        pushButtonCreateContract->setObjectName(QStringLiteral("pushButtonCreateContract"));

        horizontalLayout_3->addWidget(pushButtonCreateContract);


        verticalLayout_7->addLayout(horizontalLayout_3);


        retranslateUi(CreateContract);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateContract);
    } // setupUi

    void retranslateUi(QWidget *CreateContract)
    {
        CreateContract->setWindowTitle(QApplication::translate("CreateContract", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("CreateContract", "Create Smart Contract", Q_NULLPTR));
        labelSolidity->setText(QApplication::translate("CreateContract", "Solidity", Q_NULLPTR));
        labelToken->setText(QApplication::translate("CreateContract", "Token", Q_NULLPTR));
        labelBytecode->setText(QApplication::translate("CreateContract", "Bytecode", Q_NULLPTR));
        labelInterface->setText(QApplication::translate("CreateContract", "Interface (ABI)", Q_NULLPTR));
        groupBoxConstructor->setTitle(QApplication::translate("CreateContract", "Constructor", Q_NULLPTR));
        groupBoxOptional->setTitle(QApplication::translate("CreateContract", "Optional", Q_NULLPTR));
        labelSenderAddress->setText(QApplication::translate("CreateContract", "Sender Address", Q_NULLPTR));
        labelGasPrice->setText(QApplication::translate("CreateContract", "Gas Price", Q_NULLPTR));
        labelGasLimit->setText(QApplication::translate("CreateContract", "Gas Limit", Q_NULLPTR));
        pushButtonClearAll->setText(QApplication::translate("CreateContract", "Clear All", Q_NULLPTR));
        pushButtonCreateContract->setText(QApplication::translate("CreateContract", "Create Contract", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateContract: public Ui_CreateContract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECONTRACT_H
