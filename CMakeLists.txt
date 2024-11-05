cmake_minimum_required(VERSION 3.5.0)

project(ADDlib VERSION 0.1.0 LANGUAGES C CXX)

set(${PROJECT_NAME} "ADDLib")

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_library(SFML
            NAMES SFML
             " C:/Users/Noah/BugFactory/Libs/CSFML-2.6.1-windows-64-bit/CSFML/include/SFML")
             


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)




# enabling testing
enable_testing()

add_executable(TestMain mainTests.cpp)
target_link_libraries(
  TestMain
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(TestMain)