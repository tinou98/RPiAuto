#include <QApplication>

#include "gridautolayout.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    GridAutoLayout homeScreen;

    homeScreen.addItem("Coucou", QPixmap(":/img"));
    homeScreen.addItem("Trol", QPixmap(":/img"));
    homeScreen.addItem("Plom", QPixmap(":/img"));

    homeScreen.showFullScreen();

    return a.exec();
}

