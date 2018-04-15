TEMPLATE = app
DEFINES += QT_GUI

QMAKE_CFLAGS_RELEASE += rtti_off stl_off exceptions_off

contains (QMAKE_COMPILER_DEFINES,__clang__) {
QMAKE_CC  = clang
QMAKE_CXX = clang++
}
#moc.depend_command = g++ -E -M ${QMAKE_FILE_NAME} | sed "s,^.*: ,,"
#NASM.output  = ${QMAKE_FILE_BASE}_asm.o
#NASM.commands = c:/nasm/nasm -f elf -g -F dwarf --prefix ${PWD}${QMAKE_FILE_NAME} -o ${PWD}/${QMAKE_FILE_OUT}
#NASM.input = ASM_SOURCES
#YASM.output  = ${QMAKE_FILE_BASE}_asm.o
#YASM.commands = c:/YASM/YASM -f elf -g dwarf2 -w -o ${QMAKE_FILE_OUT} ${PWD}${QMAKE_FILE_NAME}
#YASM.input = ASM_SOURCES
#FASM.output  = ${QMAKE_FILE_BASE}_asm.o
#FASM.commands = c:/fasm/fasm  ${PWD}${QMAKE_FILE_NAME} ${QMAKE_FILE_OUT}
#FASM.input = ASM_SOURCES
#QMAKE_EXTRA_COMPILERS += YASM
#ASM_SOURCES += 	../../../../x86_libraries/SSTSOFT/cpu/tsoft_cpu_nasm.asm

contains(DEFINES, QT_GUI) {
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT -= uitools
QT -= axserver axcontainer
QT -= qml qmltest
QT -= svg
QT -= webkit webkitwidgets
QT -= sql
QT -= serialport
QT -= sensors
QT -= multimedia multimediawidgets
QT -= network
QT -= xml xmlpatterns
QT -= network
QT -= winextras x11extras
QT -= opengl
QT -= declarative
QT -= dbus
QT -= concurent
QT -= printsupport
QT -= testlib
TARGET = KopereQ
}
else {
TARGET = Kop32
CONFIG += console
}

CONFIG -= static
CONFIG += precompile_header
CONFIG += warn_on exceptions
CONFIG += c++11

INCLUDEPATH += ./../../../x86_libraries/STK


contains(QMAKE_COMPILER_DEFINES, __GNUC__) {
QMAKE_CXXFLAGS -= -pipe
QMAKE_CXXFLAGS += -save-temps
QMAKE_CXXFLAGS += -Wno-write-strings
QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wno-unused-label
QMAKE_CXXFLAGS += -Wno-unused-value
QMAKE_CXXFLAGS += -Wno-inline
QMAKE_CXXFLAGS += -Wunknown-pragmas
QMAKE_CXXFLAGS += -Wattributes
QMAKE_CXXFLAGS += -fverbose-asm
QMAKE_CXXFLAGS += -fstrict-aliasing
QMAKE_CXXFLAGS += -dD
QMAKE_CXXFLAGS += -g
QMAKE_CXXFLAGS += -std=gnu++0x -pthread
QMAKE_CXXFLAGS += -Wno-multichar

QMAKE_CXXFLAGS += -Winline
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wall
QMAKE_CXXFLAGS += -malign-double
QMAKE_CXXFLAGS += -momit-leaf-frame-pointer
QMAKE_CXXFLAGS += -fwrapv
QMAKE_CXXFLAGS += -funroll-loops
QMAKE_CXXFLAGS += -m32 -mfpmath=sse -flto -O3
QMAKE_CXXFLAGS += -mpreferred-stack-boundary=8
QMAKE_CXXFLAGS += -mmmx -msse -msse2 #-msse3

}

contains(QMAKE_COMPILER_DEFINES, __clang__) {
QMAKE_CXXFLAGS += -save-temps
QMAKE_CXXFLAGS += -Wno-write-strings
QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wno-unused-label
QMAKE_CXXFLAGS += -Wno-unused-value
QMAKE_CXXFLAGS += -Wunknown-pragmas
QMAKE_CXXFLAGS += -Wattributes
QMAKE_CXXFLAGS += -fverbose-asm
QMAKE_CXXFLAGS += -fstrict-aliasing
QMAKE_CXXFLAGS += -dD
QMAKE_CXXFLAGS += -g
QMAKE_CXXFLAGS += -std=gnu++0x -pthread
QMAKE_CXXFLAGS += -Wno-multichar

QMAKE_CXXFLAGS += -Winline
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wall
QMAKE_CXXFLAGS += -malign-double
QMAKE_CXXFLAGS += -momit-leaf-frame-pointer
QMAKE_CXXFLAGS += -fwrapv
QMAKE_CXXFLAGS += -funroll-loops
QMAKE_CXXFLAGS += -m32 --32 -mfpmath=sse -flto -O3
QMAKE_CXXFLAGS += -mpreferred-stack-boundary=8
QMAKE_CXXFLAGS += -mmmx -msse -msse2 #-msse3
QMAKE_CXXFLAGS += -Qunused-arguments -Wno-error=unused-command-line-argument-hard-error-in-future
QMAKE_CXXFLAGS -= -fno-keep-inline-dllexport
QMAKE_CXXFLAGS -= -finline-small-functions
QMAKE_CXXFLAGS -= -pipe

QMAKE_LFLAGS += -Qunused-arguments -Wno-error=unused-command-line-argument-hard-error-in-future
QMAKE_LFLAGS -= -mthreads
}

contains(QMAKE_COMPILER_DEFINES, _MSC_VER) {
QMAKE_CXXFLAGS += /arch:SSE2
}

SOURCES += \
    ../Kop32/kop32_main.cpp

contains(DEFINES, QT_GUI) {
        SOURCES += \
        tapplication.cpp \
        tmain_form.cpp \
        tmain_mini_form.cpp \
        twizard_form.cpp \
        treplace_form.cpp \
        tabout_form.cpp \
        tfinished_form.cpp \
        treplace_rename_form.cpp \
        tjournal_form.cpp \
        tpassword_form.cpp \
        tlister_form.cpp \
        tselect_form.cpp \
        tconsole_form.cpp
}
HEADERS += \
    ../Kop32/kop32_main.h

contains(DEFINES, QT_GUI) {
HEADERS += \
        tapplication.h \
        tmain_form.h \
        tmain_mini_form.h \
        twizard_form.h \
        treplace_form.h \
        tabout_form.h \
        tfinished_form.h \
        treplace_rename_form.h \
        tjournal_form.h \
        tpassword_form.h \
        tlister_form.h \
        tselect_form.h \
        tconsole_form.h
}
contains(QMAKE_COMPILER_DEFINES, __GNUC__) {
LIBS += -lwinmm -lgomp
LIBS += -lwsock32 -lws2_32 -lcrypt32 -lgdi32 -luser32 -lshell32
LIBS += -L"./../../../../x86_libraries/STK/Qt_5_5_1_mingw492_32-Release/release/libstk.a"
#LIBS += -L"../../../x86_libraries/BHAPI/src/libs/freetype/objs/debug" -libfreetype
#LIBS += -L"../../../x86_libraries/BHAPI" -libBHAPI
}
contains(QMAKE_COMPILER_DEFINES, _MSC_VER) {
LIBS += \
    winmm.lib wsock32.lib ws2_32.lib crypt32.lib
LIBS += \
    gdi32.lib user32.lib shell32.lib ole32.lib oleaut32.lib kernel32.lib uuid.lib \
    QtCored.lib
LIBS -= \
    gomp.lib \
    vcompd.lib
LIBS += -L"./../../../../x86_libraries/STK/Desktop_Qt_5_5_1_MSVC2010_32bit-Release/release/libstk.lib"
}

contains(DEFINES, QT_GUI) {
FORMS += \
        tmain_form.ui \
        tmain_mini_form.ui \
        twizard_form.ui \
        treplace_form.ui \
        tabout_form.ui \
        tfinished_form.ui \
        treplace_rename_form.ui \
        tjournal_form.ui \
        tpassword_form.ui \
        tlister_form.ui \
        tselect_form.ui \
        tconsole_form.ui

RESOURCES += \
        resources.qrc
}

win32:RC_ICONS += ICO/icon4.ico
win32:RC_ICONS += ICO/icon6.ico
win32:RC_ICONS += ICO/icon2.ico
win32:RC_ICONS += ICO/icon3.ico
win32:RC_ICONS += ICO/icon5.ico
win32:RC_ICONS += ICO/icon7.ico
win32:RC_ICONS += ICO/icon8.ico

DISTFILES   += \
    ../../../../x86_libraries/SSTSOFT/test.txt
OTHER_FILES +=
