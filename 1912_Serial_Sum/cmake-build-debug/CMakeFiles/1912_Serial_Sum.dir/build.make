# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1912_Serial_Sum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1912_Serial_Sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1912_Serial_Sum.dir/flags.make

CMakeFiles/1912_Serial_Sum.dir/main.cpp.obj: CMakeFiles/1912_Serial_Sum.dir/flags.make
CMakeFiles/1912_Serial_Sum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1912_Serial_Sum.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1912_Serial_Sum.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\main.cpp"

CMakeFiles/1912_Serial_Sum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1912_Serial_Sum.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\main.cpp" > CMakeFiles\1912_Serial_Sum.dir\main.cpp.i

CMakeFiles/1912_Serial_Sum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1912_Serial_Sum.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\main.cpp" -o CMakeFiles\1912_Serial_Sum.dir\main.cpp.s

# Object files for target 1912_Serial_Sum
1912_Serial_Sum_OBJECTS = \
"CMakeFiles/1912_Serial_Sum.dir/main.cpp.obj"

# External object files for target 1912_Serial_Sum
1912_Serial_Sum_EXTERNAL_OBJECTS =

1912_Serial_Sum.exe: CMakeFiles/1912_Serial_Sum.dir/main.cpp.obj
1912_Serial_Sum.exe: CMakeFiles/1912_Serial_Sum.dir/build.make
1912_Serial_Sum.exe: CMakeFiles/1912_Serial_Sum.dir/linklibs.rsp
1912_Serial_Sum.exe: CMakeFiles/1912_Serial_Sum.dir/objects1.rsp
1912_Serial_Sum.exe: CMakeFiles/1912_Serial_Sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1912_Serial_Sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1912_Serial_Sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1912_Serial_Sum.dir/build: 1912_Serial_Sum.exe

.PHONY : CMakeFiles/1912_Serial_Sum.dir/build

CMakeFiles/1912_Serial_Sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1912_Serial_Sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1912_Serial_Sum.dir/clean

CMakeFiles/1912_Serial_Sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum" "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum" "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\1912_Serial_Sum\cmake-build-debug\CMakeFiles\1912_Serial_Sum.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1912_Serial_Sum.dir/depend

