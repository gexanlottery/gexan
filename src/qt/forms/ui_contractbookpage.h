/********************************************************************************
** Form generated from reading UI file 'contractbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACTBOOKPAGE_H
#define UI_CONTRACTBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContractBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelExplanation;
    QTableView *tableView;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *newContractInfo;
    QPushButton *copyAddress;
    QPushButton *deleteContractInfo;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportButton;
    QPushButton *chooseContractInfo;

    void setupUi(QWidget *ContractBookPage)
    {
        if (ContractBookPage->objectName().isEmpty())
            ContractBookPage->setObjectName(QStringLiteral("ContractBookPage"));
        ContractBookPage->resize(760, 380);
        verticalLayout = new QVBoxLayout(ContractBookPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 30, 20);
        labelExplanation = new QLabel(ContractBookPage);
        labelExplanation->setObjectName(QStringLiteral("labelExplanation"));

        verticalLayout_2->addWidget(labelExplanation);

        tableView = new QTableView(ContractBookPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);


        verticalLayout->addLayout(verticalLayout_2);

        buttonsContainerWhite = new QWidget(ContractBookPage);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 25, 30, 15);
        newContractInfo = new QPushButton(buttonsContainerWhite);
        newContractInfo->setObjectName(QStringLiteral("newContractInfo"));

        horizontalLayout_2->addWidget(newContractInfo);

        copyAddress = new QPushButton(buttonsContainerWhite);
        copyAddress->setObjectName(QStringLiteral("copyAddress"));

        horizontalLayout_2->addWidget(copyAddress);

        deleteContractInfo = new QPushButton(buttonsContainerWhite);
        deleteContractInfo->setObjectName(QStringLiteral("deleteContractInfo"));

        horizontalLayout_2->addWidget(deleteContractInfo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        exportButton = new QPushButton(buttonsContainerWhite);
        exportButton->setObjectName(QStringLiteral("exportButton"));

        horizontalLayout_2->addWidget(exportButton);

        chooseContractInfo = new QPushButton(buttonsContainerWhite);
        chooseContractInfo->setObjectName(QStringLiteral("chooseContractInfo"));

        horizontalLayout_2->addWidget(chooseContractInfo);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(ContractBookPage);

        QMetaObject::connectSlotsByName(ContractBookPage);
    } // setupUi

    void retranslateUi(QWidget *ContractBookPage)
    {
        ContractBookPage->setWindowTitle(QApplication::translate("ContractBookPage", "Form", Q_NULLPTR));
        labelExplanation->setText(QString());
#ifndef QT_NO_TOOLTIP
        newContractInfo->setToolTip(QApplication::translate("ContractBookPage", "Create a new contract info", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        newContractInfo->setText(QApplication::translate("ContractBookPage", "New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        copyAddress->setToolTip(QApplication::translate("ContractBookPage", "Copy the currently selected contract address to the system clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        copyAddress->setText(QApplication::translate("ContractBookPage", "Copy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        deleteContractInfo->setToolTip(QApplication::translate("ContractBookPage", "Delete the currently selected contract info from the list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        deleteContractInfo->setText(QApplication::translate("ContractBookPage", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("ContractBookPage", "Export the data to a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exportButton->setText(QApplication::translate("ContractBookPage", "Export", Q_NULLPTR));
        chooseContractInfo->setText(QApplication::translate("ContractBookPage", "Choose", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContractBookPage: public Ui_ContractBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACTBOOKPAGE_H
