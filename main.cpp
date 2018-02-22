#include <iostream>
#include <QApplication>
#include "GUI/mainWindow.h"

using namespace std;


int main(int argc, char** argv)
{
    QApplication app(argc,argv);
    MainWindow Versa3d;
    Versa3d.show();

    return app.exec();
}
