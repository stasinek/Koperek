#############################################################################
# Makefile for building: KopereQ
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  Koperek32.pro
# Template: app
# Command: C:\Qt\Qt5.5.1\5.5\msvc2010\bin\qmake.exe -spec win32-msvc2010 -o Makefile Koperek32.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = C:\Qt\Qt5.5.1\5.5\msvc2010\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: Koperek32.pro C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\win32-msvc2010\qmake.conf C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\spec_pre.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\common\msvc-desktop.conf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\qconfig.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axbase.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axbase_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axcontainer.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axcontainer_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axserver.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axserver_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_bluetooth.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_bluetooth_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_bootstrap_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_clucene_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_concurrent.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_concurrent_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_core.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_core_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_dbus.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_dbus_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_declarative.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_declarative_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_designer.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_designer_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_designercomponents_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_enginio.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_enginio_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_gui.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_gui_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_help.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_help_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_location.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_location_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimedia.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimedia_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimediawidgets.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_network.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_network_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_nfc.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_nfc_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_opengl.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_opengl_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_openglextensions.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_openglextensions_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_platformsupport_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_positioning.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_positioning_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_printsupport.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_printsupport_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qml.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qml_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qmltest.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qmltest_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quick.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quick_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quickparticles_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quickwidgets.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_script.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_script_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_scripttools.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_scripttools_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sensors.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sensors_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_serialport.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_serialport_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sql.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sql_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_svg.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_svg_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_testlib.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_testlib_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_uiplugin.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_uitools.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_uitools_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webchannel.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webchannel_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkit.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkit_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkitwidgets.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkitwidgets_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_websockets.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_websockets_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_widgets.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_widgets_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_winextras.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_winextras_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xml.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xml_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xmlpatterns.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\qt_functions.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\qt_config.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\qt_config.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\win32-msvc2010\qmake.conf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\spec_post.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\exclusive_builds.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\default_pre.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\default_pre.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\resolve_config.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\exclusive_builds_post.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\default_post.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\c++11.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\exceptions.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\warn_on.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\precompile_header.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\rtti.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\qt.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\resources.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\moc.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\opengl.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\uic.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\windows.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\testcase_targets.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\yacc.prf \
		C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\lex.prf \
		Koperek32.pro \
		C:/Qt/Qt5.5.1/5.5/msvc2010/lib/qtmaind.prl \
		C:/Qt/Qt5.5.1/5.5/msvc2010/lib/Qt5Widgets.prl \
		C:/Qt/Qt5.5.1/5.5/msvc2010/lib/Qt5Gui.prl \
		C:/Qt/Qt5.5.1/5.5/msvc2010/lib/Qt5Core.prl
	$(QMAKE) -spec win32-msvc2010 -o Makefile Koperek32.pro
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\spec_pre.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\common\msvc-desktop.conf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\qconfig.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axbase.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axbase_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axcontainer.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axcontainer_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axserver.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_axserver_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_bluetooth.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_bluetooth_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_bootstrap_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_clucene_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_concurrent.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_concurrent_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_core.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_core_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_dbus.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_dbus_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_declarative.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_declarative_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_designer.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_designer_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_designercomponents_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_enginio.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_enginio_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_gui.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_gui_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_help.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_help_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_location.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_location_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimedia.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimedia_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimediawidgets.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_network.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_network_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_nfc.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_nfc_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_opengl.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_opengl_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_openglextensions.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_openglextensions_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_platformsupport_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_positioning.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_positioning_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_printsupport.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_printsupport_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qml.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qml_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qmldevtools_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qmltest.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qmltest_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quick.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quick_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quickparticles_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quickwidgets.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_quickwidgets_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_script.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_script_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_scripttools.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_scripttools_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sensors.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sensors_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_serialport.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_serialport_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sql.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_sql_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_svg.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_svg_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_testlib.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_testlib_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_uiplugin.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_uitools.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_uitools_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webchannel.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webchannel_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkit.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkit_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkitwidgets.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_websockets.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_websockets_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_widgets.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_widgets_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_winextras.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_winextras_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xml.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xml_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xmlpatterns.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\qt_functions.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\qt_config.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\qt_config.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\win32-msvc2010\qmake.conf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\spec_post.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\exclusive_builds.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\default_pre.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\default_pre.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\resolve_config.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\exclusive_builds_post.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\default_post.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\c++11.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\exceptions.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\warn_on.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\precompile_header.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\rtti.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\qt.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\resources.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\moc.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\opengl.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\uic.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\win32\windows.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\testcase_targets.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\yacc.prf:
C:\Qt\Qt5.5.1\5.5\msvc2010\mkspecs\features\lex.prf:
Koperek32.pro:
C:/Qt/Qt5.5.1/5.5/msvc2010/lib/qtmaind.prl:
C:/Qt/Qt5.5.1/5.5/msvc2010/lib/Qt5Widgets.prl:
C:/Qt/Qt5.5.1/5.5/msvc2010/lib/Qt5Gui.prl:
C:/Qt/Qt5.5.1/5.5/msvc2010/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2010 -o Makefile Koperek32.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
	-$(DEL_FILE) KopereQ.exp
	-$(DEL_FILE) KopereQ.ilk
	-$(DEL_FILE) KopereQ.idb
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) KopereQ.lib KopereQ.pdb

debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
