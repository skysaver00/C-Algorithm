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
CMAKE_SOURCE_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/9465_Sticker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/9465_Sticker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/9465_Sticker.dir/flags.make

CMakeFiles/9465_Sticker.dir/main.cpp.obj: CMakeFiles/9465_Sticker.dir/flags.make
CMakeFiles/9465_Sticker.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/9465_Sticker.dir/main.cpp.obj"
	X:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\9465_Sticker.dir\main.cpp.obj -c "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\main.cpp"

CMakeFiles/9465_Sticker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/9465_Sticker.dir/main.cpp.i"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\main.cpp" > CMakeFiles\9465_Sticker.dir\main.cpp.i

CMakeFiles/9465_Sticker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/9465_Sticker.dir/main.cpp.s"
	X:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\main.cpp" -o CMakeFiles\9465_Sticker.dir\main.cpp.s

# Object files for target 9465_Sticker
9465_Sticker_OBJECTS = \
"CMakeFiles/9465_Sticker.dir/main.cpp.obj"

# External object files for target 9465_Sticker
9465_Sticker_EXTERNAL_OBJECTS =

9465_Sticker.exe: CMakeFiles/9465_Sticker.dir/main.cpp.obj
9465_Sticker.exe: CMakeFiles/9465_Sticker.dir/build.make
9465_Sticker.exe: CMakeFiles/9465_Sticker.dir/linklibs.rsp
9465_Sticker.exe: CMakeFiles/9465_Sticker.dir/objects1.rsp
9465_Sticker.exe: CMakeFiles/9465_Sticker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 9465_Sticker.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\9465_Sticker.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/9465_Sticker.dir/build: 9465_Sticker.exe

.PHONY : CMakeFiles/9465_Sticker.dir/build

CMakeFiles/9465_Sticker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\9465_Sticker.dir\cmake_clean.cmake
.PHONY : CMakeFiles/9465_Sticker.dir/clean

CMakeFiles/9465_Sticker.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker" "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker" "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\cmake-build-debug" "C:\Users\skysaver00\IdeaProjects\C, C++\9465_Sticker\cmake-build-debug\CMakeFiles\9465_Sticker.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/9465_Sticker.dir/depend

