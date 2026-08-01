cmake_minimum_required(VERSION 3.16)
project(MyPvPClient C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# iOS Cross-Compilation Flagleri
set(CMAKE_SYSTEM_NAME iOS)
set(CMAKE_OSX_DEPLOYMENT_TARGET "14.0")
set(CMAKE_OSX_ARCHITECTURES "arm64")

# Dobby Hooking Framework Inclusion
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/vendor/dobby/include)

# Source Dosyaları
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Dynamic Library (.dylib) Oluştur
add_library(MyPvPClient SHARED ${SOURCES})

set_target_properties(MyPvPClient PROPERTIES
    PREFIX ""
    OUTPUT_NAME "MyPvPClient"
    SUFFIX ".dylib"
)

# iOS FrameWork & System Library Bağlantıları
target_link_libraries(MyPvPClient PRIVATE
    "-framework Foundation"
    "-framework UIKit"
)
