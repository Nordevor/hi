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
CMAKE_COMMAND = /snap/clion/39/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/39/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/damin/AlexisElefteriu/punteros2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damin/AlexisElefteriu/punteros2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/punteros2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/punteros2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/punteros2.dir/flags.make

CMakeFiles/punteros2.dir/main.cpp.o: CMakeFiles/punteros2.dir/flags.make
CMakeFiles/punteros2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damin/AlexisElefteriu/punteros2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/punteros2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/punteros2.dir/main.cpp.o -c /home/damin/AlexisElefteriu/punteros2/main.cpp

CMakeFiles/punteros2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/punteros2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damin/AlexisElefteriu/punteros2/main.cpp > CMakeFiles/punteros2.dir/main.cpp.i

CMakeFiles/punteros2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/punteros2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damin/AlexisElefteriu/punteros2/main.cpp -o CMakeFiles/punteros2.dir/main.cpp.s

# Object files for target punteros2
punteros2_OBJECTS = \
"CMakeFiles/punteros2.dir/main.cpp.o"

# External object files for target punteros2
punteros2_EXTERNAL_OBJECTS =

punteros2: CMakeFiles/punteros2.dir/main.cpp.o
punteros2: CMakeFiles/punteros2.dir/build.make
punteros2: CMakeFiles/punteros2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damin/AlexisElefteriu/punteros2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable punteros2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/punteros2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/punteros2.dir/build: punteros2

.PHONY : CMakeFiles/punteros2.dir/build

CMakeFiles/punteros2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/punteros2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/punteros2.dir/clean

CMakeFiles/punteros2.dir/depend:
	cd /home/damin/AlexisElefteriu/punteros2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damin/AlexisElefteriu/punteros2 /home/damin/AlexisElefteriu/punteros2 /home/damin/AlexisElefteriu/punteros2/cmake-build-debug /home/damin/AlexisElefteriu/punteros2/cmake-build-debug /home/damin/AlexisElefteriu/punteros2/cmake-build-debug/CMakeFiles/punteros2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/punteros2.dir/depend

