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
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1193_Finding_Fraction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1193_Finding_Fraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1193_Finding_Fraction.dir/flags.make

CMakeFiles/1193_Finding_Fraction.dir/main.cpp.obj: CMakeFiles/1193_Finding_Fraction.dir/flags.make
CMakeFiles/1193_Finding_Fraction.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1193_Finding_Fraction.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1193_Finding_Fraction.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\main.cpp"

CMakeFiles/1193_Finding_Fraction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1193_Finding_Fraction.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\main.cpp" > CMakeFiles\1193_Finding_Fraction.dir\main.cpp.i

CMakeFiles/1193_Finding_Fraction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1193_Finding_Fraction.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\main.cpp" -o CMakeFiles\1193_Finding_Fraction.dir\main.cpp.s

# Object files for target 1193_Finding_Fraction
1193_Finding_Fraction_OBJECTS = \
"CMakeFiles/1193_Finding_Fraction.dir/main.cpp.obj"

# External object files for target 1193_Finding_Fraction
1193_Finding_Fraction_EXTERNAL_OBJECTS =

1193_Finding_Fraction.exe: CMakeFiles/1193_Finding_Fraction.dir/main.cpp.obj
1193_Finding_Fraction.exe: CMakeFiles/1193_Finding_Fraction.dir/build.make
1193_Finding_Fraction.exe: CMakeFiles/1193_Finding_Fraction.dir/linklibs.rsp
1193_Finding_Fraction.exe: CMakeFiles/1193_Finding_Fraction.dir/objects1.rsp
1193_Finding_Fraction.exe: CMakeFiles/1193_Finding_Fraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1193_Finding_Fraction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1193_Finding_Fraction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1193_Finding_Fraction.dir/build: 1193_Finding_Fraction.exe

.PHONY : CMakeFiles/1193_Finding_Fraction.dir/build

CMakeFiles/1193_Finding_Fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1193_Finding_Fraction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1193_Finding_Fraction.dir/clean

CMakeFiles/1193_Finding_Fraction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction" "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction" "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\1193 Finding_Fraction\cmake-build-debug\CMakeFiles\1193_Finding_Fraction.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1193_Finding_Fraction.dir/depend

