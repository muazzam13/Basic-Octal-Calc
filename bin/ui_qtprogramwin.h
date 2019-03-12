/********************************************************************************
** Form generated from reading UI file 'qtprogramwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROGRAMWIN_H
#define UI_QTPROGRAMWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProgramWin
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_addition;
    QPushButton *pushButton_substract;

    void setupUi(QMainWindow *QtProgramWin)
    {
        if (QtProgramWin->objectName().isEmpty())
            QtProgramWin->setObjectName(QStringLiteral("QtProgramWin"));
        QtProgramWin->resize(244, 302);
        centralWidget = new QWidget(QtProgramWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setStyleSheet(QStringLiteral(""));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setStyleSheet(QStringLiteral(""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 120, 61, 61));
        pushButton_6->setStyleSheet(QStringLiteral(""));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 120, 61, 61));
        pushButton_5->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 180, 61, 61));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 180, 61, 61));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(60, 240, 121, 61));
        pushButton_0->setStyleSheet(QStringLiteral(""));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        label->setStyleSheet(QLatin1String("\n"
"            QLabel {\n"
"            qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"            border: 1px solid gray;\n"
"            }\n"
"\n"
"            background-color : white;\n"
"          "));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 60, 121, 61));
        pushButton_clear->setStyleSheet(QStringLiteral(""));
        pushButton_equals = new QPushButton(centralWidget);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(180, 240, 61, 61));
        pushButton_equals->setStyleSheet(QStringLiteral(""));
        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(120, 60, 61, 61));
        pushButton_multiply->setStyleSheet(QStringLiteral(""));
        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(180, 180, 61, 61));
        pushButton_divide->setStyleSheet(QStringLiteral(""));
        pushButton_addition = new QPushButton(centralWidget);
        pushButton_addition->setObjectName(QStringLiteral("pushButton_addition"));
        pushButton_addition->setGeometry(QRect(180, 60, 61, 61));
        pushButton_addition->setStyleSheet(QStringLiteral(""));
        pushButton_substract = new QPushButton(centralWidget);
        pushButton_substract->setObjectName(QStringLiteral("pushButton_substract"));
        pushButton_substract->setGeometry(QRect(180, 120, 61, 61));
        pushButton_substract->setStyleSheet(QStringLiteral(""));
        QtProgramWin->setCentralWidget(centralWidget);

        retranslateUi(QtProgramWin);

        QMetaObject::connectSlotsByName(QtProgramWin);
    } // setupUi

    void retranslateUi(QMainWindow *QtProgramWin)
    {
        QtProgramWin->setWindowTitle(QApplication::translate("QtProgramWin", "QtProgramWin", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QtProgramWin", "4", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("QtProgramWin", "7", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("QtProgramWin", "6", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("QtProgramWin", "5", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("QtProgramWin", "3", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QtProgramWin", "2", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("QtProgramWin", "1", Q_NULLPTR));
        label->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("QtProgramWin", "C", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("QtProgramWin", "=", Q_NULLPTR));
        pushButton_multiply->setText(QApplication::translate("QtProgramWin", "*", Q_NULLPTR));
        pushButton_divide->setText(QApplication::translate("QtProgramWin", "/", Q_NULLPTR));
        pushButton_addition->setText(QApplication::translate("QtProgramWin", "+", Q_NULLPTR));
        pushButton_substract->setText(QApplication::translate("QtProgramWin", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtProgramWin: public Ui_QtProgramWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROGRAMWIN_H
