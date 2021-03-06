#include <QCoreApplication>
#include "downloadinitobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QCoreApplication::setOrganizationName(APPNAME);
    QCoreApplication::setOrganizationDomain(APPCOME);
    QCoreApplication::setApplicationName(APPNAME);

    DownloadInitObject object;
    object.init();
    qDebug() << "Parameter Init success!";

    Q_UNUSED(app);
    return 0;
}
