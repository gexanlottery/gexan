/********************************************************************************
** Form generated from reading UI file 'gexnodeconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEXNODECONFIGDIALOG_H
#define UI_GEXNODECONFIGDIALOG_H

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

class Ui_GexNodeConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GexNodeConfigDialog)
    {
        if (GexNodeConfigDialog->objectName().isEmpty())
            GexNodeConfigDialog->setObjectName(QStringLiteral("GexNodeConfigDialog"));
        GexNodeConfigDialog->resize(620, 250);
        verticalLayout = new QVBoxLayout(GexNodeConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        detailText = new QTextEdit(GexNodeConfigDialog);
        detailText->setObjectName(QStringLiteral("detailText"));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(GexNodeConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GexNodeConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GexNodeConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GexNodeConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GexNodeConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *GexNodeConfigDialog)
    {
        GexNodeConfigDialog->setWindowTitle(QApplication::translate("GexNodeConfigDialog", "Masternode Configuration Template", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("GexNodeConfigDialog", "<html><head/><body><p>This pane shows an example Gexan.conf template with the necessary masternode settings.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class GexNodeConfigDialog: public Ui_GexNodeConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEXNODECONFIGDIALOG_H
