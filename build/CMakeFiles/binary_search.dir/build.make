# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ahmet/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/ahmet/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ahmet/workspace/grokking_algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ahmet/workspace/grokking_algorithms/build

# Include any dependencies generated for this target.
include CMakeFiles/binary_search.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/binary_search.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/binary_search.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binary_search.dir/flags.make

CMakeFiles/binary_search.dir/binary_search.cpp.o: CMakeFiles/binary_search.dir/flags.make
CMakeFiles/binary_search.dir/binary_search.cpp.o: /home/ahmet/workspace/grokking_algorithms/binary_search.cpp
CMakeFiles/binary_search.dir/binary_search.cpp.o: CMakeFiles/binary_search.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmet/workspace/grokking_algorithms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/binary_search.dir/binary_search.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/binary_search.dir/binary_search.cpp.o -MF CMakeFiles/binary_search.dir/binary_search.cpp.o.d -o CMakeFiles/binary_search.dir/binary_search.cpp.o -c /home/ahmet/workspace/grokking_algorithms/binary_search.cpp

CMakeFiles/binary_search.dir/binary_search.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary_search.dir/binary_search.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmet/workspace/grokking_algorithms/binary_search.cpp > CMakeFiles/binary_search.dir/binary_search.cpp.i

CMakeFiles/binary_search.dir/binary_search.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary_search.dir/binary_search.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmet/workspace/grokking_algorithms/binary_search.cpp -o CMakeFiles/binary_search.dir/binary_search.cpp.s

# Object files for target binary_search
binary_search_OBJECTS = \
"CMakeFiles/binary_search.dir/binary_search.cpp.o"

# External object files for target binary_search
binary_search_EXTERNAL_OBJECTS =

binary_search: CMakeFiles/binary_search.dir/binary_search.cpp.o
binary_search: CMakeFiles/binary_search.dir/build.make
binary_search: CMakeFiles/binary_search.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ahmet/workspace/grokking_algorithms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable binary_search"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/binary_search.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/binary_search.dir/build: binary_search
.PHONY : CMakeFiles/binary_search.dir/build

CMakeFiles/binary_search.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/binary_search.dir/cmake_clean.cmake
.PHONY : CMakeFiles/binary_search.dir/clean

CMakeFiles/binary_search.dir/depend:
	cd /home/ahmet/workspace/grokking_algorithms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ahmet/workspace/grokking_algorithms /home/ahmet/workspace/grokking_algorithms /home/ahmet/workspace/grokking_algorithms/build /home/ahmet/workspace/grokking_algorithms/build /home/ahmet/workspace/grokking_algorithms/build/CMakeFiles/binary_search.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/binary_search.dir/depend

