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
CMAKE_SOURCE_DIR = /home/damin/AlexisElefteriu/semaforo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damin/AlexisElefteriu/semaforo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/semaforo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/semaforo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/semaforo.dir/flags.make

CMakeFiles/semaforo.dir/main.cpp.o: CMakeFiles/semaforo.dir/flags.make
CMakeFiles/semaforo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damin/AlexisElefteriu/semaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/semaforo.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/semaforo.dir/main.cpp.o -c /home/damin/AlexisElefteriu/semaforo/main.cpp

CMakeFiles/semaforo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/semaforo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damin/AlexisElefteriu/semaforo/main.cpp > CMakeFiles/semaforo.dir/main.cpp.i

CMakeFiles/semaforo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/semaforo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damin/AlexisElefteriu/semaforo/main.cpp -o CMakeFiles/semaforo.dir/main.cpp.s

# Object files for target semaforo
semaforo_OBJECTS = \
"CMakeFiles/semaforo.dir/main.cpp.o"

# External object files for target semaforo
semaforo_EXTERNAL_OBJECTS =

semaforo: CMakeFiles/semaforo.dir/main.cpp.o
semaforo: CMakeFiles/semaforo.dir/build.make
semaforo: CMakeFiles/semaforo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damin/AlexisElefteriu/semaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable semaforo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/semaforo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/semaforo.dir/build: semaforo

.PHONY : CMakeFiles/semaforo.dir/build

CMakeFiles/semaforo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/semaforo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/semaforo.dir/clean

CMakeFiles/semaforo.dir/depend:
	cd /home/damin/AlexisElefteriu/semaforo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damin/AlexisElefteriu/semaforo /home/damin/AlexisElefteriu/semaforo /home/damin/AlexisElefteriu/semaforo/cmake-build-debug /home/damin/AlexisElefteriu/semaforo/cmake-build-debug /home/damin/AlexisElefteriu/semaforo/cmake-build-debug/CMakeFiles/semaforo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/semaforo.dir/depend

