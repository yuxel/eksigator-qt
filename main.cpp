#include <QtGui/QApplication>
#include "eksigatorwindow.h"

int main(int argc, char *argv[])
{
    QApplication eksigator(argc, argv);

    eksigator.setApplicationName("Eksigator");
    eksigator.setOrganizationName("Eksigator");

    EksigatorWindow *eksigatorWindow = new EksigatorWindow();
    eksigatorWindow->show();
    return eksigator.exec();
}
