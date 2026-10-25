QT -= gui

CONFIG += console
CONFIG += c++17

TEMPLATE = app

TARGET = UdeABook

SOURCES += \
    main.cpp \
    clases/Usuario.cpp \
    clases/Mensaje.cpp \
    clases/Solicitud.cpp \
    clases/Album.cpp \
    clases/Foto.cpp \
    sistema/Sistema.cpp \
    sistema/Persistencia.cpp \
    sistema/Metricas.cpp \
    utilidades/Utilidades.cpp \
    sistema/Menu.cpp

HEADERS += \
    Constantes.h \
    clases/Usuario.h \
    clases/Mensaje.h \
    clases/Solicitud.h \
    clases/Album.h \
    clases/Foto.h \
    sistema/Sistema.h \
    sistema/Persistencia.h \
    sistema/Metricas.h \
    utilidades/Utilidades.h \
    sistema/Menu.h

DISTFILES += \
    data/usuarios.txt \
    data/amistades.txt \
    data/solicitudes.txt \
    data/mensajes.txt \
    data/albumes.txt \
    data/fotos.txt
