/********************************************************************************
** Form generated from reading UI file 'callcontract.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLCONTRACT_H
#define UI_CALLCONTRACT_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addressfield.h"
#include "qvalidatedlineedit.h"
#include "qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_CallContractPage
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *callContractPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle;
    QFrame *frameContract;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelContractAddress;
    QValidatedTextEdit *textEditInterface;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *lineEditContractAddress;
    QToolButton *loadInfoButton;
    QFrame *vLine;
    QToolButton *pasteAddressButton;
    QFrame *vLine2;
    QToolButton *saveInfoButton;
    QLabel *labelInterface;
    QGroupBox *groupBoxFunction;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollAreaFunction;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBoxOptional;
    QGridLayout *gridLayout_3;
    AddressField *lineEditSenderAddress;
    QLabel *labelSenderAddress;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonCallContract;

    void setupUi(QWidget *CallContractPage)
    {
        if (CallContractPage->objectName().isEmpty())
            CallContractPage->setObjectName(QStringLiteral("CallContractPage"));
        CallContractPage->resize(690, 499);
        verticalLayout = new QVBoxLayout(CallContractPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(CallContractPage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        callContractPage = new QWidget();
        callContractPage->setObjectName(QStringLiteral("callContractPage"));
        verticalLayout_4 = new QVBoxLayout(callContractPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelTitle = new QLabel(callContractPage);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        verticalLayout_4->addWidget(labelTitle);

        frameContract = new QFrame(callContractPage);
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

        labelInterface = new QLabel(frameContract);
        labelInterface->setObjectName(QStringLiteral("labelInterface"));

        gridLayout->addWidget(labelInterface, 1, 0, 1, 1, Qt::AlignTop);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_4->addWidget(frameContract);

        groupBoxFunction = new QGroupBox(callContractPage);
        groupBoxFunction->setObjectName(QStringLiteral("groupBoxFunction"));
        verticalLayout_3 = new QVBoxLayout(groupBoxFunction);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 15, -1, -1);
        scrollAreaFunction = new QScrollArea(groupBoxFunction);
        scrollAreaFunction->setObjectName(QStringLiteral("scrollAreaFunction"));
        scrollAreaFunction->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 640, 155));
        scrollAreaFunction->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollAreaFunction);


        verticalLayout_4->addWidget(groupBoxFunction);

        groupBoxOptional = new QGroupBox(callContractPage);
        groupBoxOptional->setObjectName(QStringLiteral("groupBoxOptional"));
        gridLayout_3 = new QGridLayout(groupBoxOptional);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(15, 15, -1, -1);
        lineEditSenderAddress = new AddressField(groupBoxOptional);
        lineEditSenderAddress->setObjectName(QStringLiteral("lineEditSenderAddress"));
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));

        gridLayout_3->addWidget(lineEditSenderAddress, 0, 1, 1, 1);

        labelSenderAddress = new QLabel(groupBoxOptional);
        labelSenderAddress->setObjectName(QStringLiteral("labelSenderAddress"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy2);
        labelSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout_3->addWidget(labelSenderAddress, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBoxOptional);

        stackedWidget->addWidget(callContractPage);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClearAll = new QPushButton(CallContractPage);
        pushButtonClearAll->setObjectName(QStringLiteral("pushButtonClearAll"));

        horizontalLayout->addWidget(pushButtonClearAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonCallContract = new QPushButton(CallContractPage);
        pushButtonCallContract->setObjectName(QStringLiteral("pushButtonCallContract"));

        horizontalLayout->addWidget(pushButtonCallContract);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CallContractPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CallContractPage);
    } // setupUi

    void retranslateUi(QWidget *CallContractPage)
    {
        CallContractPage->setWindowTitle(QApplication::translate("CallContractPage", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("CallContractPage", "Call Smart Contract", Q_NULLPTR));
        labelContractAddress->setText(QApplication::translate("CallContractPage", "Contract Address", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loadInfoButton->setToolTip(QApplication::translate("CallContractPage", "Choose from contract book page", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        loadInfoButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pasteAddressButton->setToolTip(QApplication::translate("CallContractPage", "Paste contract address from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pasteAddressButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveInfoButton->setToolTip(QApplication::translate("CallContractPage", "Save contract info", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveInfoButton->setText(QString());
        labelInterface->setText(QApplication::translate("CallContractPage", "Interface (ABI)", Q_NULLPTR));
        groupBoxFunction->setTitle(QApplication::translate("CallContractPage", "Function", Q_NULLPTR));
        groupBoxOptional->setTitle(QApplication::translate("CallContractPage", "Optional", Q_NULLPTR));
        labelSenderAddress->setText(QApplication::translate("CallContractPage", "Sender Address", Q_NULLPTR));
        pushButtonClearAll->setText(QApplication::translate("CallContractPage", "Clear All", Q_NULLPTR));
        pushButtonCallContract->setText(QApplication::translate("CallContractPage", "Call Contract", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CallContractPage: public Ui_CallContractPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLCONTRACT_H
