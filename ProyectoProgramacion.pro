TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Clases/basededatos.cpp \
        Clases/bodega.cpp \
        Clases/empleado.cpp \
        Clases/producto.cpp \
        Clases/recursoshumanos.cpp \
        Clases/venta.cpp \
        main.cpp

HEADERS += \
    Clases/auxiliaresClases.h \
    Clases/basededatos.h \
    Clases/bodega.h \
    Clases/empleado.h \
    Clases/producto.h \
    Clases/recursoshumanos.h \
    Clases/venta.h \
    auxiliares.h \
    dataGenerator.h \
    sistemaVentas.h
