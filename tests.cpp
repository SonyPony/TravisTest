#include "tests.h"

void Tests::trueTest()
{
    QCOMPARE("Ahoj", "Ahoj");
}

void Tests::falseTest()
{
    QCOMPARE("Ahoj", "Ahojky");
}

QTEST_MAIN(Tests)
