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
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/9012_Bracket_____.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/9012_Bracket_____.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/9012_Bracket_____.dir/flags.make

CMakeFiles/9012_Bracket_____.dir/main.cpp.obj: CMakeFiles/9012_Bracket_____.dir/flags.make
CMakeFiles/9012_Bracket_____.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/9012_Bracket_____.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\9012_Bracket_____.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\main.cpp"

CMakeFiles/9012_Bracket_____.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/9012_Bracket_____.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\main.cpp" > CMakeFiles\9012_Bracket_____.dir\main.cpp.i

CMakeFiles/9012_Bracket_____.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/9012_Bracket_____.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\main.cpp" -o CMakeFiles\9012_Bracket_____.dir\main.cpp.s

# Object files for target 9012_Bracket_____
9012_Bracket______OBJECTS = \
"CMakeFiles/9012_Bracket_____.dir/main.cpp.obj"

# External object files for target 9012_Bracket_____
9012_Bracket______EXTERNAL_OBJECTS =

9012_Bracket_____.exe: CMakeFiles/9012_Bracket_____.dir/main.cpp.obj
9012_Bracket_____.exe: CMakeFiles/9012_Bracket_____.dir/build.make
9012_Bracket_____.exe: CMakeFiles/9012_Bracket_____.dir/linklibs.rsp
9012_Bracket_____.exe: CMakeFiles/9012_Bracket_____.dir/objects1.rsp
9012_Bracket_____.exe: CMakeFiles/9012_Bracket_____.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 9012_Bracket_____.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\9012_Bracket_____.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/9012_Bracket_____.dir/build: 9012_Bracket_____.exe

.PHONY : CMakeFiles/9012_Bracket_____.dir/build

CMakeFiles/9012_Bracket_____.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\9012_Bracket_____.dir\cmake_clean.cmake
.PHONY : CMakeFiles/9012_Bracket_____.dir/clean

CMakeFiles/9012_Bracket_____.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____" "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____" "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\9012_Bracket_____\cmake-build-debug\CMakeFiles\9012_Bracket_____.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/9012_Bracket_____.dir/depend

