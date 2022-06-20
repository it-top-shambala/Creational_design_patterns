cmake_minimum_required(VERSION 3.22)
project(Creational_design_patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(Creational_design_patterns main.cpp "Editor.h" "File_TXT.h" "File_DOC.h" "File_RTF.h"     "EditorHelper.h")
