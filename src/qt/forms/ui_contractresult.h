/********************************************************************************
** Form generated from reading UI file 'contractresult.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACTRESULT_H
#define UI_CONTRACTRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContractResult
{
public:
    QWidget *pageCreateOrSendToResult;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxCreateOrSendTo;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditTxID;
    QLabel *labelContractAddress;
    QLabel *labelHash160;
    QLineEdit *lineEditContractAddress;
    QLabel *labelSenderAddress;
    QLineEdit *lineEditHash160;
    QLineEdit *lineEditSenderAddress;
    QLabel *labelTxID;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupContractBookOptional;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *toContractBook;
    QWidget *widgetOptionalLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *contractLabel;
    QPushButton *okButton;
    QWidget *pageCallResult;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxCallContract;
    QGridLayout *gridLayout;
    QLabel *labelCallContractAddress;
    QLineEdit *lineEditCallContractAddress;
    QScrollArea *scrollAreaParams;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelFunction;
    QLineEdit *lineEditFunction;
    QLineEdit *lineEditCallSenderAddress;
    QLabel *labelCallSenderAddress;
    QGroupBox *groupBoxResult;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollAreaResult;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QStackedWidget *ContractResult)
    {
        if (ContractResult->objectName().isEmpty())
            ContractResult->setObjectName(QStringLiteral("ContractResult"));
        ContractResult->resize(941, 503);
        ContractResult->setStyleSheet(QLatin1String("QLineEdit{\n"
" border: 0px;\n"
"background: transparent;\n"
"}"));
        pageCreateOrSendToResult = new QWidget();
        pageCreateOrSendToResult->setObjectName(QStringLiteral("pageCreateOrSendToResult"));
        verticalLayout_3 = new QVBoxLayout(pageCreateOrSendToResult);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxCreateOrSendTo = new QGroupBox(pageCreateOrSendToResult);
        groupBoxCreateOrSendTo->setObjectName(QStringLiteral("groupBoxCreateOrSendTo"));
        gridLayout_2 = new QGridLayout(groupBoxCreateOrSendTo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(15, 15, -1, -1);
        lineEditTxID = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditTxID->setObjectName(QStringLiteral("lineEditTxID"));
        lineEditTxID->setMinimumSize(QSize(370, 0));
        lineEditTxID->setReadOnly(true);

        gridLayout_2->addWidget(lineEditTxID, 0, 1, 1, 1);

        labelContractAddress = new QLabel(groupBoxCreateOrSendTo);
        labelContractAddress->setObjectName(QStringLiteral("labelContractAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelContractAddress->sizePolicy().hasHeightForWidth());
        labelContractAddress->setSizePolicy(sizePolicy);
        labelContractAddress->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelContractAddress, 3, 0, 1, 1);

        labelHash160 = new QLabel(groupBoxCreateOrSendTo);
        labelHash160->setObjectName(QStringLiteral("labelHash160"));
        sizePolicy.setHeightForWidth(labelHash160->sizePolicy().hasHeightForWidth());
        labelHash160->setSizePolicy(sizePolicy);
        labelHash160->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelHash160, 2, 0, 1, 1);

        lineEditContractAddress = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditContractAddress->setObjectName(QStringLiteral("lineEditContractAddress"));
        lineEditContractAddress->setEnabled(true);
        lineEditContractAddress->setMinimumSize(QSize(370, 0));
        lineEditContractAddress->setReadOnly(true);

        gridLayout_2->addWidget(lineEditContractAddress, 3, 1, 1, 1);

        labelSenderAddress = new QLabel(groupBoxCreateOrSendTo);
        labelSenderAddress->setObjectName(QStringLiteral("labelSenderAddress"));
        sizePolicy.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy);
        labelSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelSenderAddress, 1, 0, 1, 1);

        lineEditHash160 = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditHash160->setObjectName(QStringLiteral("lineEditHash160"));
        lineEditHash160->setMinimumSize(QSize(370, 0));
        lineEditHash160->setReadOnly(true);

        gridLayout_2->addWidget(lineEditHash160, 2, 1, 1, 1);

        lineEditSenderAddress = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditSenderAddress->setObjectName(QStringLiteral("lineEditSenderAddress"));
        lineEditSenderAddress->setEnabled(true);
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));
        lineEditSenderAddress->setReadOnly(true);

        gridLayout_2->addWidget(lineEditSenderAddress, 1, 1, 1, 1);

        labelTxID = new QLabel(groupBoxCreateOrSendTo);
        labelTxID->setObjectName(QStringLiteral("labelTxID"));
        sizePolicy.setHeightForWidth(labelTxID->sizePolicy().hasHeightForWidth());
        labelTxID->setSizePolicy(sizePolicy);
        labelTxID->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelTxID, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBoxCreateOrSendTo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupContractBookOptional = new QGroupBox(pageCreateOrSendToResult);
        groupContractBookOptional->setObjectName(QStringLiteral("groupContractBookOptional"));
        groupContractBookOptional->setEnabled(true);
        verticalLayout_6 = new QVBoxLayout(groupContractBookOptional);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        toContractBook = new QCheckBox(groupContractBookOptional);
        toContractBook->setObjectName(QStringLiteral("toContractBook"));

        verticalLayout_6->addWidget(toContractBook);

        widgetOptionalLabel = new QWidget(groupContractBookOptional);
        widgetOptionalLabel->setObjectName(QStringLiteral("widgetOptionalLabel"));
        horizontalLayout_2 = new QHBoxLayout(widgetOptionalLabel);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, -1, -1, -1);
        label = new QLabel(widgetOptionalLabel);
        label->setObjectName(QStringLiteral("label"));
        label->setMargin(-1);
        label->setIndent(0);

        horizontalLayout_2->addWidget(label);

        contractLabel = new QLineEdit(widgetOptionalLabel);
        contractLabel->setObjectName(QStringLiteral("contractLabel"));
        contractLabel->setEnabled(false);
        contractLabel->setAutoFillBackground(true);
        contractLabel->setMaxLength(150);

        horizontalLayout_2->addWidget(contractLabel);


        verticalLayout_6->addWidget(widgetOptionalLabel);

        okButton = new QPushButton(groupContractBookOptional);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMaximumSize(QSize(80, 30));
        okButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_6->addWidget(okButton, 0, Qt::AlignRight);


        verticalLayout_3->addWidget(groupContractBookOptional);

        ContractResult->addWidget(pageCreateOrSendToResult);
        pageCallResult = new QWidget();
        pageCallResult->setObjectName(QStringLiteral("pageCallResult"));
        verticalLayout = new QVBoxLayout(pageCallResult);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxCallContract = new QGroupBox(pageCallResult);
        groupBoxCallContract->setObjectName(QStringLiteral("groupBoxCallContract"));
        groupBoxCallContract->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(groupBoxCallContract);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(15, 15, -1, -1);
        labelCallContractAddress = new QLabel(groupBoxCallContract);
        labelCallContractAddress->setObjectName(QStringLiteral("labelCallContractAddress"));
        sizePolicy.setHeightForWidth(labelCallContractAddress->sizePolicy().hasHeightForWidth());
        labelCallContractAddress->setSizePolicy(sizePolicy);
        labelCallContractAddress->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(labelCallContractAddress, 0, 0, 1, 1);

        lineEditCallContractAddress = new QLineEdit(groupBoxCallContract);
        lineEditCallContractAddress->setObjectName(QStringLiteral("lineEditCallContractAddress"));
        lineEditCallContractAddress->setEnabled(true);
        lineEditCallContractAddress->setMinimumSize(QSize(370, 0));
        lineEditCallContractAddress->setReadOnly(true);

        gridLayout->addWidget(lineEditCallContractAddress, 0, 1, 1, 1);

        scrollAreaParams = new QScrollArea(groupBoxCallContract);
        scrollAreaParams->setObjectName(QStringLiteral("scrollAreaParams"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaParams->sizePolicy().hasHeightForWidth());
        scrollAreaParams->setSizePolicy(sizePolicy1);
        scrollAreaParams->setStyleSheet(QStringLiteral(""));
        scrollAreaParams->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaParams->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 889, 76));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollAreaParams->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollAreaParams, 2, 0, 1, 2);

        labelFunction = new QLabel(groupBoxCallContract);
        labelFunction->setObjectName(QStringLiteral("labelFunction"));
        sizePolicy.setHeightForWidth(labelFunction->sizePolicy().hasHeightForWidth());
        labelFunction->setSizePolicy(sizePolicy);
        labelFunction->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(labelFunction, 1, 0, 1, 1);

        lineEditFunction = new QLineEdit(groupBoxCallContract);
        lineEditFunction->setObjectName(QStringLiteral("lineEditFunction"));
        lineEditFunction->setEnabled(true);
        lineEditFunction->setMinimumSize(QSize(370, 0));
        lineEditFunction->setReadOnly(true);

        gridLayout->addWidget(lineEditFunction, 1, 1, 1, 1);

        lineEditCallSenderAddress = new QLineEdit(groupBoxCallContract);
        lineEditCallSenderAddress->setObjectName(QStringLiteral("lineEditCallSenderAddress"));
        lineEditCallSenderAddress->setEnabled(true);
        lineEditCallSenderAddress->setMinimumSize(QSize(370, 0));
        lineEditCallSenderAddress->setReadOnly(true);

        gridLayout->addWidget(lineEditCallSenderAddress, 3, 1, 1, 1);

        labelCallSenderAddress = new QLabel(groupBoxCallContract);
        labelCallSenderAddress->setObjectName(QStringLiteral("labelCallSenderAddress"));
        sizePolicy.setHeightForWidth(labelCallSenderAddress->sizePolicy().hasHeightForWidth());
        labelCallSenderAddress->setSizePolicy(sizePolicy);
        labelCallSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(labelCallSenderAddress, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBoxCallContract);

        groupBoxResult = new QGroupBox(pageCallResult);
        groupBoxResult->setObjectName(QStringLiteral("groupBoxResult"));
        verticalLayout_2 = new QVBoxLayout(groupBoxResult);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 9, -1);
        scrollAreaResult = new QScrollArea(groupBoxResult);
        scrollAreaResult->setObjectName(QStringLiteral("scrollAreaResult"));
        sizePolicy1.setHeightForWidth(scrollAreaResult->sizePolicy().hasHeightForWidth());
        scrollAreaResult->setSizePolicy(sizePolicy1);
        scrollAreaResult->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaResult->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 889, 76));
        scrollAreaResult->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollAreaResult);


        verticalLayout->addWidget(groupBoxResult);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        ContractResult->addWidget(pageCallResult);

        retranslateUi(ContractResult);

        ContractResult->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ContractResult);
    } // setupUi

    void retranslateUi(QStackedWidget *ContractResult)
    {
        ContractResult->setWindowTitle(QApplication::translate("ContractResult", "StackedWidget", Q_NULLPTR));
        groupBoxCreateOrSendTo->setTitle(QApplication::translate("ContractResult", "Contract Summary", Q_NULLPTR));
        labelContractAddress->setText(QApplication::translate("ContractResult", "ContractAddress", Q_NULLPTR));
        labelHash160->setText(QApplication::translate("ContractResult", "Hash160", Q_NULLPTR));
        labelSenderAddress->setText(QApplication::translate("ContractResult", "SenderAddress", Q_NULLPTR));
        labelTxID->setText(QApplication::translate("ContractResult", "Transaction ID", Q_NULLPTR));
        groupContractBookOptional->setTitle(QApplication::translate("ContractResult", "Contract Book", Q_NULLPTR));
        toContractBook->setText(QApplication::translate("ContractResult", "Save contract to Contract Book", Q_NULLPTR));
        label->setText(QApplication::translate("ContractResult", "Contract label", Q_NULLPTR));
        contractLabel->setPlaceholderText(QApplication::translate("ContractResult", "Set contract label", Q_NULLPTR));
        okButton->setText(QApplication::translate("ContractResult", "OK", Q_NULLPTR));
        groupBoxCallContract->setTitle(QApplication::translate("ContractResult", "Contract Summary", Q_NULLPTR));
        labelCallContractAddress->setText(QApplication::translate("ContractResult", "Contract Address", Q_NULLPTR));
        labelFunction->setText(QApplication::translate("ContractResult", "Function", Q_NULLPTR));
        labelCallSenderAddress->setText(QApplication::translate("ContractResult", "Sender Address", Q_NULLPTR));
        groupBoxResult->setTitle(QApplication::translate("ContractResult", "Result", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContractResult: public Ui_ContractResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACTRESULT_H
