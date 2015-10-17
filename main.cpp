#include <QApplication>
#include <QQmlApplicationEngine>
#include "tests.h"

int main(int argc, char *argv[])
{
    Tests t;

    QApplication app(argc, argv);

    QTest::qExec(&t);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
