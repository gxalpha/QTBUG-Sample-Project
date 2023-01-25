#ifndef BASICWINDOW_H
#define BASICWINDOW_H


#include <QMainWindow>
#include "./ui_basicwindow.h"

class BasicWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit BasicWindow(QWidget *parent = 0);

private:
    std::unique_ptr<Ui::BasicWindow> ui;
};

#endif
