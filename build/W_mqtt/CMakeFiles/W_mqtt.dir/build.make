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
include W_mqtt/CMakeFiles/W_mqtt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include W_mqtt/CMakeFiles/W_mqtt.dir/compiler_depend.make

# Include the progress variables for this target.
include W_mqtt/CMakeFiles/W_mqtt.dir/progress.make

# Include the compile flags for this target's objects.
include W_mqtt/CMakeFiles/W_mqtt.dir/flags.make

W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/flags.make
W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.o: /home/user/git/Event_manager11/Event_manager/W_mqtt/Mqtt.cpp
W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.o -MF CMakeFiles/W_mqtt.dir/Mqtt.cpp.o.d -o CMakeFiles/W_mqtt.dir/Mqtt.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_mqtt/Mqtt.cpp

W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_mqtt.dir/Mqtt.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_mqtt/Mqtt.cpp > CMakeFiles/W_mqtt.dir/Mqtt.cpp.i

W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_mqtt.dir/Mqtt.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_mqtt/Mqtt.cpp -o CMakeFiles/W_mqtt.dir/Mqtt.cpp.s

W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/flags.make
W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o: /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttSubscriber.cpp
W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o -MF CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o.d -o CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttSubscriber.cpp

W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttSubscriber.cpp > CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.i

W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttSubscriber.cpp -o CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.s

W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/flags.make
W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o: /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttPublisher.cpp
W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o -MF CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o.d -o CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttPublisher.cpp

W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttPublisher.cpp > CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.i

W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_mqtt/MqttPublisher.cpp -o CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.s

W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/flags.make
W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o: /home/user/git/Event_manager11/Event_manager/W_mqtt/NewPublisher.cpp
W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o: W_mqtt/CMakeFiles/W_mqtt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o -MF CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o.d -o CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_mqtt/NewPublisher.cpp

W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_mqtt.dir/NewPublisher.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_mqtt/NewPublisher.cpp > CMakeFiles/W_mqtt.dir/NewPublisher.cpp.i

W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_mqtt.dir/NewPublisher.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_mqtt/NewPublisher.cpp -o CMakeFiles/W_mqtt.dir/NewPublisher.cpp.s

# Object files for target W_mqtt
W_mqtt_OBJECTS = \
"CMakeFiles/W_mqtt.dir/Mqtt.cpp.o" \
"CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o" \
"CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o" \
"CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o"

# External object files for target W_mqtt
W_mqtt_EXTERNAL_OBJECTS =

W_mqtt/libW_mqtt.a: W_mqtt/CMakeFiles/W_mqtt.dir/Mqtt.cpp.o
W_mqtt/libW_mqtt.a: W_mqtt/CMakeFiles/W_mqtt.dir/MqttSubscriber.cpp.o
W_mqtt/libW_mqtt.a: W_mqtt/CMakeFiles/W_mqtt.dir/MqttPublisher.cpp.o
W_mqtt/libW_mqtt.a: W_mqtt/CMakeFiles/W_mqtt.dir/NewPublisher.cpp.o
W_mqtt/libW_mqtt.a: W_mqtt/CMakeFiles/W_mqtt.dir/build.make
W_mqtt/libW_mqtt.a: W_mqtt/CMakeFiles/W_mqtt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/git/Event_manager11/Event_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libW_mqtt.a"
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && $(CMAKE_COMMAND) -P CMakeFiles/W_mqtt.dir/cmake_clean_target.cmake
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/W_mqtt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
W_mqtt/CMakeFiles/W_mqtt.dir/build: W_mqtt/libW_mqtt.a
.PHONY : W_mqtt/CMakeFiles/W_mqtt.dir/build

W_mqtt/CMakeFiles/W_mqtt.dir/clean:
	cd /home/user/git/Event_manager11/Event_manager/build/W_mqtt && $(CMAKE_COMMAND) -P CMakeFiles/W_mqtt.dir/cmake_clean.cmake
.PHONY : W_mqtt/CMakeFiles/W_mqtt.dir/clean

W_mqtt/CMakeFiles/W_mqtt.dir/depend:
	cd /home/user/git/Event_manager11/Event_manager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/git/Event_manager11/Event_manager /home/user/git/Event_manager11/Event_manager/W_mqtt /home/user/git/Event_manager11/Event_manager/build /home/user/git/Event_manager11/Event_manager/build/W_mqtt /home/user/git/Event_manager11/Event_manager/build/W_mqtt/CMakeFiles/W_mqtt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : W_mqtt/CMakeFiles/W_mqtt.dir/depend

