project(s_linked_list)

cmake_minimum_required(VERSION 3.0)

set(APPLICATION_NAME ${PROJECT_NAME})

set(APP_VER_MAJOR "0")
set(APP_VER_MINOR "0")
set(APP_VER_PATCH "1")

SET(APPLICATION_VERSION "${APP_VER_MAJOR}.${APP_VER_MINOR}.${APP_VER_PATCH}")

set(LIBRARY_VERSION "0.0.0")
set(LIBRARY_SOVERSION "0")

enable_testing()

set(CMAKE_VERBOSE_MAKEFILE TRUE)
set(CMAKE_COLOR_MAKEFILE FALSE)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

IF(UNIX)
        SET(CMAKE_CXX_FLAGS "-Wall -W -Werror")
        SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -DDEBUG")
        SET(CMAKE_CXX_FLAGS_RELEASE"${CMAKE_CXX_FLAGS} -DNDEBUG -O2")
        SET(CMAKE_C_FLAGS "-Wall -W -Werror -std=c99")
        SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} -DDEBUG")
        SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} -DNDEBUG -O2")
ENDIF()

INCLUDE_DIRECTORIES(${gtest_SOURCE_DIR}
                    ${gtest_SOURCE_DIR}/include
                    ${PROJECT_SOURCE_DIR}/src)

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(gtest-1.7.0)
