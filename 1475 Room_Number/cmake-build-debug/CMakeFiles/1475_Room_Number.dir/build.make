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
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1475_Room_Number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1475_Room_Number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1475_Room_Number.dir/flags.make

CMakeFiles/1475_Room_Number.dir/main.cpp.obj: CMakeFiles/1475_Room_Number.dir/flags.make
CMakeFiles/1475_Room_Number.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1475_Room_Number.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1475_Room_Number.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\main.cpp"

CMakeFiles/1475_Room_Number.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1475_Room_Number.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\main.cpp" > CMakeFiles\1475_Room_Number.dir\main.cpp.i

CMakeFiles/1475_Room_Number.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1475_Room_Number.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\main.cpp" -o CMakeFiles\1475_Room_Number.dir\main.cpp.s

# Object files for target 1475_Room_Number
1475_Room_Number_OBJECTS = \
"CMakeFiles/1475_Room_Number.dir/main.cpp.obj"

# External object files for target 1475_Room_Number
1475_Room_Number_EXTERNAL_OBJECTS =

1475_Room_Number.exe: CMakeFiles/1475_Room_Number.dir/main.cpp.obj
1475_Room_Number.exe: CMakeFiles/1475_Room_Number.dir/build.make
1475_Room_Number.exe: CMakeFiles/1475_Room_Number.dir/linklibs.rsp
1475_Room_Number.exe: CMakeFiles/1475_Room_Number.dir/objects1.rsp
1475_Room_Number.exe: CMakeFiles/1475_Room_Number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1475_Room_Number.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1475_Room_Number.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1475_Room_Number.dir/build: 1475_Room_Number.exe

.PHONY : CMakeFiles/1475_Room_Number.dir/build

CMakeFiles/1475_Room_Number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1475_Room_Number.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1475_Room_Number.dir/clean

CMakeFiles/1475_Room_Number.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number" "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number" "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\1475 Room_Number\cmake-build-debug\CMakeFiles\1475_Room_Number.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1475_Room_Number.dir/depend

