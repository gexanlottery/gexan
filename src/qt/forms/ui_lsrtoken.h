/********************************************************************************
** Form generated from reading UI file 'lsrtoken.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LSRTOKEN_H
#define UI_LSRTOKEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LSRToken
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QListView *tokensList;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *sendButton;
    QToolButton *receiveButton;
    QToolButton *addTokenButton;
    QStackedWidget *stackedWidget;
    QVBoxLayout *tokenViewLayout;

    void setupUi(QWidget *LSRToken)
    {
        if (LSRToken->objectName().isEmpty())
            LSRToken->setObjectName(QStringLiteral("LSRToken"));
        LSRToken->resize(723, 467);
        verticalLayout_2 = new QVBoxLayout(LSRToken);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tokensList = new QListView(LSRToken);
        tokensList->setObjectName(QStringLiteral("tokensList"));
        tokensList->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(tokensList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sendButton = new QToolButton(LSRToken);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        sendButton->setMinimumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(sendButton);

        receiveButton = new QToolButton(LSRToken);
        receiveButton->setObjectName(QStringLiteral("receiveButton"));
        sizePolicy.setHeightForWidth(receiveButton->sizePolicy().hasHeightForWidth());
        receiveButton->setSizePolicy(sizePolicy);
        receiveButton->setMinimumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(receiveButton);

        addTokenButton = new QToolButton(LSRToken);
        addTokenButton->setObjectName(QStringLiteral("addTokenButton"));
        sizePolicy.setHeightForWidth(addTokenButton->sizePolicy().hasHeightForWidth());
        addTokenButton->setSizePolicy(sizePolicy);
        addTokenButton->setMinimumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(addTokenButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        stackedWidget = new QStackedWidget(LSRToken);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout);

        tokenViewLayout = new QVBoxLayout();
        tokenViewLayout->setObjectName(QStringLiteral("tokenViewLayout"));

        verticalLayout_2->addLayout(tokenViewLayout);


        retranslateUi(LSRToken);

        QMetaObject::connectSlotsByName(LSRToken);
    } // setupUi

    void retranslateUi(QWidget *LSRToken)
    {
        LSRToken->setWindowTitle(QApplication::translate("LSRToken", "Form", Q_NULLPTR));
        sendButton->setText(QApplication::translate("LSRToken", "Send", Q_NULLPTR));
        receiveButton->setText(QApplication::translate("LSRToken", "Receive", Q_NULLPTR));
        addTokenButton->setText(QApplication::translate("LSRToken", "AddToken", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LSRToken: public Ui_LSRToken {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LSRTOKEN_H
