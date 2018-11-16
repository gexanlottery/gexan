/****************************************************************************
** Meta object code from reading C++ file 'tradingdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/tradingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tradingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tradingDialog_t {
    QByteArrayData data[118];
    char stringdata0[2094];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tradingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tradingDialog_t qt_meta_stringdata_tradingDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "tradingDialog"
QT_MOC_LITERAL(1, 14, 11), // "InitTrading"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 33), // "on_TradingTabWidget_tabBarCli..."
QT_MOC_LITERAL(4, 61, 5), // "index"
QT_MOC_LITERAL(5, 67, 31), // "ParseAndPopulateOrderBookTables"
QT_MOC_LITERAL(6, 99, 8), // "Response"
QT_MOC_LITERAL(7, 108, 26), // "ParseAndPopulatePriceChart"
QT_MOC_LITERAL(8, 135, 34), // "ParseAndPopulateMarketHistory..."
QT_MOC_LITERAL(9, 170, 35), // "ParseAndPopulateAccountHistor..."
QT_MOC_LITERAL(10, 206, 31), // "ParseAndPopulateOpenOrdersTable"
QT_MOC_LITERAL(11, 238, 15), // "UpdaterFunction"
QT_MOC_LITERAL(12, 254, 21), // "CreateOrderBookTables"
QT_MOC_LITERAL(13, 276, 13), // "QTableWidget&"
QT_MOC_LITERAL(14, 290, 5), // "Table"
QT_MOC_LITERAL(15, 296, 11), // "TableHeader"
QT_MOC_LITERAL(16, 308, 14), // "DisplayBalance"
QT_MOC_LITERAL(17, 323, 7), // "QLabel&"
QT_MOC_LITERAL(18, 331, 12), // "BalanceLabel"
QT_MOC_LITERAL(19, 344, 9), // "Available"
QT_MOC_LITERAL(20, 354, 7), // "Pending"
QT_MOC_LITERAL(21, 362, 8), // "Currency"
QT_MOC_LITERAL(22, 371, 13), // "BalanceLabel2"
QT_MOC_LITERAL(23, 385, 9), // "Response2"
QT_MOC_LITERAL(24, 395, 15), // "ActionsOnSwitch"
QT_MOC_LITERAL(25, 411, 15), // "CancelOrderSlot"
QT_MOC_LITERAL(26, 427, 3), // "row"
QT_MOC_LITERAL(27, 431, 3), // "col"
QT_MOC_LITERAL(28, 435, 17), // "BidInfoInsertSlot"
QT_MOC_LITERAL(29, 453, 17), // "AskInfoInsertSlot"
QT_MOC_LITERAL(30, 471, 19), // "on_LoadKeys_clicked"
QT_MOC_LITERAL(31, 491, 19), // "on_SaveKeys_clicked"
QT_MOC_LITERAL(32, 511, 24), // "on_GenDepositBTN_clicked"
QT_MOC_LITERAL(33, 536, 34), // "showMarketHistoryWhenReplyFin..."
QT_MOC_LITERAL(34, 571, 28), // "showBalanceOfGEXOnTradingTab"
QT_MOC_LITERAL(35, 600, 28), // "showBalanceOfBTCOnTradingTab"
QT_MOC_LITERAL(36, 629, 25), // "showOrderBookOnTradingTab"
QT_MOC_LITERAL(37, 655, 29), // "showMarketHistoryOnTradingTab"
QT_MOC_LITERAL(38, 685, 25), // "showBalanceOfBTCOnSendTab"
QT_MOC_LITERAL(39, 711, 25), // "showBalanceOfGEXOnSendTab"
QT_MOC_LITERAL(40, 737, 28), // "showBalanceOfGEXOnBalanceTab"
QT_MOC_LITERAL(41, 766, 28), // "showBalanceOfBTCOnBalanceTab"
QT_MOC_LITERAL(42, 795, 14), // "showOpenOrders"
QT_MOC_LITERAL(43, 810, 18), // "showAccountHistory"
QT_MOC_LITERAL(44, 829, 13), // "slotReadyRead"
QT_MOC_LITERAL(45, 843, 10), // "slotError1"
QT_MOC_LITERAL(46, 854, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(47, 882, 1), // "e"
QT_MOC_LITERAL(48, 884, 21), // "CalculateBuyCostLabel"
QT_MOC_LITERAL(49, 906, 25), // "on_Buy_Max_Amount_clicked"
QT_MOC_LITERAL(50, 932, 25), // "on_UnitsInput_textChanged"
QT_MOC_LITERAL(51, 958, 4), // "arg1"
QT_MOC_LITERAL(52, 963, 30), // "on_BuyBidPriceEdit_textChanged"
QT_MOC_LITERAL(53, 994, 17), // "on_BuyGEX_clicked"
QT_MOC_LITERAL(54, 1012, 22), // "CalculateSellCostLabel"
QT_MOC_LITERAL(55, 1035, 26), // "on_Sell_Max_Amount_clicked"
QT_MOC_LITERAL(56, 1062, 28), // "on_UnitsInputGEX_textChanged"
QT_MOC_LITERAL(57, 1091, 31), // "on_SellBidPriceEdit_textChanged"
QT_MOC_LITERAL(58, 1123, 21), // "on_SellGEXBTN_clicked"
QT_MOC_LITERAL(59, 1145, 23), // "CalculateCSReceiveLabel"
QT_MOC_LITERAL(60, 1169, 27), // "on_CSUnitsInput_textChanged"
QT_MOC_LITERAL(61, 1197, 21), // "on_CSUnitsBtn_clicked"
QT_MOC_LITERAL(62, 1219, 24), // "on_CS_Max_Amount_clicked"
QT_MOC_LITERAL(63, 1244, 30), // "on_Withdraw_Max_Amount_clicked"
QT_MOC_LITERAL(64, 1275, 27), // "on_WithdrawUnitsBtn_clicked"
QT_MOC_LITERAL(65, 1303, 25), // "on_KeyPasteButton_clicked"
QT_MOC_LITERAL(66, 1329, 28), // "on_SecretPasteButton_clicked"
QT_MOC_LITERAL(67, 1358, 24), // "on_CSPasteButton_clicked"
QT_MOC_LITERAL(68, 1383, 30), // "on_WithdrawPasteButton_clicked"
QT_MOC_LITERAL(69, 1414, 28), // "on_DepositCopyButton_clicked"
QT_MOC_LITERAL(70, 1443, 25), // "SetExchangeInfoTextLabels"
QT_MOC_LITERAL(71, 1469, 28), // "CryptopiaTimeStampToReadable"
QT_MOC_LITERAL(72, 1498, 8), // "DateTime"
QT_MOC_LITERAL(73, 1507, 35), // "CryptopiaIntegerTimeStampToRe..."
QT_MOC_LITERAL(74, 1543, 11), // "CancelOrder"
QT_MOC_LITERAL(75, 1555, 7), // "Orderid"
QT_MOC_LITERAL(76, 1563, 6), // "BuyGEX"
QT_MOC_LITERAL(77, 1570, 9), // "OrderType"
QT_MOC_LITERAL(78, 1580, 8), // "Quantity"
QT_MOC_LITERAL(79, 1589, 4), // "Rate"
QT_MOC_LITERAL(80, 1594, 7), // "SellGEX"
QT_MOC_LITERAL(81, 1602, 8), // "Withdraw"
QT_MOC_LITERAL(82, 1611, 6), // "Amount"
QT_MOC_LITERAL(83, 1618, 7), // "Address"
QT_MOC_LITERAL(84, 1626, 4), // "Coin"
QT_MOC_LITERAL(85, 1631, 16), // "GetMarketHistory"
QT_MOC_LITERAL(86, 1648, 16), // "GetMarketSummary"
QT_MOC_LITERAL(87, 1665, 12), // "GetOrderBook"
QT_MOC_LITERAL(88, 1678, 13), // "GetOpenOrders"
QT_MOC_LITERAL(89, 1692, 17), // "GetAccountHistory"
QT_MOC_LITERAL(90, 1710, 10), // "GetBalance"
QT_MOC_LITERAL(91, 1721, 17), // "GetDepositAddress"
QT_MOC_LITERAL(92, 1739, 18), // "HMAC_SHA256_SIGNER"
QT_MOC_LITERAL(93, 1758, 14), // "unsigned char*"
QT_MOC_LITERAL(94, 1773, 9), // "UrlToSign"
QT_MOC_LITERAL(95, 1783, 9), // "Secretkey"
QT_MOC_LITERAL(96, 1793, 11), // "sendRequest"
QT_MOC_LITERAL(97, 1805, 3), // "url"
QT_MOC_LITERAL(98, 1809, 6), // "method"
QT_MOC_LITERAL(99, 1816, 4), // "body"
QT_MOC_LITERAL(100, 1821, 12), // "sendRequest1"
QT_MOC_LITERAL(101, 1834, 25), // "std::function<void(void)>"
QT_MOC_LITERAL(102, 1860, 31), // "funcForCallAfterReceiveResponse"
QT_MOC_LITERAL(103, 1892, 14), // "encryptDecrypt"
QT_MOC_LITERAL(104, 1907, 6), // "string"
QT_MOC_LITERAL(105, 1914, 9), // "toEncrypt"
QT_MOC_LITERAL(106, 1924, 8), // "password"
QT_MOC_LITERAL(107, 1933, 6), // "base64"
QT_MOC_LITERAL(108, 1940, 5), // "char*"
QT_MOC_LITERAL(109, 1946, 20), // "const unsigned char*"
QT_MOC_LITERAL(110, 1967, 5), // "input"
QT_MOC_LITERAL(111, 1973, 6), // "length"
QT_MOC_LITERAL(112, 1980, 10), // "url_encode"
QT_MOC_LITERAL(113, 1991, 5), // "value"
QT_MOC_LITERAL(114, 1997, 29), // "GetResultObjectFromJSONObject"
QT_MOC_LITERAL(115, 2027, 8), // "response"
QT_MOC_LITERAL(116, 2036, 28), // "GetResultObjectFromJSONArray"
QT_MOC_LITERAL(117, 2065, 28) // "GetResultArrayFromJSONObject"

    },
    "tradingDialog\0InitTrading\0\0"
    "on_TradingTabWidget_tabBarClicked\0"
    "index\0ParseAndPopulateOrderBookTables\0"
    "Response\0ParseAndPopulatePriceChart\0"
    "ParseAndPopulateMarketHistoryTable\0"
    "ParseAndPopulateAccountHistoryTable\0"
    "ParseAndPopulateOpenOrdersTable\0"
    "UpdaterFunction\0CreateOrderBookTables\0"
    "QTableWidget&\0Table\0TableHeader\0"
    "DisplayBalance\0QLabel&\0BalanceLabel\0"
    "Available\0Pending\0Currency\0BalanceLabel2\0"
    "Response2\0ActionsOnSwitch\0CancelOrderSlot\0"
    "row\0col\0BidInfoInsertSlot\0AskInfoInsertSlot\0"
    "on_LoadKeys_clicked\0on_SaveKeys_clicked\0"
    "on_GenDepositBTN_clicked\0"
    "showMarketHistoryWhenReplyFinished\0"
    "showBalanceOfGEXOnTradingTab\0"
    "showBalanceOfBTCOnTradingTab\0"
    "showOrderBookOnTradingTab\0"
    "showMarketHistoryOnTradingTab\0"
    "showBalanceOfBTCOnSendTab\0"
    "showBalanceOfGEXOnSendTab\0"
    "showBalanceOfGEXOnBalanceTab\0"
    "showBalanceOfBTCOnBalanceTab\0"
    "showOpenOrders\0showAccountHistory\0"
    "slotReadyRead\0slotError1\0"
    "QNetworkReply::NetworkError\0e\0"
    "CalculateBuyCostLabel\0on_Buy_Max_Amount_clicked\0"
    "on_UnitsInput_textChanged\0arg1\0"
    "on_BuyBidPriceEdit_textChanged\0"
    "on_BuyGEX_clicked\0CalculateSellCostLabel\0"
    "on_Sell_Max_Amount_clicked\0"
    "on_UnitsInputGEX_textChanged\0"
    "on_SellBidPriceEdit_textChanged\0"
    "on_SellGEXBTN_clicked\0CalculateCSReceiveLabel\0"
    "on_CSUnitsInput_textChanged\0"
    "on_CSUnitsBtn_clicked\0on_CS_Max_Amount_clicked\0"
    "on_Withdraw_Max_Amount_clicked\0"
    "on_WithdrawUnitsBtn_clicked\0"
    "on_KeyPasteButton_clicked\0"
    "on_SecretPasteButton_clicked\0"
    "on_CSPasteButton_clicked\0"
    "on_WithdrawPasteButton_clicked\0"
    "on_DepositCopyButton_clicked\0"
    "SetExchangeInfoTextLabels\0"
    "CryptopiaTimeStampToReadable\0DateTime\0"
    "CryptopiaIntegerTimeStampToReadable\0"
    "CancelOrder\0Orderid\0BuyGEX\0OrderType\0"
    "Quantity\0Rate\0SellGEX\0Withdraw\0Amount\0"
    "Address\0Coin\0GetMarketHistory\0"
    "GetMarketSummary\0GetOrderBook\0"
    "GetOpenOrders\0GetAccountHistory\0"
    "GetBalance\0GetDepositAddress\0"
    "HMAC_SHA256_SIGNER\0unsigned char*\0"
    "UrlToSign\0Secretkey\0sendRequest\0url\0"
    "method\0body\0sendRequest1\0"
    "std::function<void(void)>\0"
    "funcForCallAfterReceiveResponse\0"
    "encryptDecrypt\0string\0toEncrypt\0"
    "password\0base64\0char*\0const unsigned char*\0"
    "input\0length\0url_encode\0value\0"
    "GetResultObjectFromJSONObject\0response\0"
    "GetResultObjectFromJSONArray\0"
    "GetResultArrayFromJSONObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tradingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      80,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  414,    2, 0x08 /* Private */,
       3,    1,  415,    2, 0x08 /* Private */,
       5,    1,  418,    2, 0x08 /* Private */,
       7,    1,  421,    2, 0x08 /* Private */,
       8,    1,  424,    2, 0x08 /* Private */,
       9,    1,  427,    2, 0x08 /* Private */,
      10,    1,  430,    2, 0x08 /* Private */,
      11,    0,  433,    2, 0x08 /* Private */,
      12,    2,  434,    2, 0x08 /* Private */,
      16,    5,  439,    2, 0x08 /* Private */,
      16,    4,  450,    2, 0x08 /* Private */,
      16,    2,  459,    2, 0x08 /* Private */,
      24,    1,  464,    2, 0x08 /* Private */,
      25,    2,  467,    2, 0x08 /* Private */,
      28,    2,  472,    2, 0x08 /* Private */,
      29,    2,  477,    2, 0x08 /* Private */,
      30,    0,  482,    2, 0x08 /* Private */,
      31,    0,  483,    2, 0x08 /* Private */,
      32,    0,  484,    2, 0x08 /* Private */,
      33,    0,  485,    2, 0x08 /* Private */,
      34,    0,  486,    2, 0x08 /* Private */,
      35,    0,  487,    2, 0x08 /* Private */,
      36,    0,  488,    2, 0x08 /* Private */,
      37,    0,  489,    2, 0x08 /* Private */,
      38,    0,  490,    2, 0x08 /* Private */,
      39,    0,  491,    2, 0x08 /* Private */,
      40,    0,  492,    2, 0x08 /* Private */,
      41,    0,  493,    2, 0x08 /* Private */,
      42,    0,  494,    2, 0x08 /* Private */,
      43,    0,  495,    2, 0x08 /* Private */,
      44,    0,  496,    2, 0x08 /* Private */,
      45,    1,  497,    2, 0x08 /* Private */,
      48,    0,  500,    2, 0x08 /* Private */,
      49,    0,  501,    2, 0x08 /* Private */,
      50,    1,  502,    2, 0x08 /* Private */,
      52,    1,  505,    2, 0x08 /* Private */,
      53,    0,  508,    2, 0x08 /* Private */,
      54,    0,  509,    2, 0x08 /* Private */,
      55,    0,  510,    2, 0x08 /* Private */,
      56,    1,  511,    2, 0x08 /* Private */,
      57,    1,  514,    2, 0x08 /* Private */,
      58,    0,  517,    2, 0x08 /* Private */,
      59,    0,  518,    2, 0x08 /* Private */,
      60,    1,  519,    2, 0x08 /* Private */,
      61,    0,  522,    2, 0x08 /* Private */,
      62,    0,  523,    2, 0x08 /* Private */,
      63,    0,  524,    2, 0x08 /* Private */,
      64,    0,  525,    2, 0x08 /* Private */,
      65,    0,  526,    2, 0x08 /* Private */,
      66,    0,  527,    2, 0x08 /* Private */,
      67,    0,  528,    2, 0x08 /* Private */,
      68,    0,  529,    2, 0x08 /* Private */,
      69,    0,  530,    2, 0x08 /* Private */,
      70,    0,  531,    2, 0x08 /* Private */,
      71,    1,  532,    2, 0x08 /* Private */,
      73,    1,  535,    2, 0x08 /* Private */,
      74,    1,  538,    2, 0x08 /* Private */,
      76,    3,  541,    2, 0x08 /* Private */,
      80,    3,  548,    2, 0x08 /* Private */,
      81,    3,  555,    2, 0x08 /* Private */,
      85,    0,  562,    2, 0x08 /* Private */,
      86,    0,  563,    2, 0x08 /* Private */,
      87,    0,  564,    2, 0x08 /* Private */,
      88,    0,  565,    2, 0x08 /* Private */,
      89,    0,  566,    2, 0x08 /* Private */,
      90,    1,  567,    2, 0x08 /* Private */,
      91,    0,  570,    2, 0x08 /* Private */,
      92,    2,  571,    2, 0x08 /* Private */,
      96,    3,  576,    2, 0x08 /* Private */,
      96,    2,  583,    2, 0x28 /* Private | MethodCloned */,
      96,    1,  588,    2, 0x28 /* Private | MethodCloned */,
     100,    4,  591,    2, 0x08 /* Private */,
     100,    3,  600,    2, 0x28 /* Private | MethodCloned */,
     100,    2,  607,    2, 0x28 /* Private | MethodCloned */,
     103,    2,  612,    2, 0x08 /* Private */,
     107,    2,  617,    2, 0x08 /* Private */,
     112,    1,  622,    2, 0x08 /* Private */,
     114,    1,  625,    2, 0x08 /* Private */,
     116,    1,  628,    2, 0x08 /* Private */,
     117,    1,  631,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QStringList,   14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17, QMetaType::QString, QMetaType::QString,   18,   19,   20,   21,    6,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, QMetaType::QString, QMetaType::QString,   18,   22,    6,   23,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::QString, QMetaType::QString,   72,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::QString,   75,
    QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,   77,   78,   79,
    QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,   77,   78,   79,
    QMetaType::QString, QMetaType::Double, QMetaType::QString, QMetaType::QString,   82,   83,   84,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   21,
    QMetaType::QString,
    0x80000000 | 93, QMetaType::QString, QMetaType::QString,   94,   95,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   97,   98,   99,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   97,   98,
    QMetaType::QString, QMetaType::QString,   97,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 101, QMetaType::QString, QMetaType::QString,   97,  102,   98,   99,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 101, QMetaType::QString,   97,  102,   98,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 101,   97,  102,
    0x80000000 | 104, 0x80000000 | 104, 0x80000000 | 104,  105,  106,
    0x80000000 | 108, 0x80000000 | 109, QMetaType::Int,  110,  111,
    0x80000000 | 104, 0x80000000 | 104,  113,
    QMetaType::QJsonObject, QMetaType::QString,  115,
    QMetaType::QJsonObject, QMetaType::QString,  115,
    QMetaType::QJsonArray, QMetaType::QString,  115,

       0        // eod
};

void tradingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tradingDialog *_t = static_cast<tradingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitTrading(); break;
        case 1: _t->on_TradingTabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ParseAndPopulateOrderBookTables((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ParseAndPopulatePriceChart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ParseAndPopulateMarketHistoryTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->ParseAndPopulateAccountHistoryTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->ParseAndPopulateOpenOrdersTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->UpdaterFunction(); break;
        case 8: _t->CreateOrderBookTables((*reinterpret_cast< QTableWidget(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 9: _t->DisplayBalance((*reinterpret_cast< QLabel(*)>(_a[1])),(*reinterpret_cast< QLabel(*)>(_a[2])),(*reinterpret_cast< QLabel(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 10: _t->DisplayBalance((*reinterpret_cast< QLabel(*)>(_a[1])),(*reinterpret_cast< QLabel(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 11: _t->DisplayBalance((*reinterpret_cast< QLabel(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->ActionsOnSwitch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->CancelOrderSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->BidInfoInsertSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->AskInfoInsertSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->on_LoadKeys_clicked(); break;
        case 17: _t->on_SaveKeys_clicked(); break;
        case 18: _t->on_GenDepositBTN_clicked(); break;
        case 19: _t->showMarketHistoryWhenReplyFinished(); break;
        case 20: _t->showBalanceOfGEXOnTradingTab(); break;
        case 21: _t->showBalanceOfBTCOnTradingTab(); break;
        case 22: _t->showOrderBookOnTradingTab(); break;
        case 23: _t->showMarketHistoryOnTradingTab(); break;
        case 24: _t->showBalanceOfBTCOnSendTab(); break;
        case 25: _t->showBalanceOfGEXOnSendTab(); break;
        case 26: _t->showBalanceOfGEXOnBalanceTab(); break;
        case 27: _t->showBalanceOfBTCOnBalanceTab(); break;
        case 28: _t->showOpenOrders(); break;
        case 29: _t->showAccountHistory(); break;
        case 30: _t->slotReadyRead(); break;
        case 31: _t->slotError1((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 32: _t->CalculateBuyCostLabel(); break;
        case 33: _t->on_Buy_Max_Amount_clicked(); break;
        case 34: _t->on_UnitsInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->on_BuyBidPriceEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->on_BuyGEX_clicked(); break;
        case 37: _t->CalculateSellCostLabel(); break;
        case 38: _t->on_Sell_Max_Amount_clicked(); break;
        case 39: _t->on_UnitsInputGEX_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->on_SellBidPriceEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->on_SellGEXBTN_clicked(); break;
        case 42: _t->CalculateCSReceiveLabel(); break;
        case 43: _t->on_CSUnitsInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->on_CSUnitsBtn_clicked(); break;
        case 45: _t->on_CS_Max_Amount_clicked(); break;
        case 46: _t->on_Withdraw_Max_Amount_clicked(); break;
        case 47: _t->on_WithdrawUnitsBtn_clicked(); break;
        case 48: _t->on_KeyPasteButton_clicked(); break;
        case 49: _t->on_SecretPasteButton_clicked(); break;
        case 50: _t->on_CSPasteButton_clicked(); break;
        case 51: _t->on_WithdrawPasteButton_clicked(); break;
        case 52: _t->on_DepositCopyButton_clicked(); break;
        case 53: { int _r = _t->SetExchangeInfoTextLabels();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 54: { QString _r = _t->CryptopiaTimeStampToReadable((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 55: { QString _r = _t->CryptopiaIntegerTimeStampToReadable((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 56: { QString _r = _t->CancelOrder((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { QString _r = _t->BuyGEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { QString _r = _t->SellGEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 59: { QString _r = _t->Withdraw((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 60: _t->GetMarketHistory(); break;
        case 61: { QString _r = _t->GetMarketSummary();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 62: { QString _r = _t->GetOrderBook();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 63: { QString _r = _t->GetOpenOrders();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 64: { QString _r = _t->GetAccountHistory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 65: { QString _r = _t->GetBalance((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 66: { QString _r = _t->GetDepositAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 67: { unsigned char* _r = _t->HMAC_SHA256_SIGNER((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< unsigned char**>(_a[0]) = _r; }  break;
        case 68: { QString _r = _t->sendRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: { QString _r = _t->sendRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 70: { QString _r = _t->sendRequest((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 71: _t->sendRequest1((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< std::function<void(void)>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 72: _t->sendRequest1((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< std::function<void(void)>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 73: _t->sendRequest1((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< std::function<void(void)>(*)>(_a[2]))); break;
        case 74: { string _r = _t->encryptDecrypt((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 75: { char* _r = _t->base64((*reinterpret_cast< const unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 76: { string _r = _t->url_encode((*reinterpret_cast< const string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 77: { QJsonObject _r = _t->GetResultObjectFromJSONObject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 78: { QJsonObject _r = _t->GetResultObjectFromJSONArray((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 79: { QJsonArray _r = _t->GetResultArrayFromJSONObject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject tradingDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tradingDialog.data,
      qt_meta_data_tradingDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tradingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tradingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tradingDialog.stringdata0))
        return static_cast<void*>(const_cast< tradingDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int tradingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
