QT += core
QT -= gui

CONFIG += c++11

TARGET = FactoryPattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    product.h \
    concrete_product.h \
    factory.h \
    concrete_factory.h
