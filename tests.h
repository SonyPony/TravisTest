#ifndef TESTS_H
#define TESTS_H

#include <QtTest/QtTest>
#include <QObject>

class Tests : public QObject
{
        Q_OBJECT

    private slots:
        void trueTest();
        void falseTest();
};

QTEST_MAIN(Tests)
#endif // TESTS_H
