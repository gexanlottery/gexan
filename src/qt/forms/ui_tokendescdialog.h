/********************************************************************************
** Form generated from reading UI file 'tokendescdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOKENDESCDIALOG_H
#define UI_TOKENDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TokenDescDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TokenDescDialog)
    {
        if (TokenDescDialog->objectName().isEmpty())
            TokenDescDialog->setObjectName(QStringLiteral("TokenDescDialog"));
        TokenDescDialog->resize(620, 250);
        verticalLayout = new QVBoxLayout(TokenDescDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        detailText = new QTextEdit(TokenDescDialog);
        detailText->setObjectName(QStringLiteral("detailText"));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(TokenDescDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TokenDescDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TokenDescDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TokenDescDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TokenDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TokenDescDialog)
    {
        TokenDescDialog->setWindowTitle(QApplication::translate("TokenDescDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TokenDescDialog: public Ui_TokenDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOKENDESCDIALOG_H
