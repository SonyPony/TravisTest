#include <QApplication>
#include <QQmlApplicationEngine>
#include "tests.h"

void foo() {
    int a = 1;
    a++;
    a++;
}

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    Tests t;
    QTest::qExec(&t);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if(QApplication::arguments().contains("--test"))
        return 0;
    else
        return app.exec();
}
