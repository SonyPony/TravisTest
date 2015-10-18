TEMPLATE = app

QT += qml quick widgets testlib

SOURCES += main.cpp \
    tests/tests.cpp \
    foo/tt.cpp

RESOURCES += qml.qrc
TARGET = ../TravisTest

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include("../deployment.pri")

#QMAKE_CXXFLAGS += -g -Wall -fprofile-arcs -ftest-coverage -O0
#QMAKE_LFLAGS += -g -Wall -fprofile-arcs -ftest-coverage  -O0

LIBS += \
    -lgcov

HEADERS += \
    tests/tests.h \
    foo/tt.h
