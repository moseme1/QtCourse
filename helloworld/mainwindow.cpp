#include <QCoreApplication>
#include <QDebug> // 用于输出

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 输出Hello World
    qDebug() << "Hello World!";

    return a.exec();
}
