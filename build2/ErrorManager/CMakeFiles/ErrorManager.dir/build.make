# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/git/Event_manager11/Event_manager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/git/Event_manager11/Event_manager/build

# Include any dependencies generated for this target.
include ErrorManager/CMakeFiles/ErrorManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ErrorManager/CMakeFiles/ErrorManager.dir/compiler_depend.make

# Include the progress variables for this target.
include ErrorManager/CMakeFiles/ErrorManager.dir/progress.make

# Include the compile flags for this target's objects.
include ErrorManager/CMakeFiles/ErrorManager.dir/flags.make

ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o: ErrorManager/CMakeFiles/ErrorManager.dir/flags.make
ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o: ../ErrorManager/ErrorManager.cpp
ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o: ErrorManager/CMakeFiles/ErrorManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o -MF CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o.d -o CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o -c /home/user/git/Event_manager11/Event_manager/ErrorManager/ErrorManager.cpp

ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ErrorManager.dir/ErrorManager.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/ErrorManager/ErrorManager.cpp > CMakeFiles/ErrorManager.dir/ErrorManager.cpp.i

ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ErrorManager.dir/ErrorManager.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/ErrorManager/ErrorManager.cpp -o CMakeFiles/ErrorManager.dir/ErrorManager.cpp.s

ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.o: ErrorManager/CMakeFiles/ErrorManager.dir/flags.make
ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.o: ../ErrorManager/Error.cpp
ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.o: ErrorManager/CMakeFiles/ErrorManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.o -MF CMakeFiles/ErrorManager.dir/Error.cpp.o.d -o CMakeFiles/ErrorManager.dir/Error.cpp.o -c /home/user/git/Event_manager11/Event_manager/ErrorManager/Error.cpp

ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ErrorManager.dir/Error.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/ErrorManager/Error.cpp > CMakeFiles/ErrorManager.dir/Error.cpp.i

ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ErrorManager.dir/Error.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/ErrorManager/Error.cpp -o CMakeFiles/ErrorManager.dir/Error.cpp.s

# Object files for target ErrorManager
ErrorManager_OBJECTS = \
"CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o" \
"CMakeFiles/ErrorManager.dir/Error.cpp.o"

# External object files for target ErrorManager
ErrorManager_EXTERNAL_OBJECTS =

ErrorManager/libErrorManager.a: ErrorManager/CMakeFiles/ErrorManager.dir/ErrorManager.cpp.o
ErrorManager/libErrorManager.a: ErrorManager/CMakeFiles/ErrorManager.dir/Error.cpp.o
ErrorManager/libErrorManager.a: ErrorManager/CMakeFiles/ErrorManager.dir/build.make
ErrorManager/libErrorManager.a: ErrorManager/CMakeFiles/ErrorManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libErrorManager.a"
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && $(CMAKE_COMMAND) -P CMakeFiles/ErrorManager.dir/cmake_clean_target.cmake
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ErrorManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ErrorManager/CMakeFiles/ErrorManager.dir/build: ErrorManager/libErrorManager.a
.PHONY : ErrorManager/CMakeFiles/ErrorManager.dir/build

ErrorManager/CMakeFiles/ErrorManager.dir/clean:
	cd /home/user/git/Event_manager11/Event_manager/build/ErrorManager && $(CMAKE_COMMAND) -P CMakeFiles/ErrorManager.dir/cmake_clean.cmake
.PHONY : ErrorManager/CMakeFiles/ErrorManager.dir/clean

ErrorManager/CMakeFiles/ErrorManager.dir/depend:
	cd /home/user/git/Event_manager11/Event_manager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/git/Event_manager11/Event_manager /home/user/git/Event_manager11/Event_manager/ErrorManager /home/user/git/Event_manager11/Event_manager/build /home/user/git/Event_manager11/Event_manager/build/ErrorManager /home/user/git/Event_manager11/Event_manager/build/ErrorManager/CMakeFiles/ErrorManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ErrorManager/CMakeFiles/ErrorManager.dir/depend

