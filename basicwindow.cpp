#include "moc_basicwindow.cpp"

BasicWindow::BasicWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::BasicWindow)
{
    ui->setupUi(this);
}
