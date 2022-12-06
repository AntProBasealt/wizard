cmake_minimum_required(VERSION 3.16) # требуемая минимальная версия смаке

find_package(Qt5 COMPONENTS Core Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON) # подключает текущую директорию

set(CMAKE_AUTOMOC ON) # добавляет метаобъектный компилятор
set(CMAKE_AUTOUIC ON) #
set(CMAKE_AUTORCC ON)

set(SOURCES
    1.cpp
    2.cpp
    3.cpp
    4.cpp
)

set(UI_FORMS
    1.ui
    2.ui
    3.ui
    4.ui
)

set(APP_SOURCES
    main.cpp
)

set(RESOURCES
    resources.qrc
)

qt5_add_resources (RCC_SOURCES ${RESOURCES})

set(SOURCES ${APP_SOURCES} ${SOURCES} ${UI_FORMS})

add_executable(app ${SOURCES} ${RCC_SOURCES})

target_link_libraries(app Qt5::Core Qt5::Widgets)
