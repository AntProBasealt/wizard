cmake_minimum_required(VERSION 3.16) # требуемая минимальная версия смаке

find_package(Qt5 COMPONENTS Core Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON) # подключает текущую директорию

set(CMAKE_AUTOMOC ON) # добавляет метаобъектный компилятор
set(CMAKE_AUTOUIC ON) #

set(SOURCES
)

set(UI_FORMS
    1.ui
    2.ui
    3.ui
)

set(APP_SOURCES
    main.cpp
)

set(SOURCES ${APP_SOURCES} ${SOURCES} ${UI_FORMS})

add_executable(app ${SOURCES})

target_link_libraries(app Qt5::Core Qt5::Widgets)
