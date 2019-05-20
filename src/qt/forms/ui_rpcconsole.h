/********************************************************************************
** Form generated from reading UI file 'rpcconsole.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_H
#define UI_RPCCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QLabel *berkeleyDBVersionLabel;
    QLabel *networkHeader;
    QLabel *numberOfBlocks;
    QLabel *networkNameLabel;
    QLabel *startupTimeLabel;
    QLabel *numberOfConnectionsLabel;
    QLabel *berkeleyDBVersion;
    QLabel *clientVersion;
    QSpacerItem *verticalSpacer_2;
    QLabel *openSSLVersion;
    QLabel *generalHeader;
    QLabel *blockchainHeader;
    QLabel *buildDateLabel;
    QLabel *openSSLVersionLabel;
    QLabel *buildDate;
    QLabel *startupTime;
    QLabel *clientVersionLabel;
    QLabel *masternodeCountLabel;
    QLabel *masternodeCount;
    QLabel *clientName;
    QLabel *lastBlockTime;
    QLabel *networkName;
    QLabel *lastBlockTimeLabel;
    QLabel *numberOfConnections;
    QLabel *numberOfBlocksLabel;
    QLabel *clientNameLabel;
    QPushButton *switchNetworkActiveButton;
    QLabel *debugLogFileHeader;
    QPushButton *openDebugLogfileButton;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *fontSmallerButton;
    QFrame *vLine;
    QPushButton *fontBiggerButton;
    QFrame *vLine2;
    QPushButton *clearButton;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayoutPrompt;
    QPushButton *promptIcon;
    QLineEdit *lineEdit;
    QWidget *tab_nettraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line;
    QLabel *label_16;
    QLabel *lblBytesIn;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QLabel *label_17;
    QLabel *lblBytesOut;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_peers;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_101;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QLabel *peerHeading;
    QWidget *detailWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_30;
    QLabel *peerWhitelisted;
    QLabel *label_23;
    QLabel *peerDirection;
    QLabel *label_21;
    QLabel *peerVersion;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *label_29;
    QLabel *peerHeight;
    QLabel *label_27;
    QLabel *peerSyncHeight;
    QLabel *label_25;
    QLabel *peerCommonHeight;
    QLabel *label_24;
    QLabel *peerBanScore;
    QLabel *label_22;
    QLabel *peerConnTime;
    QLabel *label_15;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *peerPingWaitLabel;
    QLabel *peerPingWait;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_repair;
    QPushButton *btn_salvagewallet;
    QPushButton *btn_rescan;
    QPushButton *btn_zapwallettxes1;
    QPushButton *btn_zapwallettxes2;
    QPushButton *btn_upgradewallet;
    QLabel *label_repair_helptext;
    QLabel *label_repair_salvage;
    QLabel *label_repair_rescan;
    QLabel *label_repair_zap1;
    QLabel *label_repair_zap2;
    QLabel *label_repair_upgrade;
    QLabel *label_repair_header;
    QPushButton *btn_reindex;
    QLabel *label_repair_reindex;
    QLabel *wallet_path;

    void setupUi(QDialog *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QStringLiteral("RPCConsole"));
        RPCConsole->resize(769, 494);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_info = new QWidget();
        tab_info->setObjectName(QStringLiteral("tab_info"));
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        berkeleyDBVersionLabel = new QLabel(tab_info);
        berkeleyDBVersionLabel->setObjectName(QStringLiteral("berkeleyDBVersionLabel"));
        berkeleyDBVersionLabel->setIndent(10);

        gridLayout->addWidget(berkeleyDBVersionLabel, 4, 0, 1, 1);

        networkHeader = new QLabel(tab_info);
        networkHeader->setObjectName(QStringLiteral("networkHeader"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        networkHeader->setFont(font);

        gridLayout->addWidget(networkHeader, 7, 0, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QStringLiteral("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 13, 1, 1, 1);

        networkNameLabel = new QLabel(tab_info);
        networkNameLabel->setObjectName(QStringLiteral("networkNameLabel"));

        gridLayout->addWidget(networkNameLabel, 8, 0, 1, 1);

        startupTimeLabel = new QLabel(tab_info);
        startupTimeLabel->setObjectName(QStringLiteral("startupTimeLabel"));

        gridLayout->addWidget(startupTimeLabel, 6, 0, 1, 1);

        numberOfConnectionsLabel = new QLabel(tab_info);
        numberOfConnectionsLabel->setObjectName(QStringLiteral("numberOfConnectionsLabel"));

        gridLayout->addWidget(numberOfConnectionsLabel, 9, 0, 1, 1);

        berkeleyDBVersion = new QLabel(tab_info);
        berkeleyDBVersion->setObjectName(QStringLiteral("berkeleyDBVersion"));
        berkeleyDBVersion->setCursor(QCursor(Qt::IBeamCursor));
        berkeleyDBVersion->setTextFormat(Qt::PlainText);
        berkeleyDBVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(berkeleyDBVersion, 4, 1, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QStringLiteral("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 17, 0, 1, 1);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QStringLiteral("openSSLVersion"));
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(openSSLVersion, 3, 1, 1, 1);

        generalHeader = new QLabel(tab_info);
        generalHeader->setObjectName(QStringLiteral("generalHeader"));
        generalHeader->setFont(font);

        gridLayout->addWidget(generalHeader, 0, 0, 1, 1);

        blockchainHeader = new QLabel(tab_info);
        blockchainHeader->setObjectName(QStringLiteral("blockchainHeader"));
        blockchainHeader->setFont(font);

        gridLayout->addWidget(blockchainHeader, 12, 0, 1, 1);

        buildDateLabel = new QLabel(tab_info);
        buildDateLabel->setObjectName(QStringLiteral("buildDateLabel"));

        gridLayout->addWidget(buildDateLabel, 5, 0, 1, 1);

        openSSLVersionLabel = new QLabel(tab_info);
        openSSLVersionLabel->setObjectName(QStringLiteral("openSSLVersionLabel"));
        openSSLVersionLabel->setIndent(10);

        gridLayout->addWidget(openSSLVersionLabel, 3, 0, 1, 1);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QStringLiteral("buildDate"));
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(buildDate, 5, 1, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QStringLiteral("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 6, 1, 1, 1);

        clientVersionLabel = new QLabel(tab_info);
        clientVersionLabel->setObjectName(QStringLiteral("clientVersionLabel"));

        gridLayout->addWidget(clientVersionLabel, 2, 0, 1, 1);

        masternodeCountLabel = new QLabel(tab_info);
        masternodeCountLabel->setObjectName(QStringLiteral("masternodeCountLabel"));

        gridLayout->addWidget(masternodeCountLabel, 10, 0, 1, 1);

        masternodeCount = new QLabel(tab_info);
        masternodeCount->setObjectName(QStringLiteral("masternodeCount"));
        masternodeCount->setCursor(QCursor(Qt::IBeamCursor));

        gridLayout->addWidget(masternodeCount, 10, 1, 1, 1);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QStringLiteral("clientName"));
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientName, 1, 1, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QStringLiteral("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 14, 1, 1, 1);

        networkName = new QLabel(tab_info);
        networkName->setObjectName(QStringLiteral("networkName"));
        networkName->setCursor(QCursor(Qt::IBeamCursor));
        networkName->setTextFormat(Qt::PlainText);
        networkName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(networkName, 8, 1, 1, 1);

        lastBlockTimeLabel = new QLabel(tab_info);
        lastBlockTimeLabel->setObjectName(QStringLiteral("lastBlockTimeLabel"));

        gridLayout->addWidget(lastBlockTimeLabel, 14, 0, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QStringLiteral("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 9, 1, 1, 1);

        numberOfBlocksLabel = new QLabel(tab_info);
        numberOfBlocksLabel->setObjectName(QStringLiteral("numberOfBlocksLabel"));

        gridLayout->addWidget(numberOfBlocksLabel, 13, 0, 1, 1);

        clientNameLabel = new QLabel(tab_info);
        clientNameLabel->setObjectName(QStringLiteral("clientNameLabel"));

        gridLayout->addWidget(clientNameLabel, 1, 0, 1, 1);

        switchNetworkActiveButton = new QPushButton(tab_info);
        switchNetworkActiveButton->setObjectName(QStringLiteral("switchNetworkActiveButton"));
        switchNetworkActiveButton->setAutoDefault(false);

        gridLayout->addWidget(switchNetworkActiveButton, 11, 0, 1, 1);

        debugLogFileHeader = new QLabel(tab_info);
        debugLogFileHeader->setObjectName(QStringLiteral("debugLogFileHeader"));
        debugLogFileHeader->setFont(font);

        gridLayout->addWidget(debugLogFileHeader, 15, 0, 1, 1);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QStringLiteral("openDebugLogfileButton"));
        openDebugLogfileButton->setAutoDefault(false);

        gridLayout->addWidget(openDebugLogfileButton, 16, 0, 1, 1);

        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QStringLiteral("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, 20, 30, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontSmallerButton = new QPushButton(tab_console);
        fontSmallerButton->setObjectName(QStringLiteral("fontSmallerButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/fontsmaller"), QSize(), QIcon::Normal, QIcon::Off);
        fontSmallerButton->setIcon(icon);
        fontSmallerButton->setAutoDefault(false);
        fontSmallerButton->setFlat(true);

        horizontalLayout->addWidget(fontSmallerButton);

        vLine = new QFrame(tab_console);
        vLine->setObjectName(QStringLiteral("vLine"));
        vLine->setMaximumSize(QSize(1, 22));
        vLine->setStyleSheet(QStringLiteral("QFrame{ background: #404041; }"));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(vLine);

        fontBiggerButton = new QPushButton(tab_console);
        fontBiggerButton->setObjectName(QStringLiteral("fontBiggerButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/fontbigger"), QSize(), QIcon::Normal, QIcon::Off);
        fontBiggerButton->setIcon(icon1);
        fontBiggerButton->setAutoDefault(false);
        fontBiggerButton->setFlat(true);

        horizontalLayout->addWidget(fontBiggerButton);

        vLine2 = new QFrame(tab_console);
        vLine2->setObjectName(QStringLiteral("vLine2"));
        vLine2->setMaximumSize(QSize(1, 22));
        vLine2->setStyleSheet(QStringLiteral("QFrame{ background: #404041; }"));
        vLine2->setFrameShape(QFrame::VLine);
        vLine2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(vLine2);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));
        clearButton->setAutoDefault(false);
        clearButton->setFlat(true);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayoutPrompt = new QHBoxLayout();
        horizontalLayoutPrompt->setSpacing(3);
        horizontalLayoutPrompt->setObjectName(QStringLiteral("horizontalLayoutPrompt"));
        promptIcon = new QPushButton(tab_console);
        promptIcon->setObjectName(QStringLiteral("promptIcon"));
        promptIcon->setEnabled(false);
        promptIcon->setMaximumSize(QSize(16, 24));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/prompticon"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icons/prompticon"), QSize(), QIcon::Disabled, QIcon::Off);
        promptIcon->setIcon(icon3);
        promptIcon->setIconSize(QSize(14, 14));
        promptIcon->setAutoDefault(false);
        promptIcon->setFlat(true);

        horizontalLayoutPrompt->addWidget(promptIcon);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayoutPrompt->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayoutPrompt);

        tabWidget->addTab(tab_console, QString());
        tab_nettraffic = new QWidget();
        tab_nettraffic->setObjectName(QStringLiteral("tab_nettraffic"));
        horizontalLayout_3 = new QHBoxLayout(tab_nettraffic);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(tab_nettraffic);
        trafficGraph->setObjectName(QStringLiteral("trafficGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sldGraphRange = new QSlider(tab_nettraffic);
        sldGraphRange->setObjectName(QStringLiteral("sldGraphRange"));
        sldGraphRange->setMinimum(1);
        sldGraphRange->setMaximum(288);
        sldGraphRange->setPageStep(12);
        sldGraphRange->setValue(6);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(tab_nettraffic);
        lblGraphRange->setObjectName(QStringLiteral("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(tab_nettraffic);
        btnClearTrafficGraph->setObjectName(QStringLiteral("btnClearTrafficGraph"));
        btnClearTrafficGraph->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(tab_nettraffic);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(10, 0));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        line->setPalette(palette);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_4->addWidget(label_16);

        lblBytesIn = new QLabel(groupBox);
        lblBytesIn->setObjectName(QStringLiteral("lblBytesIn"));
        lblBytesIn->setMinimumSize(QSize(50, 0));
        lblBytesIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblBytesIn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(10, 0));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);

        lblBytesOut = new QLabel(groupBox);
        lblBytesOut->setObjectName(QStringLiteral("lblBytesOut"));
        lblBytesOut->setMinimumSize(QSize(50, 0));
        lblBytesOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblBytesOut);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 407, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab_nettraffic, QString());
        tab_peers = new QWidget();
        tab_peers->setObjectName(QStringLiteral("tab_peers"));
        gridLayout_2 = new QGridLayout(tab_peers);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_101 = new QVBoxLayout();
        verticalLayout_101->setSpacing(0);
        verticalLayout_101->setObjectName(QStringLiteral("verticalLayout_101"));
        peerWidget = new QTableView(tab_peers);
        peerWidget->setObjectName(QStringLiteral("peerWidget"));
        peerWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        peerWidget->setSortingEnabled(true);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(peerWidget);

        banHeading = new QLabel(tab_peers);
        banHeading->setObjectName(QStringLiteral("banHeading"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy2);
        banHeading->setMinimumSize(QSize(300, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setPointSize(14);
        banHeading->setFont(font1);
        banHeading->setCursor(QCursor(Qt::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_101->addWidget(banHeading);

        banlistWidget = new QTableView(tab_peers);
        banlistWidget->setObjectName(QStringLiteral("banlistWidget"));
        sizePolicy.setHeightForWidth(banlistWidget->sizePolicy().hasHeightForWidth());
        banlistWidget->setSizePolicy(sizePolicy);
        banlistWidget->setMaximumSize(QSize(16777215, 16777215));
        banlistWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(banlistWidget);


        gridLayout_2->addLayout(verticalLayout_101, 0, 0, 2, 1);

        peerHeading = new QLabel(tab_peers);
        peerHeading->setObjectName(QStringLiteral("peerHeading"));
        sizePolicy2.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy2);
        peerHeading->setMinimumSize(QSize(300, 32));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        peerHeading->setFont(font2);
        peerHeading->setCursor(QCursor(Qt::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignCenter);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHeading, 0, 1, 1, 1);

        detailWidget = new QWidget(tab_peers);
        detailWidget->setObjectName(QStringLiteral("detailWidget"));
        detailWidget->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(detailWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_30 = new QLabel(detailWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_3->addWidget(label_30, 0, 0, 1, 1);

        peerWhitelisted = new QLabel(detailWidget);
        peerWhitelisted->setObjectName(QStringLiteral("peerWhitelisted"));
        peerWhitelisted->setCursor(QCursor(Qt::IBeamCursor));
        peerWhitelisted->setTextFormat(Qt::PlainText);
        peerWhitelisted->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerWhitelisted, 0, 2, 1, 1);

        label_23 = new QLabel(detailWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        peerDirection = new QLabel(detailWidget);
        peerDirection->setObjectName(QStringLiteral("peerDirection"));
        peerDirection->setCursor(QCursor(Qt::IBeamCursor));
        peerDirection->setTextFormat(Qt::PlainText);
        peerDirection->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerDirection, 1, 2, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 2, 0, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName(QStringLiteral("peerVersion"));
        peerVersion->setCursor(QCursor(Qt::IBeamCursor));
        peerVersion->setTextFormat(Qt::PlainText);
        peerVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerVersion, 2, 2, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_3->addWidget(label_28, 3, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName(QStringLiteral("peerSubversion"));
        peerSubversion->setCursor(QCursor(Qt::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSubversion, 3, 2, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName(QStringLiteral("peerServices"));
        peerServices->setCursor(QCursor(Qt::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerServices, 4, 2, 1, 1);

        label_29 = new QLabel(detailWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_3->addWidget(label_29, 5, 0, 1, 1);

        peerHeight = new QLabel(detailWidget);
        peerHeight->setObjectName(QStringLiteral("peerHeight"));
        peerHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerHeight->setTextFormat(Qt::PlainText);
        peerHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerHeight, 5, 2, 1, 1);

        label_27 = new QLabel(detailWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_3->addWidget(label_27, 6, 0, 1, 1);

        peerSyncHeight = new QLabel(detailWidget);
        peerSyncHeight->setObjectName(QStringLiteral("peerSyncHeight"));
        peerSyncHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerSyncHeight->setTextFormat(Qt::PlainText);
        peerSyncHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSyncHeight, 6, 2, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_3->addWidget(label_25, 7, 0, 1, 1);

        peerCommonHeight = new QLabel(detailWidget);
        peerCommonHeight->setObjectName(QStringLiteral("peerCommonHeight"));
        peerCommonHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerCommonHeight->setTextFormat(Qt::PlainText);
        peerCommonHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerCommonHeight, 7, 2, 1, 1);

        label_24 = new QLabel(detailWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_3->addWidget(label_24, 8, 0, 1, 1);

        peerBanScore = new QLabel(detailWidget);
        peerBanScore->setObjectName(QStringLiteral("peerBanScore"));
        peerBanScore->setCursor(QCursor(Qt::IBeamCursor));
        peerBanScore->setTextFormat(Qt::PlainText);
        peerBanScore->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBanScore, 8, 2, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 9, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName(QStringLiteral("peerConnTime"));
        peerConnTime->setCursor(QCursor(Qt::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerConnTime, 9, 2, 1, 1);

        label_15 = new QLabel(detailWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 10, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName(QStringLiteral("peerLastSend"));
        peerLastSend->setCursor(QCursor(Qt::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastSend, 10, 2, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 11, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName(QStringLiteral("peerLastRecv"));
        peerLastRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastRecv, 11, 2, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 12, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName(QStringLiteral("peerBytesSent"));
        peerBytesSent->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesSent, 12, 2, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_3->addWidget(label_20, 13, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName(QStringLiteral("peerBytesRecv"));
        peerBytesRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesRecv, 13, 2, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 14, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName(QStringLiteral("peerPingTime"));
        peerPingTime->setCursor(QCursor(Qt::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingTime, 14, 2, 1, 1);

        peerPingWaitLabel = new QLabel(detailWidget);
        peerPingWaitLabel->setObjectName(QStringLiteral("peerPingWaitLabel"));

        gridLayout_3->addWidget(peerPingWaitLabel, 15, 0, 1, 1);

        peerPingWait = new QLabel(detailWidget);
        peerPingWait->setObjectName(QStringLiteral("peerPingWait"));
        peerPingWait->setCursor(QCursor(Qt::IBeamCursor));
        peerPingWait->setTextFormat(Qt::PlainText);
        peerPingWait->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingWait, 15, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 16, 1, 1, 1);


        gridLayout_2->addWidget(detailWidget, 1, 1, 1, 1);

        tabWidget->addTab(tab_peers, QString());
        tab_repair = new QWidget();
        tab_repair->setObjectName(QStringLiteral("tab_repair"));
        btn_salvagewallet = new QPushButton(tab_repair);
        btn_salvagewallet->setObjectName(QStringLiteral("btn_salvagewallet"));
        btn_salvagewallet->setGeometry(QRect(10, 110, 301, 23));
        btn_salvagewallet->setMinimumSize(QSize(180, 23));
        btn_rescan = new QPushButton(tab_repair);
        btn_rescan->setObjectName(QStringLiteral("btn_rescan"));
        btn_rescan->setGeometry(QRect(10, 160, 301, 23));
        btn_rescan->setMinimumSize(QSize(180, 23));
        btn_zapwallettxes1 = new QPushButton(tab_repair);
        btn_zapwallettxes1->setObjectName(QStringLiteral("btn_zapwallettxes1"));
        btn_zapwallettxes1->setGeometry(QRect(10, 210, 301, 23));
        btn_zapwallettxes1->setMinimumSize(QSize(180, 23));
        btn_zapwallettxes2 = new QPushButton(tab_repair);
        btn_zapwallettxes2->setObjectName(QStringLiteral("btn_zapwallettxes2"));
        btn_zapwallettxes2->setGeometry(QRect(10, 260, 301, 23));
        btn_zapwallettxes2->setMinimumSize(QSize(180, 23));
        btn_upgradewallet = new QPushButton(tab_repair);
        btn_upgradewallet->setObjectName(QStringLiteral("btn_upgradewallet"));
        btn_upgradewallet->setGeometry(QRect(10, 310, 301, 23));
        btn_upgradewallet->setMinimumSize(QSize(180, 23));
        label_repair_helptext = new QLabel(tab_repair);
        label_repair_helptext->setObjectName(QStringLiteral("label_repair_helptext"));
        label_repair_helptext->setGeometry(QRect(10, 30, 711, 41));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        label_repair_helptext->setFont(font3);
        label_repair_helptext->setWordWrap(true);
        label_repair_salvage = new QLabel(tab_repair);
        label_repair_salvage->setObjectName(QStringLiteral("label_repair_salvage"));
        label_repair_salvage->setGeometry(QRect(330, 100, 411, 41));
        label_repair_salvage->setWordWrap(true);
        label_repair_rescan = new QLabel(tab_repair);
        label_repair_rescan->setObjectName(QStringLiteral("label_repair_rescan"));
        label_repair_rescan->setGeometry(QRect(330, 150, 411, 41));
        label_repair_rescan->setWordWrap(true);
        label_repair_zap1 = new QLabel(tab_repair);
        label_repair_zap1->setObjectName(QStringLiteral("label_repair_zap1"));
        label_repair_zap1->setGeometry(QRect(330, 200, 411, 41));
        label_repair_zap1->setWordWrap(true);
        label_repair_zap2 = new QLabel(tab_repair);
        label_repair_zap2->setObjectName(QStringLiteral("label_repair_zap2"));
        label_repair_zap2->setGeometry(QRect(330, 250, 411, 41));
        label_repair_zap2->setWordWrap(true);
        label_repair_upgrade = new QLabel(tab_repair);
        label_repair_upgrade->setObjectName(QStringLiteral("label_repair_upgrade"));
        label_repair_upgrade->setGeometry(QRect(330, 300, 411, 41));
        label_repair_upgrade->setWordWrap(true);
        label_repair_header = new QLabel(tab_repair);
        label_repair_header->setObjectName(QStringLiteral("label_repair_header"));
        label_repair_header->setGeometry(QRect(10, 10, 711, 16));
        label_repair_header->setFont(font2);
        label_repair_header->setWordWrap(true);
        btn_reindex = new QPushButton(tab_repair);
        btn_reindex->setObjectName(QStringLiteral("btn_reindex"));
        btn_reindex->setGeometry(QRect(10, 360, 301, 23));
        label_repair_reindex = new QLabel(tab_repair);
        label_repair_reindex->setObjectName(QStringLiteral("label_repair_reindex"));
        label_repair_reindex->setGeometry(QRect(330, 350, 411, 41));
        label_repair_reindex->setWordWrap(true);
        wallet_path = new QLabel(tab_repair);
        wallet_path->setObjectName(QStringLiteral("wallet_path"));
        wallet_path->setGeometry(QRect(10, 70, 711, 21));
        tabWidget->addTab(tab_repair, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QDialog *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "Tools window", Q_NULLPTR));
        berkeleyDBVersionLabel->setText(QApplication::translate("RPCConsole", "Using BerkeleyDB version", Q_NULLPTR));
        networkHeader->setText(QApplication::translate("RPCConsole", "Network", Q_NULLPTR));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        networkNameLabel->setText(QApplication::translate("RPCConsole", "Name", Q_NULLPTR));
        startupTimeLabel->setText(QApplication::translate("RPCConsole", "Startup time", Q_NULLPTR));
        numberOfConnectionsLabel->setText(QApplication::translate("RPCConsole", "Number of connections", Q_NULLPTR));
        berkeleyDBVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        openSSLVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        generalHeader->setText(QApplication::translate("RPCConsole", "General", Q_NULLPTR));
        blockchainHeader->setText(QApplication::translate("RPCConsole", "Block chain", Q_NULLPTR));
        buildDateLabel->setText(QApplication::translate("RPCConsole", "Build date", Q_NULLPTR));
        openSSLVersionLabel->setText(QApplication::translate("RPCConsole", "Using OpenSSL version", Q_NULLPTR));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        clientVersionLabel->setText(QApplication::translate("RPCConsole", "Client version", Q_NULLPTR));
        masternodeCountLabel->setText(QApplication::translate("RPCConsole", "Number of Masternodes", Q_NULLPTR));
        masternodeCount->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        networkName->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        lastBlockTimeLabel->setText(QApplication::translate("RPCConsole", "Last block time", Q_NULLPTR));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        numberOfBlocksLabel->setText(QApplication::translate("RPCConsole", "Current number of blocks", Q_NULLPTR));
        clientNameLabel->setText(QApplication::translate("RPCConsole", "Client name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        switchNetworkActiveButton->setToolTip(QApplication::translate("RPCConsole", "Temporarily switch network activity ON/OFF", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        switchNetworkActiveButton->setText(QApplication::translate("RPCConsole", "&Switch Network Activity", Q_NULLPTR));
        debugLogFileHeader->setText(QApplication::translate("RPCConsole", "Debug log file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the GEX debug log file from the current data directory. This can take a few seconds for large log files.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fontSmallerButton->setToolTip(QApplication::translate("RPCConsole", "Decrease font size", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fontSmallerButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        fontBiggerButton->setToolTip(QApplication::translate("RPCConsole", "Increase font size", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fontBiggerButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        promptIcon->setText(QString());
        lineEdit->setPlaceholderText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", Q_NULLPTR));
        btnClearTrafficGraph->setText(QApplication::translate("RPCConsole", "&Clear", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RPCConsole", "Totals", Q_NULLPTR));
        label_16->setText(QApplication::translate("RPCConsole", "Received", Q_NULLPTR));
        label_17->setText(QApplication::translate("RPCConsole", "Sent", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_nettraffic), QApplication::translate("RPCConsole", "&Network Traffic", Q_NULLPTR));
        banHeading->setText(QApplication::translate("RPCConsole", "Banned peers", Q_NULLPTR));
        peerHeading->setText(QApplication::translate("RPCConsole", "Select a peer to view detailed information.", Q_NULLPTR));
        label_30->setText(QApplication::translate("RPCConsole", "Whitelisted", Q_NULLPTR));
        peerWhitelisted->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_23->setText(QApplication::translate("RPCConsole", "Direction", Q_NULLPTR));
        peerDirection->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_21->setText(QApplication::translate("RPCConsole", "Protocol", Q_NULLPTR));
        peerVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_28->setText(QApplication::translate("RPCConsole", "Version", Q_NULLPTR));
        peerSubversion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_4->setText(QApplication::translate("RPCConsole", "Services", Q_NULLPTR));
        peerServices->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_29->setText(QApplication::translate("RPCConsole", "Starting Height", Q_NULLPTR));
        peerHeight->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_27->setText(QApplication::translate("RPCConsole", "Sync Height", Q_NULLPTR));
        peerSyncHeight->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_25->setText(QApplication::translate("RPCConsole", "Synced Blocks", Q_NULLPTR));
        peerCommonHeight->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_24->setText(QApplication::translate("RPCConsole", "Ban Score", Q_NULLPTR));
        peerBanScore->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_22->setText(QApplication::translate("RPCConsole", "Connection Time", Q_NULLPTR));
        peerConnTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_15->setText(QApplication::translate("RPCConsole", "Last Send", Q_NULLPTR));
        peerLastSend->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_19->setText(QApplication::translate("RPCConsole", "Last Receive", Q_NULLPTR));
        peerLastRecv->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_18->setText(QApplication::translate("RPCConsole", "Bytes Sent", Q_NULLPTR));
        peerBytesSent->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_20->setText(QApplication::translate("RPCConsole", "Bytes Received", Q_NULLPTR));
        peerBytesRecv->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_26->setText(QApplication::translate("RPCConsole", "Ping Time", Q_NULLPTR));
        peerPingTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        peerPingWaitLabel->setToolTip(QApplication::translate("RPCConsole", "The duration of a currently outstanding ping.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        peerPingWaitLabel->setText(QApplication::translate("RPCConsole", "Ping Wait", Q_NULLPTR));
        peerPingWait->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_peers), QApplication::translate("RPCConsole", "&Peers", Q_NULLPTR));
        btn_salvagewallet->setText(QApplication::translate("RPCConsole", "Salvage wallet", Q_NULLPTR));
        btn_rescan->setText(QApplication::translate("RPCConsole", "Rescan blockchain files", Q_NULLPTR));
        btn_zapwallettxes1->setText(QApplication::translate("RPCConsole", "Recover transactions 1", Q_NULLPTR));
        btn_zapwallettxes2->setText(QApplication::translate("RPCConsole", "Recover transactions 2", Q_NULLPTR));
        btn_upgradewallet->setText(QApplication::translate("RPCConsole", "Upgrade wallet format", Q_NULLPTR));
        label_repair_helptext->setText(QApplication::translate("RPCConsole", "The buttons below will restart the wallet with command-line options to repair the wallet, fix issues with corrupt blockhain files or missing/obsolete transactions.", Q_NULLPTR));
        label_repair_salvage->setText(QApplication::translate("RPCConsole", "-salvagewallet: Attempt to recover private keys from a corrupt wallet.dat.", Q_NULLPTR));
        label_repair_rescan->setText(QApplication::translate("RPCConsole", "-rescan: Rescan the block chain for missing wallet transactions.", Q_NULLPTR));
        label_repair_zap1->setText(QApplication::translate("RPCConsole", "-zapwallettxes=1: Recover transactions from blockchain (keep meta-data, e.g. account owner).", Q_NULLPTR));
        label_repair_zap2->setText(QApplication::translate("RPCConsole", "-zapwallettxes=2: Recover transactions from blockchain (drop meta-data).", Q_NULLPTR));
        label_repair_upgrade->setText(QApplication::translate("RPCConsole", "-upgradewallet: Upgrade wallet to latest format on startup. (Note: this is NOT an update of the wallet itself!)", Q_NULLPTR));
        label_repair_header->setText(QApplication::translate("RPCConsole", "Wallet repair options.", Q_NULLPTR));
        btn_reindex->setText(QApplication::translate("RPCConsole", "Rebuild index", Q_NULLPTR));
        label_repair_reindex->setText(QApplication::translate("RPCConsole", "-reindex: Rebuild block chain index from current blk000??.dat files.", Q_NULLPTR));
        wallet_path->setText(QApplication::translate("RPCConsole", "Wallet Path", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_repair), QApplication::translate("RPCConsole", "&Wallet Repair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_H
