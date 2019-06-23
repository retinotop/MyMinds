#include<QApplication>

#include "startscreen.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartScreen *mainView = new StartScreen();

    mainView->show();

    return a.exec();
}
