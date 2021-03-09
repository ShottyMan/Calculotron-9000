# CMakeList.txt : CMake project for Calculotron-9000, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Calculotron-9000 "Calculotron-9000.cpp" "MainHeader.hpp"  "Printing/Number/NumberPrinting.cpp" "Printing/Number/ErrorChecker.cpp" "Printing/Number/NumbersHeader.hpp" "Printing/Text/TextHeader.hpp")

# TODO: Add tests and install targets if needed.
