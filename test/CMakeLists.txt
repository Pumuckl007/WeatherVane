cmake_minimum_required(VERSION 3.2)
project(WEATHER_VANE_tests)

include_directories(${WEATHER_VANE_HEADERS_DIR}
  ${PROJECT_SOURCE_DIR}/test/
  ${WEATHER_VANE_MOCKS_DIR})

set(SOURCE_FILES TestMain.cpp)

add_executable(WEATHER_VANE_tests ${SOURCE_FILES})

set_target_properties (WEATHER_VANE_tests PROPERTIES LINK_FLAGS "-Wall")

target_link_libraries(WEATHER_VANE_tests WEATHER_VANE_lib)