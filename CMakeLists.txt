cmake_minimum_required(VERSION 3.22)

project(example-app)

# this is an option
option(CPP_USE_MODULAR_STL "Use an emulated modular stl !" OFF)

# ==================================================================
# Build configuration
# ==================================================================


set(CMAKE_CXX_STANDARD 20 CACHE STRING "The C++ standard to use")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

# ==================================================================
# Specify location of build targets
# ==================================================================

set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

# define output folder for libs and executables
foreach( OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
    string( TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG )
    set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_BINARY_DIR}/lib)
    set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_BINARY_DIR}/lib)
    set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_BINARY_DIR}/bin)
endforeach( OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES )

# ==================================================================
# Project are organized by targets (executables, libraries, ...)
# ==================================================================

add_executable(example-app
	src/main.cpp
	# list all sources (.cpp/.h)
) 

#target_link_libraries(example-app
#    PRIVATE
#        another-library-manage-with-cmake
#)

if(CPP_USE_MODULAR_STL)
    # add a compilation definition (as if we add a #define MACRO_NAME in compiled files)
    target_compile_definitions(example-app PRIVATE MACRO_NAME)
endif()

# ==================================================================
# Can also add subdirectories with their own CMakeLists.txt
# ==================================================================

#add_subdirectory(subdir})

