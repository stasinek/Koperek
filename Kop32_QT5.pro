#
# Qmake Qt5.5.1 file last modified 2018.5, Windows MSC2010,MinGW4.92,LLVM3.7 builds tester
#

TEMPLATE = app
DEFINES += QT_GUI

#CONFIG -= static
CONFIG += precompile_header
CONFIG += warn_on exceptions
CONFIG += c++11

#QMAKE_LFLAGS -= static
QMAKE_CFLAGS_RELEASE += rtti_off stl_off exceptions_off

#Defines target

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
    contains(DEFINES, KOP32_STATIC) {
        TARGET = Kop32_QT5_static
        VPATH += $$absolute_path(./../../../X86_LIBRARIES/stk)
    }
    else {
        TARGET = Kop32_QT5
    }
    message("Target"+$$TARGET+$$VPATH)
}
else {
    CONFIG += console
    contains(DEFINES, KOP32_STATIC) {
        TARGET = Kop32_CON_static
        VPATH += $$absolute_path(./../../../X86_LIBRARIES/stk)
    }
    else {
        TARGET = Kop32_CON
    }
    message("Target"+$$TARGET+$$VPATH)
}
#Include STK library header files

INCLUDEPATH += "./../../../X86_LIBRARIES/STK"

#Windows QT Creator, MinGW

win32-g++: {
    message("win32-g++")
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
QMAKE_CXXFLAGS += -Winline
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wno-multichar
QMAKE_CXXFLAGS += -Wall
QMAKE_CXXFLAGS += -dD
QMAKE_CXXFLAGS += -g
QMAKE_CXXFLAGS += -std=gnu++0x -pthread

QMAKE_CXXFLAGS_RELEASE += -mmmx -msse -msse2 #-msse3
}

#Windows QT Creator 5, MS Visual Studio 2010

win32-msvc2010: {
    message("win32-msvc2010")
    QMAKE_CXXFLAGS_RELEASE += /W0
    QMAKE_CXXFLAGS_RELEASE += /arch:SSE2
    #QMAKE_CXXFLAGS_RELEASE += /arch:SSE3
    QMAKE_CXXFLAGS_RELEASE += /w
}
#Windows QT Creator 5, LLVM/CLANG

win32-clang++: {
    QMAKE_CXX = clang++
    QMAKE_CXXFLAGS += -save-temps
    QMAKE_CXXFLAGS -= -pipe

    QMAKE_CXXFLAGS += -Wno-write-strings
    QMAKE_CXXFLAGS += -Wno-unused-variable
    QMAKE_CXXFLAGS += -Wno-unused-parameter
    QMAKE_CXXFLAGS += -Wno-unused-label
    QMAKE_CXXFLAGS += -Wno-unused-value
    QMAKE_CXXFLAGS += -Wunknown-pragmas
    QMAKE_CXXFLAGS += -Wattributes
    QMAKE_CXXFLAGS += -Winline
    QMAKE_CXXFLAGS += -Wshadow
    QMAKE_CXXFLAGS += -Wno-multichar
    QMAKE_CXXFLAGS += -Wall
    QMAKE_CXXFLAGS += -Qunused-arguments -Wno-error=unused-command-line-argument-hard-error-in-future
    QMAKE_CXXFLAGS += -dD
    QMAKE_CXXFLAGS += -g
    QMAKE_CXXFLAGS += -std=gnu++0x -pthread

    QMAKE_CXXFLAGS_RELEASE += -mmmx -msse -msse2 #-msse3

    QMAKE_CC  = clang

    QMAKE_LFLAGS += -Qunused-arguments -Wno-error=unused-command-line-argument-hard-error-in-future
    QMAKE_LFLAGS -= -mthreads
}
# COMMON SOURCES

SOURCES += \
    ../Kop32/kop32_main.cpp
    contains(DEFINES, KOP32_STATIC) {
        SOURCES += \
        stk_set.cpp \
        stk_test.cpp \
        stk_hash_chain.cpp \
        stk_list.cpp \
        stk_map.cpp \
        cpu/stk_cpu.cpp \
#        cipher/rsa/stk_rsa_single.c \
        cipher/stk_base64.cpp \
        cipher/stk_cipher_mtf.cpp \
        cipher/stk_cipher_API.cpp \
        cipher/stk_cipher_pair.cpp \
        compression/stk_compression_ari.cpp \
        compression/stk_compression_bwt_matrix2.cpp \
        compression/stk_compression_huff.cpp \
        compression/stk_compression_lzss.cpp \
        compression/stk_compression_static_huff.cpp \
        compression/stk_compression_API.cpp \
        database/stk_database_items.cpp \
        database/stk_database.cpp \
        file/stk_file_mime_types.cpp \
        file/ini/stk_file_ini.cpp \
        file/eno/stk_file_lzss_header.cpp \
        file/json/stk_json.cpp \
        file/vfs/stk_file_vfs.cpp \
#        file/xml/stk_xml.cpp \
        hash/stk_hash_crc32.cpp \
        hash/stk_hash_md5.cpp \
        hash/stk_hash_password.cpp \
        hash/stk_hash_ssc1.cpp \
        io/stk_file_io.cpp \
        io/stk_rs232.cpp \
        io/stk_console.cpp \
        koperek/stk_kop32_class.cpp \
        koperek/stk_kop32_controler.cpp \
        koperek/stk_kop32_search.cpp \
#        koperek/stk_kop32_socket_server.cpp \
        koperek/stk_kop32_API.cpp \
        mem/stk_mem.cpp \
        mem/stk_btree.cpp \
        process_journal/stk_journal.cpp \
        pharser/stk_pharse_command_line.cpp \
        pharser/stk_pharse_math.cpp \
#        sockets/stk_sockets.cpp \
        stasm/stk_stasm.cpp \
        threads/stk_threads.cpp \
        time/stk_time.cpp \
        text/stk_cstr_utils.cpp \
        text/stk_cstr_stack.cpp \
        text/stk_cstr_class.cpp \
        koperek/stk_kop32_options.cpp \
        koperek/stk_kop32_list.cpp \
        hash/md5/md5.cpp \
        hash/sha1/hmac_sha1.cpp \
        hash/sha1/sha1.cpp \
        file/zip/miniz.cpp
    }
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
    ./../Kop32/kop32_main.h

contains(DEFINES, KOP32_STATIC) {
        HEADERS += \
    stk_hash_chain.h \
    stk_list.h \
    stk_main.h \
    stk_map.h \
    stk_set.h \
    stk_vector.h \
    3D/stk_3Dvector.h \
    cpu/stk_cpu.h \
    cipher/stk_cipher_API.h \
    cipher/stk_cipher_mtf.h \
    cipher/stk_cipher_pair.h \
    cipher/stk_base64.h \
    cipher/FastAESinC/stk_aes.h \
    compression/stk_compression_static_huff.h \
    compression/stk_compression_ari.h \
    compression/stk_compression_bwt_matrix2.h \
    compression/stk_compression_bwt_matrix3_suffix.h \
    compression/stk_compression_huff.h \
    compression/stk_compression_lzss.h \
    compression/stk_compression_API.h \
    database/stk_database.h \
    database/stk_database_owner.h \
    database/stk_database_alias.h \
    database/stk_database_items.h \
    file/stk_file_mime_types.h \
    file/ini/stk_file_ini.h \
    file/eno/stk_file_lzst_header.h \
    file/json/stk_json.h \
    file/vfs/stk_file_vfs.h \
    file/xml/stk_xml.h \
    hash/stk_hash_ssc1.h \
    hash/stk_hash_crc32.h \
    hash/stk_hash_md5.h \
    hash/stk_hash_password.h \
    hash/md5/md5.h \
    hash/sha1/hmac_sha1.h \
    hash/sha1/sha.h \
    incbin/stk_incbin.h \
    io/stk_file_io.h \
    io/stk_rs232.h \
    io/stk_console.h \
    koperek/stk_kop32_class.h \
    koperek/stk_kop32_search.h \
    koperek/stk_kop32_controler.h \
    koperek/stk_kop32_list.h \
    koperek/stk_kop32_options.h \
    koperek/stk_kop32_socket_server.h \
    koperek/stk_kop32_API.h \
    mem/stk_mem.h \
    mem/stk_btree.h \
    pharser/stk_pharse_math.h \
    pharser/stk_pharse_command_line.h \
    process_journal/stk_journal.h \
    sockets/stk_sockets.h \
    stasm/stk_stasm.h \
    threads/stk_threads.h \
    time/stk_time.h \
    text/stk_cstr_class.h \
    text/stk_cstr_stack.h \
    text/stk_cstr_utils.h \
    text/stk_cstr.h \
    stk_test.h \
    file/zip/miniz.h
    }

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
# LINKER

win32-g++: {
    LIBS += -lwinmm -lgomp
    LIBS += -lwsock32 -lws2_32 -lcrypt32 -lgdi32 -luser32 -lshell32
    contains(DEFINES, KOP32_STATIC) {
          QMAKE_CFLAGS += -DBUILD_STK_LIBRARY
        QMAKE_CXXFLAGS += -DBUILD_STK_LIBRARY
    }
    else {
        LIBS += -static -L$$absolute_path("./../../../X86_LIBRARIES/STK/release/libstk.a")
        LIBS += -L$$absolute_path("./../../../X86_LIBRARIES/openssl-win32/lib/MinGW") libcrypto
        LIBS += -L$$absolute_path("./../../../X86_LIBRARIES/openssl-win32/lib/MinGW") libssl
    }
}
win32-msvc2010: {
    LIBS += \
        winmm.lib wsock32.lib ws2_32.lib crypt32.lib
    LIBS += \
        gdi32.lib user32.lib shell32.lib ole32.lib oleaut32.lib kernel32.lib uuid.lib \
        QtCored.lib
    LIBS -= \
        gomp.lib \
        vcompd.lib

    contains(DEFINES, KOP32_STATIC) {
          QMAKE_CFLAGS += /DBUILD_STK_LIBRARY
        QMAKE_CXXFLAGS += /DBUILD_STK_LIBRARY
        message("MSVC STATIC LIBRARY BUILT IN")
    }
    else {
        LIBS += -L"./../../../../x86_libraries/STK/Desktop_Qt_5_5_0_MSVC2010_32bit-Release/release/libstk.lib"
    }
}
win32-clang++: {
    LIBS += -lwinmm -lgomp
    LIBS += -lwsock32 -lws2_32 -lcrypt32 -lgdi32 -luser32 -lshell32
    contains(DEFINES, KOP32_STATIC) {
          QMAKE_CFLAGS += -DBUILD_STK_LIBRARY
        QMAKE_CXXFLAGS += -DBUILD_STK_LIBRARY
    }
    else {
        LIBS += -dL"./../../../../x86_libraries/STK/Qt_5_5_0_mingw492_32-Release/release/libstk.a"
    }
}
# QT GUI and resources

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
# Windows Icons

win32:RC_ICONS += ICO/icon4.ico
win32:RC_ICONS += ICO/icon6.ico
win32:RC_ICONS += ICO/icon2.ico
win32:RC_ICONS += ICO/icon3.ico
win32:RC_ICONS += ICO/icon5.ico
win32:RC_ICONS += ICO/icon7.ico
win32:RC_ICONS += ICO/icon8.ico

# Other resources

DISTFILES   += \
    ./../../../X86_LIBRARIES/STK/test.txt
OTHER_FILES +=
