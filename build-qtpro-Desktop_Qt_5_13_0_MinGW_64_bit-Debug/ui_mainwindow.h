/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *PB_AddressList;
    QPushButton *PB_Text;
    QPushButton *PB_AllAdress;
    QPushButton *PB_QueryAdress;
    QPushButton *PB_GroupAdress;
    QPushButton *PB_TextInfo;
    QPushButton *PB_DiffHashfun;
    QPushButton *PB_DiffConflict;
    QListWidget *List_AddressBook;
    QTextEdit *Text_MemberInfo;
    QPushButton *PB_DeleteMember;
    QPushButton *PB_AddMember;
    QTextEdit *Text_OverallInfo;
    QPushButton *PB_ChangeMember;
    QPushButton *PB_ManageGroup;
    QPushButton *PB_CreateGroup;
    QPushButton *PB_QueryMember;
    QPushButton *PB_SortName;
    QPushButton *PB_SortPhone;
    QPushButton *PB_SortUp;
    QPushButton *PB_SortDown;
    QPushButton *PB_OpenAdressBook;
    QLineEdit *Input_QueryMember;
    QPushButton *PB_QueryInfo;
    QLineEdit *Input_CreateGroup;
    QListWidget *List_MemberInGroup;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2160, 1350);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PB_AddressList = new QPushButton(centralWidget);
        PB_AddressList->setObjectName(QString::fromUtf8("PB_AddressList"));
        PB_AddressList->setGeometry(QRect(0, 0, 1080, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        PB_AddressList->setFont(font);
        PB_AddressList->setIconSize(QSize(16, 16));
        PB_Text = new QPushButton(centralWidget);
        PB_Text->setObjectName(QString::fromUtf8("PB_Text"));
        PB_Text->setGeometry(QRect(1080, 0, 1080, 100));
        PB_Text->setFont(font);
        PB_AllAdress = new QPushButton(centralWidget);
        PB_AllAdress->setObjectName(QString::fromUtf8("PB_AllAdress"));
        PB_AllAdress->setEnabled(true);
        PB_AllAdress->setGeometry(QRect(0, 100, 720, 90));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        PB_AllAdress->setFont(font1);
        PB_AllAdress->setIconSize(QSize(16, 16));
        PB_QueryAdress = new QPushButton(centralWidget);
        PB_QueryAdress->setObjectName(QString::fromUtf8("PB_QueryAdress"));
        PB_QueryAdress->setGeometry(QRect(1440, 100, 720, 90));
        PB_QueryAdress->setFont(font1);
        PB_QueryAdress->setIconSize(QSize(16, 16));
        PB_GroupAdress = new QPushButton(centralWidget);
        PB_GroupAdress->setObjectName(QString::fromUtf8("PB_GroupAdress"));
        PB_GroupAdress->setGeometry(QRect(720, 100, 720, 90));
        PB_GroupAdress->setFont(font1);
        PB_GroupAdress->setIconSize(QSize(16, 16));
        PB_TextInfo = new QPushButton(centralWidget);
        PB_TextInfo->setObjectName(QString::fromUtf8("PB_TextInfo"));
        PB_TextInfo->setEnabled(true);
        PB_TextInfo->setGeometry(QRect(0, 100, 720, 90));
        PB_TextInfo->setFont(font1);
        PB_TextInfo->setIconSize(QSize(16, 16));
        PB_DiffHashfun = new QPushButton(centralWidget);
        PB_DiffHashfun->setObjectName(QString::fromUtf8("PB_DiffHashfun"));
        PB_DiffHashfun->setEnabled(true);
        PB_DiffHashfun->setGeometry(QRect(720, 100, 720, 90));
        PB_DiffHashfun->setFont(font1);
        PB_DiffHashfun->setIconSize(QSize(16, 16));
        PB_DiffConflict = new QPushButton(centralWidget);
        PB_DiffConflict->setObjectName(QString::fromUtf8("PB_DiffConflict"));
        PB_DiffConflict->setEnabled(true);
        PB_DiffConflict->setGeometry(QRect(1440, 100, 720, 90));
        PB_DiffConflict->setFont(font1);
        PB_DiffConflict->setIconSize(QSize(16, 16));
        List_AddressBook = new QListWidget(centralWidget);
        List_AddressBook->setObjectName(QString::fromUtf8("List_AddressBook"));
        List_AddressBook->setGeometry(QRect(0, 190, 1080, 1160));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        List_AddressBook->setFont(font2);
        Text_MemberInfo = new QTextEdit(centralWidget);
        Text_MemberInfo->setObjectName(QString::fromUtf8("Text_MemberInfo"));
        Text_MemberInfo->setGeometry(QRect(1080, 190, 1080, 580));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(18);
        Text_MemberInfo->setFont(font3);
        PB_DeleteMember = new QPushButton(centralWidget);
        PB_DeleteMember->setObjectName(QString::fromUtf8("PB_DeleteMember"));
        PB_DeleteMember->setGeometry(QRect(1970, 690, 181, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        PB_DeleteMember->setFont(font4);
        PB_AddMember = new QPushButton(centralWidget);
        PB_AddMember->setObjectName(QString::fromUtf8("PB_AddMember"));
        PB_AddMember->setGeometry(QRect(1970, 780, 181, 71));
        PB_AddMember->setFont(font4);
        Text_OverallInfo = new QTextEdit(centralWidget);
        Text_OverallInfo->setObjectName(QString::fromUtf8("Text_OverallInfo"));
        Text_OverallInfo->setGeometry(QRect(1080, 770, 1080, 580));
        Text_OverallInfo->setFont(font3);
        PB_ChangeMember = new QPushButton(centralWidget);
        PB_ChangeMember->setObjectName(QString::fromUtf8("PB_ChangeMember"));
        PB_ChangeMember->setGeometry(QRect(1780, 690, 181, 71));
        PB_ChangeMember->setFont(font4);
        PB_ManageGroup = new QPushButton(centralWidget);
        PB_ManageGroup->setObjectName(QString::fromUtf8("PB_ManageGroup"));
        PB_ManageGroup->setGeometry(QRect(1970, 690, 181, 71));
        PB_ManageGroup->setFont(font4);
        PB_CreateGroup = new QPushButton(centralWidget);
        PB_CreateGroup->setObjectName(QString::fromUtf8("PB_CreateGroup"));
        PB_CreateGroup->setGeometry(QRect(1970, 780, 181, 71));
        PB_CreateGroup->setFont(font4);
        PB_QueryMember = new QPushButton(centralWidget);
        PB_QueryMember->setObjectName(QString::fromUtf8("PB_QueryMember"));
        PB_QueryMember->setGeometry(QRect(1970, 690, 181, 71));
        PB_QueryMember->setFont(font4);
        PB_SortName = new QPushButton(centralWidget);
        PB_SortName->setObjectName(QString::fromUtf8("PB_SortName"));
        PB_SortName->setGeometry(QRect(1090, 780, 280, 120));
        PB_SortName->setFont(font4);
        PB_SortPhone = new QPushButton(centralWidget);
        PB_SortPhone->setObjectName(QString::fromUtf8("PB_SortPhone"));
        PB_SortPhone->setGeometry(QRect(1090, 910, 280, 120));
        PB_SortPhone->setFont(font4);
        PB_SortUp = new QPushButton(centralWidget);
        PB_SortUp->setObjectName(QString::fromUtf8("PB_SortUp"));
        PB_SortUp->setGeometry(QRect(1090, 1040, 280, 120));
        PB_SortUp->setFont(font4);
        PB_SortDown = new QPushButton(centralWidget);
        PB_SortDown->setObjectName(QString::fromUtf8("PB_SortDown"));
        PB_SortDown->setGeometry(QRect(1090, 1170, 280, 120));
        PB_SortDown->setFont(font4);
        PB_OpenAdressBook = new QPushButton(centralWidget);
        PB_OpenAdressBook->setObjectName(QString::fromUtf8("PB_OpenAdressBook"));
        PB_OpenAdressBook->setGeometry(QRect(1780, 780, 181, 71));
        PB_OpenAdressBook->setFont(font4);
        Input_QueryMember = new QLineEdit(centralWidget);
        Input_QueryMember->setObjectName(QString::fromUtf8("Input_QueryMember"));
        Input_QueryMember->setGeometry(QRect(1090, 690, 871, 71));
        PB_QueryInfo = new QPushButton(centralWidget);
        PB_QueryInfo->setObjectName(QString::fromUtf8("PB_QueryInfo"));
        PB_QueryInfo->setGeometry(QRect(1870, 780, 280, 120));
        PB_QueryInfo->setFont(font4);
        Input_CreateGroup = new QLineEdit(centralWidget);
        Input_CreateGroup->setObjectName(QString::fromUtf8("Input_CreateGroup"));
        Input_CreateGroup->setGeometry(QRect(1090, 780, 871, 71));
        List_MemberInGroup = new QListWidget(centralWidget);
        List_MemberInGroup->setObjectName(QString::fromUtf8("List_MemberInGroup"));
        List_MemberInGroup->setGeometry(QRect(1080, 859, 1080, 491));
        List_MemberInGroup->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        PB_AddressList->raise();
        PB_Text->raise();
        PB_AllAdress->raise();
        PB_QueryAdress->raise();
        PB_GroupAdress->raise();
        PB_TextInfo->raise();
        PB_DiffHashfun->raise();
        PB_DiffConflict->raise();
        List_AddressBook->raise();
        Text_MemberInfo->raise();
        PB_DeleteMember->raise();
        Text_OverallInfo->raise();
        PB_AddMember->raise();
        PB_ChangeMember->raise();
        PB_ManageGroup->raise();
        PB_CreateGroup->raise();
        PB_QueryMember->raise();
        PB_SortName->raise();
        PB_SortPhone->raise();
        PB_SortUp->raise();
        PB_SortDown->raise();
        PB_OpenAdressBook->raise();
        Input_QueryMember->raise();
        PB_QueryInfo->raise();
        Input_CreateGroup->raise();
        List_MemberInGroup->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        PB_TextInfo->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PB_AddressList->setText(QCoreApplication::translate("MainWindow", "\351\200\232\350\256\257\345\275\225", nullptr));
        PB_Text->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\347\273\237\350\256\241", nullptr));
        PB_AllAdress->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
        PB_QueryAdress->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        PB_GroupAdress->setText(QCoreApplication::translate("MainWindow", "\345\210\206\347\273\204", nullptr));
        PB_TextInfo->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241", nullptr));
        PB_DiffHashfun->setText(QCoreApplication::translate("MainWindow", "\346\257\224\350\276\203\344\270\215\345\220\214\345\223\210\345\270\214\345\207\275\346\225\260", nullptr));
        PB_DiffConflict->setText(QCoreApplication::translate("MainWindow", "\346\257\224\350\276\203\344\270\215\345\220\214\345\244\204\347\220\206\345\206\262\347\252\201\346\226\271\346\263\225", nullptr));
        PB_DeleteMember->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        PB_AddMember->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        PB_ChangeMember->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271", nullptr));
        PB_ManageGroup->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\210\206\347\273\204", nullptr));
        PB_CreateGroup->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\206\347\273\204", nullptr));
        PB_QueryMember->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        PB_SortName->setText(QCoreApplication::translate("MainWindow", "\346\214\211\345\247\223\345\220\215\346\216\222\345\272\217", nullptr));
        PB_SortPhone->setText(QCoreApplication::translate("MainWindow", "\346\214\211\346\211\213\346\234\272\345\217\267\346\216\222\345\272\217", nullptr));
        PB_SortUp->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        PB_SortDown->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        PB_OpenAdressBook->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        PB_QueryInfo->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\346\237\245\350\257\242\346\225\210\347\216\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
