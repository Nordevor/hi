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
CMAKE_SOURCE_DIR = "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/semana10_12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/semana10_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/semana10_12.dir/flags.make

CMakeFiles/semana10_12.dir/main.cpp.o: CMakeFiles/semana10_12.dir/flags.make
CMakeFiles/semana10_12.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/semana10_12.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/semana10_12.dir/main.cpp.o -c "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/main.cpp"

CMakeFiles/semana10_12.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/semana10_12.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/main.cpp" > CMakeFiles/semana10_12.dir/main.cpp.i

CMakeFiles/semana10_12.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/semana10_12.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/main.cpp" -o CMakeFiles/semana10_12.dir/main.cpp.s

CMakeFiles/semana10_12.dir/main2.cpp.o: CMakeFiles/semana10_12.dir/flags.make
CMakeFiles/semana10_12.dir/main2.cpp.o: ../main2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/semana10_12.dir/main2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/semana10_12.dir/main2.cpp.o -c "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/main2.cpp"

CMakeFiles/semana10_12.dir/main2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/semana10_12.dir/main2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/main2.cpp" > CMakeFiles/semana10_12.dir/main2.cpp.i

CMakeFiles/semana10_12.dir/main2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/semana10_12.dir/main2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/main2.cpp" -o CMakeFiles/semana10_12.dir/main2.cpp.s

# Object files for target semana10_12
semana10_12_OBJECTS = \
"CMakeFiles/semana10_12.dir/main.cpp.o" \
"CMakeFiles/semana10_12.dir/main2.cpp.o"

# External object files for target semana10_12
semana10_12_EXTERNAL_OBJECTS =

semana10_12: CMakeFiles/semana10_12.dir/main.cpp.o
semana10_12: CMakeFiles/semana10_12.dir/main2.cpp.o
semana10_12: CMakeFiles/semana10_12.dir/build.make
semana10_12: CMakeFiles/semana10_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable semana10_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/semana10_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/semana10_12.dir/build: semana10_12

.PHONY : CMakeFiles/semana10_12.dir/build

CMakeFiles/semana10_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/semana10_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/semana10_12.dir/clean

CMakeFiles/semana10_12.dir/depend:
	cd "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12" "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12" "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug" "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug" "/home/damin/AlexisElefteriu/Alexis 2.0/semana10-12/cmake-build-debug/CMakeFiles/semana10_12.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/semana10_12.dir/depend

