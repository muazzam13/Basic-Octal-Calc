#ifndef QTPROGRAMWIN_H
#define QTPROGRAMWIN_H

#include <QMainWindow>

namespace Ui {
class QtProgramWin;
}

class QtProgramWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtProgramWin(QWidget *parent = 0);
    ~QtProgramWin();

private:
    Ui::QtProgramWin *ui;

public slots:
    void setLineEditText();
    void button_pressed();

private slots:
    void on_pushButton_clear_released();
    void on_pushButton_equals_released();
    void binary_operation_pressed();
    void on_pushButton_sub_released();
    void pressed_0();
    void pressed_1();
    void pressed_2();
    void pressed_3();
    void pressed_4();
    void pressed_5();
    void pressed_6();
    void pressed_7();
    void pressed_add();
    void pressed_subtract();
    void pressed_divide();
    void pressed_multiply();
    void pressed_clear();
    void pressed_equals();

};

#endif // QTPROGRAMWIN_H
