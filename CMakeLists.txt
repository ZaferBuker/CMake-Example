cmake_minimum_required(VERSION "3.20.1") 		# Check CMake version
project ("IntentRecognizer")					# Project name
set(CMAKE_CXX_STANDARD 14) 						# Enable c++14 Standard
add_executable("${PROJECT_NAME}" "Main.cpp") 	# Add executable target with source files
install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "Main.cpp" DESTINATION src)
