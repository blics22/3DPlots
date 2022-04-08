cmake_minimum_required(VERSION 2.8)
project(3DPlot)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_ROOT .../qt-5.8.0)
set(QT_PLUGIN_PATH ${QT_ROOT}/plugins)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH ${QT_ROOT})
set(QT_QMAKE_EXECUTABLE ${QT_ROOT}/bin/qmake)

set(QT_MOC_EXECUTABLE ${QT_ROOT}/bin/moc)
set(QT_RCC_EXECUTABLE ${QT_ROOT}/bin/rrc)
set(QT_UIC_EXECUTABLE ${QT_ROOT}/bin/uic)

set(CMAKE_CXX_FLAGS "${DEBUG_FLAG} -fPIC -Wno-write-strings -D_OPTIM -DOPTIM -w -std=c++11")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-undefined")
set(CMAKE_EXE_LINKER_FLAGS "Wl,--no-undefined")

find_package(Qt5 COMPONENTS Core Widgets DataVisualization REQUIRED)

set(CXX_SRCS
  main.cpp
)

include_directories(
  ${Qt5Core_INCLUDE_DIRS}
  ${Qt5Widgets_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME} ${CXX_SRCS})

target_link_libraries(${PROJECT_NAME}
  Qt5::Core
  Qt5::QWidgets
  Qt5::DataVisualization
)
