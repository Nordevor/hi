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
CMAKE_SOURCE_DIR = /home/damin/AlexisElefteriu/semana8.1resuelto0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/semana8_1resuelto0.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/semana8_1resuelto0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/semana8_1resuelto0.dir/flags.make

CMakeFiles/semana8_1resuelto0.dir/main.cpp.o: CMakeFiles/semana8_1resuelto0.dir/flags.make
CMakeFiles/semana8_1resuelto0.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/semana8_1resuelto0.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/semana8_1resuelto0.dir/main.cpp.o -c /home/damin/AlexisElefteriu/semana8.1resuelto0/main.cpp

CMakeFiles/semana8_1resuelto0.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/semana8_1resuelto0.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damin/AlexisElefteriu/semana8.1resuelto0/main.cpp > CMakeFiles/semana8_1resuelto0.dir/main.cpp.i

CMakeFiles/semana8_1resuelto0.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/semana8_1resuelto0.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damin/AlexisElefteriu/semana8.1resuelto0/main.cpp -o CMakeFiles/semana8_1resuelto0.dir/main.cpp.s

# Object files for target semana8_1resuelto0
semana8_1resuelto0_OBJECTS = \
"CMakeFiles/semana8_1resuelto0.dir/main.cpp.o"

# External object files for target semana8_1resuelto0
semana8_1resuelto0_EXTERNAL_OBJECTS =

semana8_1resuelto0: CMakeFiles/semana8_1resuelto0.dir/main.cpp.o
semana8_1resuelto0: CMakeFiles/semana8_1resuelto0.dir/build.make
semana8_1resuelto0: CMakeFiles/semana8_1resuelto0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable semana8_1resuelto0"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/semana8_1resuelto0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/semana8_1resuelto0.dir/build: semana8_1resuelto0

.PHONY : CMakeFiles/semana8_1resuelto0.dir/build

CMakeFiles/semana8_1resuelto0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/semana8_1resuelto0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/semana8_1resuelto0.dir/clean

CMakeFiles/semana8_1resuelto0.dir/depend:
	cd /home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damin/AlexisElefteriu/semana8.1resuelto0 /home/damin/AlexisElefteriu/semana8.1resuelto0 /home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug /home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug /home/damin/AlexisElefteriu/semana8.1resuelto0/cmake-build-debug/CMakeFiles/semana8_1resuelto0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/semana8_1resuelto0.dir/depend

