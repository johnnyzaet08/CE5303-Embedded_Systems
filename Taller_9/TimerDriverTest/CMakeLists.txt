
cmake_minimum_required(VERSION 3.10)
project(TimerDriverTest)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
set(SOURCE_LIB lib/timer_test_lib.c)
set(SOURCE_MAIN src/main.c)

# Generate executable
add_library(TimerTestLib STATIC ${SOURCE_LIB})
add_executable(TimerTest ${SOURCE_MAIN})
target_link_libraries(TimerTest TimerTestLib)
