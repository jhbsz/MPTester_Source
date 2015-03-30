/********************************************************************************
** Form generated from reading UI file 'MPTester.ui'
**
** Created: Mon Feb 16 18:42:03 2015
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPTESTER_H
#define UI_MPTESTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MPTester
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QLabel *gpibLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *failCheckBox;
    QCheckBox *shutdownCheckBox;
    QCheckBox *autompCheckBox;
    QCheckBox *nompCheckBox;
    QCheckBox *forcempCheckBox;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *autompPushButton;
    QPushButton *beginPushButton;
    QPushButton *LLFPushButton;
    QPushButton *stopPushButton;
    QPushButton *exitPushButton;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *Label_ChipName;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *dateLabel;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MPTester)
    {
        if (MPTester->objectName().isEmpty())
            MPTester->setObjectName(QString::fromUtf8("MPTester"));
        MPTester->resize(279, 645);
        centralwidget = new QWidget(MPTester);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(18, 361, 251, 242));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        gpibLabel = new QLabel(verticalLayoutWidget_2);
        gpibLabel->setObjectName(QString::fromUtf8("gpibLabel"));
        gpibLabel->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\233\346\255\243\351\273\221"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        gpibLabel->setFont(font);
        gpibLabel->setAutoFillBackground(false);
        gpibLabel->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 0);"));

        verticalLayout_6->addWidget(gpibLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        statusLabel = new QLabel(verticalLayoutWidget_2);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        QBrush brush4(QColor(0, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        statusLabel->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR PL UKai CN"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        statusLabel->setFont(font1);
        statusLabel->setStyleSheet(QString::fromUtf8("setpaletteforegroundcolor:rgb(255, 255, 127);"));

        verticalLayout_6->addWidget(statusLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        failCheckBox = new QCheckBox(verticalLayoutWidget_2);
        failCheckBox->setObjectName(QString::fromUtf8("failCheckBox"));
        failCheckBox->setEnabled(false);
        failCheckBox->setCheckable(true);
        failCheckBox->setChecked(true);

        verticalLayout->addWidget(failCheckBox);

        shutdownCheckBox = new QCheckBox(verticalLayoutWidget_2);
        shutdownCheckBox->setObjectName(QString::fromUtf8("shutdownCheckBox"));
        shutdownCheckBox->setEnabled(false);
        shutdownCheckBox->setCheckable(false);
        shutdownCheckBox->setChecked(false);

        verticalLayout->addWidget(shutdownCheckBox);

        autompCheckBox = new QCheckBox(verticalLayoutWidget_2);
        autompCheckBox->setObjectName(QString::fromUtf8("autompCheckBox"));
        autompCheckBox->setEnabled(false);
        autompCheckBox->setChecked(true);

        verticalLayout->addWidget(autompCheckBox);

        nompCheckBox = new QCheckBox(verticalLayoutWidget_2);
        nompCheckBox->setObjectName(QString::fromUtf8("nompCheckBox"));
        nompCheckBox->setEnabled(false);
        nompCheckBox->setCheckable(false);

        verticalLayout->addWidget(nompCheckBox);

        forcempCheckBox = new QCheckBox(verticalLayoutWidget_2);
        forcempCheckBox->setObjectName(QString::fromUtf8("forcempCheckBox"));
        forcempCheckBox->setEnabled(false);
        forcempCheckBox->setCheckable(false);

        verticalLayout->addWidget(forcempCheckBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        autompPushButton = new QPushButton(verticalLayoutWidget_2);
        autompPushButton->setObjectName(QString::fromUtf8("autompPushButton"));
        autompPushButton->setEnabled(false);
        autompPushButton->setCheckable(false);

        verticalLayout_2->addWidget(autompPushButton);

        beginPushButton = new QPushButton(verticalLayoutWidget_2);
        beginPushButton->setObjectName(QString::fromUtf8("beginPushButton"));

        verticalLayout_2->addWidget(beginPushButton);

        LLFPushButton = new QPushButton(verticalLayoutWidget_2);
        LLFPushButton->setObjectName(QString::fromUtf8("LLFPushButton"));
        LLFPushButton->setEnabled(true);
        LLFPushButton->setCheckable(false);

        verticalLayout_2->addWidget(LLFPushButton);

        stopPushButton = new QPushButton(verticalLayoutWidget_2);
        stopPushButton->setObjectName(QString::fromUtf8("stopPushButton"));

        verticalLayout_2->addWidget(stopPushButton);

        exitPushButton = new QPushButton(verticalLayoutWidget_2);
        exitPushButton->setObjectName(QString::fromUtf8("exitPushButton"));

        verticalLayout_2->addWidget(exitPushButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_6);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(20, 70, 241, 281));
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 75 16pt \"AR PL UKai CN\";\n"
"color: rgb(0, 255, 0);"));
        plainTextEdit->setUndoRedoEnabled(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 233, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Label_ChipName = new QLabel(layoutWidget);
        Label_ChipName->setObjectName(QString::fromUtf8("Label_ChipName"));
        Label_ChipName->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\226\207\346\263\211\351\251\233\347\255\211\345\257\254\345\276\256\347\261\263\351\273\221\";"));

        horizontalLayout_2->addWidget(Label_ChipName);

        horizontalSpacer_4 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        dateLabel = new QLabel(layoutWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        horizontalLayout_2->addWidget(dateLabel);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        MPTester->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MPTester);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 279, 23));
        MPTester->setMenuBar(menubar);
        statusbar = new QStatusBar(MPTester);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MPTester->setStatusBar(statusbar);

        retranslateUi(MPTester);

        QMetaObject::connectSlotsByName(MPTester);
    } // setupUi

    void retranslateUi(QMainWindow *MPTester)
    {
        MPTester->setWindowTitle(QApplication::translate("MPTester", "MPTester", 0, QApplication::UnicodeUTF8));
        gpibLabel->setText(QApplication::translate("MPTester", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\207\346\263\211\351\251\233\346\255\243\351\273\221'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For Detect GPIB</p></body></html>", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("MPTester", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\207\346\263\211\351\251\233\346\255\243\351\273\221'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status</</p></body></html>", 0, QApplication::UnicodeUTF8));
        failCheckBox->setText(QApplication::translate("MPTester", "Fail Close FT Tool", 0, QApplication::UnicodeUTF8));
        shutdownCheckBox->setText(QApplication::translate("MPTester", "Bin2>5, shutdown", 0, QApplication::UnicodeUTF8));
        autompCheckBox->setText(QApplication::translate("MPTester", "AutoMP", 0, QApplication::UnicodeUTF8));
        nompCheckBox->setText(QApplication::translate("MPTester", "NoMP", 0, QApplication::UnicodeUTF8));
        forcempCheckBox->setText(QApplication::translate("MPTester", "Force MP", 0, QApplication::UnicodeUTF8));
        autompPushButton->setText(QApplication::translate("MPTester", "AutoMP", 0, QApplication::UnicodeUTF8));
        beginPushButton->setText(QApplication::translate("MPTester", "Begin", 0, QApplication::UnicodeUTF8));
        LLFPushButton->setText(QApplication::translate("MPTester", "LLF", 0, QApplication::UnicodeUTF8));
        stopPushButton->setText(QApplication::translate("MPTester", "Stop", 0, QApplication::UnicodeUTF8));
        exitPushButton->setText(QApplication::translate("MPTester", "Exit", 0, QApplication::UnicodeUTF8));
        Label_ChipName->setText(QApplication::translate("MPTester", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">ChipName</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dateLabel->setText(QApplication::translate("MPTester", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MPTester: public Ui_MPTester {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPTESTER_H
