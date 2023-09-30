cmake_minimum_required(VERSION 3.5)

project(EzCppUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(EzCppUtils main.cpp
    ez_cpp_utils.h
    maidenhead.h
)

include(GNUInstallDirs)
install(TARGETS EzCppUtils
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
