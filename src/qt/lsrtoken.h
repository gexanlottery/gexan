#ifndef GSRTOKEN_H
#define GSRTOKEN_H

#include "sendtokenpage.h"
#include "receivetokenpage.h"
#include "addtokenpage.h"

#include <QWidget>
#include <QModelIndex>
#include <QAbstractItemModel>

class TokenViewDelegate;
class WalletModel;
class ClientModel;
class TokenTransactionView;
class QMenu;
class QSortFilterProxyModel;

namespace Ui {
class GSRToken;
}

class GSRToken : public QWidget
{
    Q_OBJECT

public:
    explicit GSRToken(QWidget *parent = 0);
    ~GSRToken();

    void setModel(WalletModel *_model);
    void setClientModel(ClientModel *clientModel);

    Q_SIGNALS:

public Q_SLOTS:
    void on_goToSendTokenPage();
    void on_goToReceiveTokenPage();
    void on_goToAddTokenPage();
    void on_currentTokenChanged(QModelIndex index);
    void on_dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight, const QVector<int> &roles = QVector<int>());
    void on_currentChanged(QModelIndex current, QModelIndex previous);
    void on_rowsInserted(QModelIndex index, int first, int last);
    void contextualMenu(const QPoint &);
    void copyTokenAddress();
    void copyTokenBalance();
    void copyTokenName();
    void copySenderAddress();
    void removeToken();
    void focusToken(const QModelIndex& index);
private:
    Ui::GSRToken *ui;
    SendTokenPage* m_sendTokenPage;
    ReceiveTokenPage* m_receiveTokenPage;
    AddTokenPage* m_addTokenPage;
    WalletModel* m_model;
    ClientModel* m_clientModel;
    QSortFilterProxyModel* m_tokenModel;
    TokenViewDelegate* m_tokenDelegate;
    QAction *m_sendAction;
    QAction *m_receiveAction;
    QAction *m_addTokenAction;
    QString m_selectedTokenHash;
    TokenTransactionView *m_tokenTransactionView;
    QMenu *contextMenu;
};

#endif // GSRTOKEN_H
