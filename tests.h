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

#endif // TESTS_H
