# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/44/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/44/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/damin/AlexisElefteriu/Alexis 2.0/objetos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/objetos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/objetos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/objetos.dir/flags.make

CMakeFiles/objetos.dir/main.cpp.o: CMakeFiles/objetos.dir/flags.make
CMakeFiles/objetos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/objetos.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/objetos.dir/main.cpp.o -c "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/main.cpp"

CMakeFiles/objetos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/objetos.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/main.cpp" > CMakeFiles/objetos.dir/main.cpp.i

CMakeFiles/objetos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/objetos.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/main.cpp" -o CMakeFiles/objetos.dir/main.cpp.s

CMakeFiles/objetos.dir/CRectangulo.cpp.o: CMakeFiles/objetos.dir/flags.make
CMakeFiles/objetos.dir/CRectangulo.cpp.o: ../CRectangulo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/objetos.dir/CRectangulo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/objetos.dir/CRectangulo.cpp.o -c "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/CRectangulo.cpp"

CMakeFiles/objetos.dir/CRectangulo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/objetos.dir/CRectangulo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/CRectangulo.cpp" > CMakeFiles/objetos.dir/CRectangulo.cpp.i

CMakeFiles/objetos.dir/CRectangulo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/objetos.dir/CRectangulo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/CRectangulo.cpp" -o CMakeFiles/objetos.dir/CRectangulo.cpp.s

# Object files for target objetos
objetos_OBJECTS = \
"CMakeFiles/objetos.dir/main.cpp.o" \
"CMakeFiles/objetos.dir/CRectangulo.cpp.o"

# External object files for target objetos
objetos_EXTERNAL_OBJECTS =

objetos: CMakeFiles/objetos.dir/main.cpp.o
objetos: CMakeFiles/objetos.dir/CRectangulo.cpp.o
objetos: CMakeFiles/objetos.dir/build.make
objetos: CMakeFiles/objetos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable objetos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/objetos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/objetos.dir/build: objetos

.PHONY : CMakeFiles/objetos.dir/build

CMakeFiles/objetos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/objetos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/objetos.dir/clean

CMakeFiles/objetos.dir/depend:
	cd "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/damin/AlexisElefteriu/Alexis 2.0/objetos" "/home/damin/AlexisElefteriu/Alexis 2.0/objetos" "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug" "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug" "/home/damin/AlexisElefteriu/Alexis 2.0/objetos/cmake-build-debug/CMakeFiles/objetos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/objetos.dir/depend

