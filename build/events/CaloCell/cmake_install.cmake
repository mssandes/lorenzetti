# Install script for directory: /home/marton.sandes/lzt/lorenzetti/events/CaloCell

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CaloCell" TYPE FILE FILES
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/CaloCell.h"
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/CaloCellContainer.h"
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/CaloCellConverter.h"
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/CaloDetDescriptor.h"
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/CaloDetDescriptorCollection.h"
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/CaloDetDescriptorConverter.h"
    "/home/marton.sandes/lzt/lorenzetti/events/CaloCell/CaloCell/enumeration.h"
    )
endif()

