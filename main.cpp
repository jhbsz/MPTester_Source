#include <QtGui/QApplication>
#include <QTimer>

#include "MPTester.h"

int main(int argc, char *argv[])
{  
    QApplication app(argc, argv);
    QTimer t;
    MPTester mptester;
    mptester.bInitFlag = false;
    mptester.show();
    t.singleShot(1000, &mptester, SLOT(on_beginPushButton_clicked()));
    return app.exec();
}
