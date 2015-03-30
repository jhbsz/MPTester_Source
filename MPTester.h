#ifndef MPTESTER_H
#define MPTESTER_H

#include <QMainWindow>
#include "ui_MPTester.h"
#include <QApplication>
#include <QFileInfo>
#include <QDateTime>
#include <QCloseEvent>
#include <QErrorMessage>

#include "AP_Interface.h"

const int Sig_STX = 0x02;
const int Sig_ETX = 0x03;

//class QextSerialPort;

namespace Ui {
    class MPTester;
    class QErrorMessage;
}

class MPTester : public QMainWindow, public Ui::MPTester
{
   Q_OBJECT

public:
    MPTester(QWidget *parent = 0);
    virtual ~MPTester();
    bool bInitFlag;  // Compare ComPort, Msg Setting or not
    void errorMessage(QString ErrLog);
    void GPIB_Detect();
    bool bStopFlag;
    int CheckFlashNumber();
    int AP_Binning;
    QString strChipName, strOldChipName;

private:
    Ui_MPTester *ui;
    QErrorMessage *errorMessageDialog;
    LocalServiceInterface *AP;

protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *event);

private slots:
    void on_stopPushButton_clicked();
    void on_exitPushButton_clicked();
    void on_beginPushButton_clicked();
    void on_LLFPushButton_clicked();
    void clearText();
    void autompCheck();
};



#endif
