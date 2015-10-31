TEMPLATE = subdirs
CONFIG += c++11
SUBDIRS +=  src

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
