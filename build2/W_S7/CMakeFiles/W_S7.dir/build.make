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
include W_S7/CMakeFiles/W_S7.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include W_S7/CMakeFiles/W_S7.dir/compiler_depend.make

# Include the progress variables for this target.
include W_S7/CMakeFiles/W_S7.dir/progress.make

# Include the compile flags for this target's objects.
include W_S7/CMakeFiles/W_S7.dir/flags.make

W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o: W_S7/CMakeFiles/W_S7.dir/flags.make
W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o: ../W_S7/SNAP7_Client.cpp
W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o: W_S7/CMakeFiles/W_S7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o -MF CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o.d -o CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_S7/SNAP7_Client.cpp

W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_S7.dir/SNAP7_Client.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_S7/SNAP7_Client.cpp > CMakeFiles/W_S7.dir/SNAP7_Client.cpp.i

W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_S7.dir/SNAP7_Client.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_S7/SNAP7_Client.cpp -o CMakeFiles/W_S7.dir/SNAP7_Client.cpp.s

W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.o: W_S7/CMakeFiles/W_S7.dir/flags.make
W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.o: ../W_S7/S7Client.cpp
W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.o: W_S7/CMakeFiles/W_S7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.o -MF CMakeFiles/W_S7.dir/S7Client.cpp.o.d -o CMakeFiles/W_S7.dir/S7Client.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_S7/S7Client.cpp

W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_S7.dir/S7Client.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_S7/S7Client.cpp > CMakeFiles/W_S7.dir/S7Client.cpp.i

W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_S7.dir/S7Client.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_S7/S7Client.cpp -o CMakeFiles/W_S7.dir/S7Client.cpp.s

# Object files for target W_S7
W_S7_OBJECTS = \
"CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o" \
"CMakeFiles/W_S7.dir/S7Client.cpp.o"

# External object files for target W_S7
W_S7_EXTERNAL_OBJECTS =

W_S7/libW_S7.a: W_S7/CMakeFiles/W_S7.dir/SNAP7_Client.cpp.o
W_S7/libW_S7.a: W_S7/CMakeFiles/W_S7.dir/S7Client.cpp.o
W_S7/libW_S7.a: W_S7/CMakeFiles/W_S7.dir/build.make
W_S7/libW_S7.a: W_S7/CMakeFiles/W_S7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libW_S7.a"
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && $(CMAKE_COMMAND) -P CMakeFiles/W_S7.dir/cmake_clean_target.cmake
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/W_S7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
W_S7/CMakeFiles/W_S7.dir/build: W_S7/libW_S7.a
.PHONY : W_S7/CMakeFiles/W_S7.dir/build

W_S7/CMakeFiles/W_S7.dir/clean:
	cd /home/user/git/Event_manager11/Event_manager/build/W_S7 && $(CMAKE_COMMAND) -P CMakeFiles/W_S7.dir/cmake_clean.cmake
.PHONY : W_S7/CMakeFiles/W_S7.dir/clean

W_S7/CMakeFiles/W_S7.dir/depend:
	cd /home/user/git/Event_manager11/Event_manager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/git/Event_manager11/Event_manager /home/user/git/Event_manager11/Event_manager/W_S7 /home/user/git/Event_manager11/Event_manager/build /home/user/git/Event_manager11/Event_manager/build/W_S7 /home/user/git/Event_manager11/Event_manager/build/W_S7/CMakeFiles/W_S7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : W_S7/CMakeFiles/W_S7.dir/depend

