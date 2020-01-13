<<<<<<< HEAD
# Praaline Media Library
# (c) George Christodoulides 2012-2020

! include( ../common.pri ) {
    ! include( ./praaline-lib-media-common.pri ) {
        error( Could not find the common.pri file! )
    }
}

TEMPLATE = lib

CONFIG(debug, debug|release) {
    TARGET = praaline-lib-mediad
} else {
    TARGET = praaline-lib-media
}

CONFIG += qt thread warn_on stl rtti exceptions c++11

QT -= gui

DEFINES += LIBRARY_PRAALINE_LIB_MEDIA
DEFINES += USE_NAMESPACE_PRAALINE_LIB_MEDIA

INCLUDEPATH += . external src include
DEPENDPATH += . external src

DEFINES += USE_NAMESPACE_PRAALINE_CORE
INCLUDEPATH += ../praaline-core/include

HEADERS += \
    include/praaline-lib-media_global.h \
    include/SoundInfo.h \
    include/AudioSegmenter.h \
    include/SoxExternal.h

SOURCES += \
    src/SoundInfo.cpp \
    src/AudioSegmenter.cpp \
    src/SoxExternal.cpp

=======
# Praaline
# (c) George Christodoulides 2012-2016

! include( ../../common.pri ) {
    error( Could not find the common.pri file! )
}

CONFIG += staticlib qt thread warn_on stl rtti exceptions c++11

INCLUDEPATH += . .. ../.. ../../pncore
DEPENDPATH += . .. ../.. ../../pncore

TARGET = praaline-media

HEADERS += \
    SoundInfo.h \
    AudioSegmenter.h \
    SoxExternal.h \
    SoxExecutable.h

SOURCES += \
    SoundInfo.cpp \
    AudioSegmenter.cpp \
    SoxExternal.cpp \
    SoxExecutable.cpp
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b
