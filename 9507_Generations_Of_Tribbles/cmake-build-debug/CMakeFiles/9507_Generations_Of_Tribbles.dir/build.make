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
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/9507_Generations_Of_Tribbles.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/9507_Generations_Of_Tribbles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/9507_Generations_Of_Tribbles.dir/flags.make

CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.obj: CMakeFiles/9507_Generations_Of_Tribbles.dir/flags.make
CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\9507_Generations_Of_Tribbles.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\main.cpp"

CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\main.cpp" > CMakeFiles\9507_Generations_Of_Tribbles.dir\main.cpp.i

CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\main.cpp" -o CMakeFiles\9507_Generations_Of_Tribbles.dir\main.cpp.s

# Object files for target 9507_Generations_Of_Tribbles
9507_Generations_Of_Tribbles_OBJECTS = \
"CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.obj"

# External object files for target 9507_Generations_Of_Tribbles
9507_Generations_Of_Tribbles_EXTERNAL_OBJECTS =

9507_Generations_Of_Tribbles.exe: CMakeFiles/9507_Generations_Of_Tribbles.dir/main.cpp.obj
9507_Generations_Of_Tribbles.exe: CMakeFiles/9507_Generations_Of_Tribbles.dir/build.make
9507_Generations_Of_Tribbles.exe: CMakeFiles/9507_Generations_Of_Tribbles.dir/linklibs.rsp
9507_Generations_Of_Tribbles.exe: CMakeFiles/9507_Generations_Of_Tribbles.dir/objects1.rsp
9507_Generations_Of_Tribbles.exe: CMakeFiles/9507_Generations_Of_Tribbles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 9507_Generations_Of_Tribbles.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\9507_Generations_Of_Tribbles.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/9507_Generations_Of_Tribbles.dir/build: 9507_Generations_Of_Tribbles.exe

.PHONY : CMakeFiles/9507_Generations_Of_Tribbles.dir/build

CMakeFiles/9507_Generations_Of_Tribbles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\9507_Generations_Of_Tribbles.dir\cmake_clean.cmake
.PHONY : CMakeFiles/9507_Generations_Of_Tribbles.dir/clean

CMakeFiles/9507_Generations_Of_Tribbles.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles" "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles" "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\9507_Generations_Of_Tribbles\cmake-build-debug\CMakeFiles\9507_Generations_Of_Tribbles.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/9507_Generations_Of_Tribbles.dir/depend

