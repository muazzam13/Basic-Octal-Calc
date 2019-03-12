#include "qtprogramwin.h"
#include "ui_qtprogramwin.h"
#include <QShortcut>
double num1;
bool user_type = false;
static double control = 0;
QtProgramWin::QtProgramWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtProgramWin)
{
    ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(button_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(button_pressed()));

    connect(ui->pushButton_addition, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_multiply, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_substract, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

    ui->pushButton_addition->setCheckable(true);
    ui->pushButton_substract->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);

    QShortcut *shortcut0 = new QShortcut(QKeySequence("0"), this);
    QObject::connect(shortcut0, SIGNAL(activated()), this, SLOT(pressed_0()));

    QShortcut *shortcut1 = new QShortcut(QKeySequence("1"), this);
    QObject::connect(shortcut1, SIGNAL(activated()), this, SLOT(pressed_1()));

    QShortcut *shortcut2 = new QShortcut(QKeySequence("2"), this);
    QObject::connect(shortcut2, SIGNAL(activated()), this, SLOT(pressed_2()));

    QShortcut *shortcut3 = new QShortcut(QKeySequence("3"), this);
    QObject::connect(shortcut3, SIGNAL(activated()), this, SLOT(pressed_3()));

    QShortcut *shortcut4 = new QShortcut(QKeySequence("4"), this);
    QObject::connect(shortcut4, SIGNAL(activated()), this, SLOT(pressed_4()));

    QShortcut *shortcut5 = new QShortcut(QKeySequence("5"), this);
    QObject::connect(shortcut5, SIGNAL(activated()), this, SLOT(pressed_5()));

    QShortcut *shortcut6 = new QShortcut(QKeySequence("6"), this);
    QObject::connect(shortcut6, SIGNAL(activated()), this, SLOT(pressed_6()));

    QShortcut *shortcut7 = new QShortcut(QKeySequence("7"), this);
    QObject::connect(shortcut7, SIGNAL(activated()), this, SLOT(pressed_7()));

    QShortcut *shortcut_add = new QShortcut(QKeySequence("+"), this);
    QObject::connect(shortcut_add, SIGNAL(activated()), this, SLOT(pressed_add()));

    QShortcut *shortcut_sub = new QShortcut(QKeySequence("-"), this);
    QObject::connect(shortcut_sub, SIGNAL(activated()), this, SLOT(pressed_subtract()));

    QShortcut *shortcut_div = new QShortcut(QKeySequence("/"), this);
    QObject::connect(shortcut_div, SIGNAL(activated()), this, SLOT(pressed_divide()));

    QShortcut *shortcut_mul = new QShortcut(QKeySequence("*"), this);
    QObject::connect(shortcut_mul, SIGNAL(activated()), this, SLOT(pressed_multiply()));

    QShortcut *shortcut_clear = new QShortcut(QKeySequence("c"), this);
    QObject::connect(shortcut_clear, SIGNAL(activated()), this, SLOT(pressed_clear()));

    QShortcut *shortcut_equals = new QShortcut(QKeySequence("Return"), this);
    QObject::connect(shortcut_equals, SIGNAL(activated()), this, SLOT(pressed_equals()));

}

void QtProgramWin::pressed_equals()
{
    ui->pushButton_equals->animateClick();
}
void QtProgramWin::pressed_0()
{
    ui->pushButton_0->animateClick();
}

void QtProgramWin::pressed_2()
{
    ui->pushButton_2->animateClick();
}

void QtProgramWin::pressed_1()
{
    ui->pushButton_1->animateClick();
}

void QtProgramWin::pressed_3()
{
    ui->pushButton_3->animateClick();
}

void QtProgramWin::pressed_4()
{
    ui->pushButton_4->animateClick();
}

void QtProgramWin::pressed_5()
{
    ui->pushButton_5->animateClick();
}

void QtProgramWin::pressed_6()
{
    ui->pushButton_6->animateClick();
}

void QtProgramWin::pressed_7()
{
    ui->pushButton_7->animateClick();
}

void QtProgramWin::pressed_add()
{
    ui->pushButton_addition->animateClick();
}

void QtProgramWin::pressed_subtract()
{
    ui->pushButton_substract->animateClick();
}

void QtProgramWin::pressed_multiply()
{
    ui->pushButton_multiply->animateClick();
}

void QtProgramWin::pressed_divide()
{
    ui->pushButton_divide->animateClick();
}
void QtProgramWin::pressed_clear()
{
    ui->pushButton_clear->animateClick();
}

QtProgramWin::~QtProgramWin()
{
    delete ui;
}


void QtProgramWin::setLineEditText()
{
    //ui->lineEdit->setText(QString("Hello World!") );
}
void QtProgramWin::button_pressed()
{
    double totalLabel;
    QString finalLabel;

    QPushButton *button = (QPushButton*) sender();
    if (control < 4)
    {

        if((ui->pushButton_addition->isChecked() || ui->pushButton_substract->isChecked()
                || ui->pushButton_multiply->isChecked() || ui->pushButton_divide->isChecked()) && (!user_type))
        {
           totalLabel = button->text().toDouble();
           user_type = true;
        }
        else
        {
            totalLabel = (ui->label->text()+button->text()).toDouble();
        }
        finalLabel = QString::number(totalLabel);
        ui->label->setText(finalLabel);
        control++;
    }
}

void QtProgramWin::on_pushButton_clear_released()
{
    ui->pushButton_addition->setChecked(false);
    ui->pushButton_substract->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    user_type = false;

    ui->label->setText("0");
    control = 0;

}

void QtProgramWin::on_pushButton_equals_released()
{
    double label_num;
    double num2 = ui->label->text().toDouble();

    if(ui->pushButton_addition->isChecked())
    {
        int decimal_num1 = 0;
        int i = 0;
        int rem;
        while (num1 != 0)
        {
            rem = (int) num1 % 10;
            num1 /= 10;
            decimal_num1 += rem * pow(8, i);
            ++i;
        }
        int decimal_num2 = 0;
        int k = 0;
        int rem2;
        while (num2 != 0)
        {
            rem2 = (int) num2 % 10;
            num2 /= 10;
            decimal_num2 += rem2 * pow(8, k);
            ++k;
        }
        int add_num = decimal_num1+decimal_num2;
        int rem_final, j = 1, octal_number = 0;
        while (add_num != 0)
        {
            rem_final = add_num % 8;
            add_num /= 8;
            octal_number += rem_final * j;
            j *= 10;
        }
        QString new_label = QString::number(octal_number);
        ui->label->setText(new_label);
        ui->pushButton_addition->setChecked(false);

    }
    if(ui->pushButton_substract->isChecked())
    {

        int decimal_num1 = 0;
        int i = 0;
        int rem;
        while (num1 != 0)
            {
                rem = (int) num1 % 10;
                num1 /= 10;
                decimal_num1 += rem * pow(8, i);
                ++i;
            }
          int decimal_num2 = 0;
          int k = 0;
          int rem2;
          while (num2 != 0)
              {
                rem2 = (int) num2 % 10;
                num2 /= 10;
                decimal_num2 += rem2 * pow(8, k);
                ++k;
              }
          int sub_num = decimal_num1-decimal_num2;
          int rem_final, j = 1, octal_number = 0;
             while (sub_num != 0)
             {
                 rem_final = sub_num % 8;
                 sub_num /= 8;
                 octal_number += rem_final * j;
                 j *= 10;
             }

         QString new_label = QString::number(octal_number);
         ui->label->setText(new_label);
         ui->pushButton_substract->setChecked(false);
    }
    if(ui->pushButton_multiply->isChecked())
    {

        int decimal_num1 = 0;
        int i = 0;
        int rem;
        while (num1 != 0)
            {
                rem = (int) num1 % 10;
                num1 /= 10;
                decimal_num1 += rem * pow(8, i);
                ++i;
            }
          int decimal_num2 = 0;
          int k = 0;
          int rem2;
          while (num2 != 0)
              {
                rem2 = (int) num2 % 10;
                num2 /= 10;
                decimal_num2 += rem2 * pow(8, k);
                ++k;
              }
          int mul_num = decimal_num1*decimal_num2;
          int rem_final, j = 1, octal_number = 0;
             while (mul_num != 0)
             {
                 rem_final = mul_num % 8;
                 mul_num /= 8;
                 octal_number += rem_final * j;
                 j *= 10;
             }

         QString new_label = QString::number(octal_number);
         ui->label->setText(new_label);
         ui->pushButton_multiply->setChecked(false);
    }
    if(ui->pushButton_divide->isChecked())
    {

        double decimal_num1 = 0;
        int i = 0;
        int rem;
        while (num1 != 0)
            {
                rem = (int) num1 % 10;
                num1 /= 10;
                decimal_num1 += rem * pow(8, i);
                ++i;
            }
          double decimal_num2 = 0;
          int k = 0;
          int rem2;
          while (num2 != 0)
              {
                rem2 = (int) num2 % 10;
                num2 /= 10;
                decimal_num2 += rem2 * pow(8, k);
                ++k;
              }
          double div_num = decimal_num1/decimal_num2;
          int rem_final, j = 1, octal_number = 0;
             while (div_num != 0)
             {
                 rem_final = (int)div_num % 8;
                 div_num /= 8;
                 octal_number += rem_final * j;
                 j *= 10;
             }

         QString new_label = QString::number(octal_number);
         ui->label->setText(new_label);
         ui->pushButton_divide->setChecked(false);
    }
    user_type = false;
}
void QtProgramWin::binary_operation_pressed()
{
    QPushButton *button = (QPushButton*) sender();
    num1 = ui->label->text().toDouble();
    button->setChecked(true);
    control = 0;
}

void QtProgramWin::on_pushButton_sub_released()
{

}
