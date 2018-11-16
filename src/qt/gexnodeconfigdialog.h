#ifndef GEXNODECONFIGDIALOG_H
#define GEXNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class GexNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class GexNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GexNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:28666", QString privkey="MASTERNODEPRIVKEY");
    ~GexNodeConfigDialog();

private:
    Ui::GexNodeConfigDialog *ui;
};

#endif // GEXNODECONFIGDIALOG_H
