# CMakeList.txt : CMake project for Practical_Week_4, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Practical_Week_4 "Practical_Week_4.cpp" "Practical_Week_4.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Practical_Week_4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
