# Install script for directory: /home/marton.sandes/lzt/lorenzetti/core/GaugiKernel

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/GaugiKernel" TYPE FILE FILES
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/AlgTool.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Algorithm.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Collection.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/ComponentAccumulator.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataHandle.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataVector.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/EDM.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgTool.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgorithm.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/MsgStream.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Property.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StatusCode.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StoreGate.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Timer.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/defines.h"
    "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/macros.h"
    )
endif()

