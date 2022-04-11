cmake_minimum_required(VERSION 2.8)
project(3DPlot)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_ROOT /home/recursion/Qt/5.15.2/gcc_64)
set(QT_PLUGIN_PATH ${QT_ROOT}/plugins)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH ${QT_ROOT}/lib/cmake)
set(QT_QMAKE_EXECUTABLE ${QT_ROOT}/bin/qmake)

set(QT_MOC_EXECUTABLE ${QT_ROOT}/bin/moc)
set(QT_RCC_EXECUTABLE ${QT_ROOT}/bin/rrc)
set(QT_UIC_EXECUTABLE ${QT_ROOT}/bin/uic)


find_package(Qt5 COMPONENTS Core Widgets DataVisualization REQUIRED)

set(CXX_SRCS
  main.cpp
)

include_directories(
	/home/recursion/Qt/5.15.2/gcc_64/include/QtWidgets
	/home/recursion/Qt/5.15.2/gcc_64/include/QtCore
)

add_executable(${PROJECT_NAME} ${CXX_SRCS})

target_link_libraries(${PROJECT_NAME}
  Qt5::Core
  Qt5::Widgets
  Qt5::DataVisualization
)

install(TARGETS ${PROJECT_NAME} CONFIGURATIONS Debug RUNTIME DESTINATION install)
