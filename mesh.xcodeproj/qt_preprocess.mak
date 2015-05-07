#############################################################################
# Makefile for building: mesh.app/Contents/MacOS/mesh
# Generated by qmake (3.0) (Qt 5.4.1)
# Project:  mesh.pro
# Template: app
# Command: /Users/XiangSun/Qt5.4.1/5.4/clang_64/bin/qmake -spec macx-xcode -o mesh.xcodeproj/project.pbxproj mesh.pro
#############################################################################

MAKEFILE      = project.pbxproj

MOC       = /Users/XiangSun/Qt5.4.1/5.4/clang_64/bin/moc
UIC       = /Users/XiangSun/Qt5.4.1/5.4/clang_64/bin/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_CORE_LIB
INCPATH       = -I. -I/src -I/Users/XiangSun/Library/Frameworks/QGLViewer.framework/Versions/2/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtOpenGL.framework/Versions/5/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtXml.framework/Versions/5/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers -I.moc -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/System/Library/Frameworks/AGL.framework/Headers -I. -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/mkspecs/macx-clang -F/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compilers: .moc/moc_mainwindow.cpp ui_mainwindow.h
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: .moc/moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) .moc/moc_mainwindow.cpp
.moc/moc_mainwindow.cpp: /Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QMainWindow \
		/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QApplication \
		mainwindow.h
	/Users/XiangSun/Qt5.4.1/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/mkspecs/macx-clang -I/Users/XiangSun/Documents/Program/libQGLViewer-2.6.1/examples/mesh -I/src -I/Users/XiangSun/Library/Frameworks/QGLViewer.framework/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtOpenGL.framework/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtGui.framework/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtXml.framework/Headers -I/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib/QtCore.framework/Headers -F/Users/XiangSun/Qt5.4.1/5.4/clang_64/lib mainwindow.h -o .moc/moc_mainwindow.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui \
		viewer.h \
		/Users/XiangSun/Library/Frameworks/QGLViewer.framework/Versions/2/Headers/qglviewer.h
	/Users/XiangSun/Qt5.4.1/5.4/clang_64/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 
