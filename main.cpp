#include "basicwindow.h"

#include <iostream>
#include <QtCore>

int main(int argc, char *argv[])
{
    std::cout << "Compiled: " << QT_VERSION_STR << ", Runtime: " << qVersion() << std::endl;
    QApplication a(argc, argv);
    BasicWindow *main = new BasicWindow();
    main->show();
    return a.exec();
}
