# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
include lib/mqttclient/CMakeFiles/mosquittopp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/mqttclient/CMakeFiles/mosquittopp.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/mqttclient/CMakeFiles/mosquittopp.dir/progress.make

# Include the compile flags for this target's objects.
include lib/mqttclient/CMakeFiles/mosquittopp.dir/flags.make

lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o: lib/mqttclient/CMakeFiles/mosquittopp.dir/flags.make
lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o: /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mosquittopp.cpp
lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o: lib/mqttclient/CMakeFiles/mosquittopp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o -MF CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o.d -o CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o -c /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mosquittopp.cpp

lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mosquittopp.dir/mosquittopp.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mosquittopp.cpp > CMakeFiles/mosquittopp.dir/mosquittopp.cpp.i

lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mosquittopp.dir/mosquittopp.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mosquittopp.cpp -o CMakeFiles/mosquittopp.dir/mosquittopp.cpp.s

lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.o: lib/mqttclient/CMakeFiles/mosquittopp.dir/flags.make
lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.o: /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mqttclient.cpp
lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.o: lib/mqttclient/CMakeFiles/mosquittopp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.o -MF CMakeFiles/mosquittopp.dir/mqttclient.cpp.o.d -o CMakeFiles/mosquittopp.dir/mqttclient.cpp.o -c /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mqttclient.cpp

lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mosquittopp.dir/mqttclient.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mqttclient.cpp > CMakeFiles/mosquittopp.dir/mqttclient.cpp.i

lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mosquittopp.dir/mqttclient.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/lib/mqttclient/mqttclient.cpp -o CMakeFiles/mosquittopp.dir/mqttclient.cpp.s

# Object files for target mosquittopp
mosquittopp_OBJECTS = \
"CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o" \
"CMakeFiles/mosquittopp.dir/mqttclient.cpp.o"

# External object files for target mosquittopp
mosquittopp_EXTERNAL_OBJECTS =

lib/mqttclient/libmosquittopp.a: lib/mqttclient/CMakeFiles/mosquittopp.dir/mosquittopp.cpp.o
lib/mqttclient/libmosquittopp.a: lib/mqttclient/CMakeFiles/mosquittopp.dir/mqttclient.cpp.o
lib/mqttclient/libmosquittopp.a: lib/mqttclient/CMakeFiles/mosquittopp.dir/build.make
lib/mqttclient/libmosquittopp.a: lib/mqttclient/CMakeFiles/mosquittopp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libmosquittopp.a"
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && $(CMAKE_COMMAND) -P CMakeFiles/mosquittopp.dir/cmake_clean_target.cmake
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mosquittopp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/mqttclient/CMakeFiles/mosquittopp.dir/build: lib/mqttclient/libmosquittopp.a
.PHONY : lib/mqttclient/CMakeFiles/mosquittopp.dir/build

lib/mqttclient/CMakeFiles/mosquittopp.dir/clean:
	cd /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient && $(CMAKE_COMMAND) -P CMakeFiles/mosquittopp.dir/cmake_clean.cmake
.PHONY : lib/mqttclient/CMakeFiles/mosquittopp.dir/clean

lib/mqttclient/CMakeFiles/mosquittopp.dir/depend:
	cd /home/user/git/Event_manager11/Event_manager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/git/Event_manager11/Event_manager /home/user/git/Event_manager11/Event_manager/lib/mqttclient /home/user/git/Event_manager11/Event_manager/build /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient /home/user/git/Event_manager11/Event_manager/build/lib/mqttclient/CMakeFiles/mosquittopp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/mqttclient/CMakeFiles/mosquittopp.dir/depend

