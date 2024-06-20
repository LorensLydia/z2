cmake_minimum_required(VERSION 3.10)
project(z2)

# Установка пути к библиотеке Google Test
set(GTEST_ROOT /path/to/gtest) # Укажите путь к библиотеке Google Test

# Подключение Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Добавление исполняемого файла
add_executable(z2 main.cpp)

# Целевая библиотека
target_link_libraries(z2 ${GTEST_BOTH_LIBRARIES} pthread)
