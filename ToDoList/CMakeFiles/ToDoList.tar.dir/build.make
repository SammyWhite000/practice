# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sammy/practice/ToDoList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sammy/practice/ToDoList

# Utility rule file for ToDoList.tar.

# Include the progress variables for this target.
include CMakeFiles/ToDoList.tar.dir/progress.make

CMakeFiles/ToDoList.tar:
	tar -cf ToDoList.tar *.cc *.h CMakeLists.txt

ToDoList.tar: CMakeFiles/ToDoList.tar
ToDoList.tar: CMakeFiles/ToDoList.tar.dir/build.make

.PHONY : ToDoList.tar

# Rule to build all files generated by this target.
CMakeFiles/ToDoList.tar.dir/build: ToDoList.tar

.PHONY : CMakeFiles/ToDoList.tar.dir/build

CMakeFiles/ToDoList.tar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ToDoList.tar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ToDoList.tar.dir/clean

CMakeFiles/ToDoList.tar.dir/depend:
	cd /home/sammy/practice/ToDoList && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sammy/practice/ToDoList /home/sammy/practice/ToDoList /home/sammy/practice/ToDoList /home/sammy/practice/ToDoList /home/sammy/practice/ToDoList/CMakeFiles/ToDoList.tar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ToDoList.tar.dir/depend

