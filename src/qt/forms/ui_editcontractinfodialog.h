/********************************************************************************
** Form generated from reading UI file 'editcontractinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCONTRACTINFODIALOG_H
#define UI_EDITCONTRACTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"
#include "qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditContractInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelName;
    QLineEdit *labelEdit;
    QLabel *labelAddress;
    QValidatedLineEdit *addressEdit;
    QValidatedTextEdit *ABIEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelABI;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditContractInfoDialog)
    {
        if (EditContractInfoDialog->objectName().isEmpty())
            EditContractInfoDialog->setObjectName(QStringLiteral("EditContractInfoDialog"));
        EditContractInfoDialog->resize(590, 350);
        verticalLayout = new QVBoxLayout(EditContractInfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 15, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        labelName = new QLabel(EditContractInfoDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        labelEdit = new QLineEdit(EditContractInfoDialog);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));

        gridLayout->addWidget(labelEdit, 0, 1, 1, 1);

        labelAddress = new QLabel(EditContractInfoDialog);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        gridLayout->addWidget(labelAddress, 1, 0, 1, 1);

        addressEdit = new QValidatedLineEdit(EditContractInfoDialog);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        gridLayout->addWidget(addressEdit, 1, 1, 1, 1);

        ABIEdit = new QValidatedTextEdit(EditContractInfoDialog);
        ABIEdit->setObjectName(QStringLiteral("ABIEdit"));

        gridLayout->addWidget(ABIEdit, 2, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelABI = new QLabel(EditContractInfoDialog);
        labelABI->setObjectName(QStringLiteral("labelABI"));

        verticalLayout_3->addWidget(labelABI);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonsContainerWhite = new QWidget(EditContractInfoDialog);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, 15);
        buttonBox = new QDialogButtonBox(buttonsContainerWhite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(EditContractInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditContractInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditContractInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditContractInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *EditContractInfoDialog)
    {
        EditContractInfoDialog->setWindowTitle(QApplication::translate("EditContractInfoDialog", "Dialog", Q_NULLPTR));
        labelName->setText(QApplication::translate("EditContractInfoDialog", "Label", Q_NULLPTR));
        labelAddress->setText(QApplication::translate("EditContractInfoDialog", "Contract Address", Q_NULLPTR));
        labelABI->setText(QApplication::translate("EditContractInfoDialog", "Interface (ABI)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditContractInfoDialog: public Ui_EditContractInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCONTRACTINFODIALOG_H
