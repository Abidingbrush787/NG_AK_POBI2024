cmake_minimum_required(VERSION 3.10)

# Ustaw nazwę projektu
project(imaginaryNumbers)

# Ustaw standard C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Dodaj pliki źródłowe
add_executable(ImaginaryNumbers source/main.cpp library/ImaginaryNumb.cpp)

# Dołącz katalog z plikami nagłówkowymi
target_include_directories(ImaginaryNumbers PUBLIC "${PROJECT_SOURCE_DIR}/library")
