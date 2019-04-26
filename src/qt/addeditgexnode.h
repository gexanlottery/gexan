#ifndef ADDEDITGEXNODE_H
#define ADDEDITGEXNODE_H

#include <QDialog>

namespace Ui {
class AddEditGexNode;
}


class AddEditGexNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditGexNode(QWidget *parent = 0);
    ~AddEditGexNode();

protected:

private Q_SLOTS:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditGexNode *ui;
};

#endif // ADDEDITGEXNODE_H
