# Install script for directory: /home/marton.sandes/lzt/lorenzetti

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marton.sandes/lzt/lorenzetti/build/core/GaugiKernel/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/core/G4Kernel/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/core/P8Kernel/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/events/CaloHit/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/events/CaloCell/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/events/CaloCluster/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/events/EventInfo/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/events/TruthParticle/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/events/CaloRings/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/reconstruction/CaloCellBuilder/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/reconstruction/CaloClusterBuilder/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/reconstruction/CaloRingerBuilder/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/reconstruction/RootStreamBuilder/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/reconstruction/PileupMergeBuilder/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/generator/PythiaGenerator/cmake_install.cmake")
  include("/home/marton.sandes/lzt/lorenzetti/build/geometry/DetectorATLASModel/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/marton.sandes/lzt/lorenzetti/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
