#include <QApplication>
#include <QQmlApplicationEngine>
#include "tests.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Tests t;
    QTest::qExec(&t);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
