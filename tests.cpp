#include "tests.h"

void Tests::trueTest()
{
    QCOMPARE("Ahoj", "Ahoj");
}

void Tests::falseTest()
{
    QCOMPARE("Ahojky", "Ahojky");
}
