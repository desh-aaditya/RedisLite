cmake_minimum_required(VERSION 3.15)

project(RedisLite)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES
    src/*.cpp
)

add_executable(RedisLite ${SOURCES})

if (WIN32)
    target_link_libraries(RedisLite ws2_32)
endif()

find_package(Threads REQUIRED)
target_link_libraries(RedisLite Threads::Threads)