# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/10773_Zero.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10773_Zero.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10773_Zero.dir/flags.make

CMakeFiles/10773_Zero.dir/main.cpp.obj: CMakeFiles/10773_Zero.dir/flags.make
CMakeFiles/10773_Zero.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/10773_Zero.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\10773_Zero.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\main.cpp"

CMakeFiles/10773_Zero.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10773_Zero.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\main.cpp" > CMakeFiles\10773_Zero.dir\main.cpp.i

CMakeFiles/10773_Zero.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10773_Zero.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\main.cpp" -o CMakeFiles\10773_Zero.dir\main.cpp.s

# Object files for target 10773_Zero
10773_Zero_OBJECTS = \
"CMakeFiles/10773_Zero.dir/main.cpp.obj"

# External object files for target 10773_Zero
10773_Zero_EXTERNAL_OBJECTS =

10773_Zero.exe: CMakeFiles/10773_Zero.dir/main.cpp.obj
10773_Zero.exe: CMakeFiles/10773_Zero.dir/build.make
10773_Zero.exe: CMakeFiles/10773_Zero.dir/linklibs.rsp
10773_Zero.exe: CMakeFiles/10773_Zero.dir/objects1.rsp
10773_Zero.exe: CMakeFiles/10773_Zero.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 10773_Zero.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\10773_Zero.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10773_Zero.dir/build: 10773_Zero.exe

.PHONY : CMakeFiles/10773_Zero.dir/build

CMakeFiles/10773_Zero.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\10773_Zero.dir\cmake_clean.cmake
.PHONY : CMakeFiles/10773_Zero.dir/clean

CMakeFiles/10773_Zero.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero" "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero" "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\10773_Zero\cmake-build-debug\CMakeFiles\10773_Zero.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/10773_Zero.dir/depend

