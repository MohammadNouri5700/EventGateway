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
CMAKE_COMMAND = /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/cmake

# The command to remove a file.
RM = /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/git/Event_manager11/Event_manager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/git/Event_manager11/Event_manager/buildm

# Include any dependencies generated for this target.
include W_coap/CMakeFiles/W_coap.dir/depend.make

# Include the progress variables for this target.
include W_coap/CMakeFiles/W_coap.dir/progress.make

# Include the compile flags for this target's objects.
include W_coap/CMakeFiles/W_coap.dir/flags.make

W_coap/CMakeFiles/W_coap.dir/Coap.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/Coap.cpp.o: ../W_coap/Coap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object W_coap/CMakeFiles/W_coap.dir/Coap.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/Coap.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/Coap.cpp

W_coap/CMakeFiles/W_coap.dir/Coap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/Coap.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/Coap.cpp > CMakeFiles/W_coap.dir/Coap.cpp.i

W_coap/CMakeFiles/W_coap.dir/Coap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/Coap.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/Coap.cpp -o CMakeFiles/W_coap.dir/Coap.cpp.s

W_coap/CMakeFiles/W_coap.dir/Resource.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/Resource.cpp.o: ../W_coap/Resource.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object W_coap/CMakeFiles/W_coap.dir/Resource.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/Resource.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/Resource.cpp

W_coap/CMakeFiles/W_coap.dir/Resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/Resource.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/Resource.cpp > CMakeFiles/W_coap.dir/Resource.cpp.i

W_coap/CMakeFiles/W_coap.dir/Resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/Resource.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/Resource.cpp -o CMakeFiles/W_coap.dir/Resource.cpp.s

W_coap/CMakeFiles/W_coap.dir/Context.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/Context.cpp.o: ../W_coap/Context.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object W_coap/CMakeFiles/W_coap.dir/Context.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/Context.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/Context.cpp

W_coap/CMakeFiles/W_coap.dir/Context.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/Context.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/Context.cpp > CMakeFiles/W_coap.dir/Context.cpp.i

W_coap/CMakeFiles/W_coap.dir/Context.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/Context.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/Context.cpp -o CMakeFiles/W_coap.dir/Context.cpp.s

W_coap/CMakeFiles/W_coap.dir/Pdu.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/Pdu.cpp.o: ../W_coap/Pdu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object W_coap/CMakeFiles/W_coap.dir/Pdu.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/Pdu.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/Pdu.cpp

W_coap/CMakeFiles/W_coap.dir/Pdu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/Pdu.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/Pdu.cpp > CMakeFiles/W_coap.dir/Pdu.cpp.i

W_coap/CMakeFiles/W_coap.dir/Pdu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/Pdu.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/Pdu.cpp -o CMakeFiles/W_coap.dir/Pdu.cpp.s

W_coap/CMakeFiles/W_coap.dir/Sessions.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/Sessions.cpp.o: ../W_coap/Sessions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object W_coap/CMakeFiles/W_coap.dir/Sessions.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/Sessions.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/Sessions.cpp

W_coap/CMakeFiles/W_coap.dir/Sessions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/Sessions.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/Sessions.cpp > CMakeFiles/W_coap.dir/Sessions.cpp.i

W_coap/CMakeFiles/W_coap.dir/Sessions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/Sessions.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/Sessions.cpp -o CMakeFiles/W_coap.dir/Sessions.cpp.s

W_coap/CMakeFiles/W_coap.dir/Server.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/Server.cpp.o: ../W_coap/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object W_coap/CMakeFiles/W_coap.dir/Server.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/Server.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/Server.cpp

W_coap/CMakeFiles/W_coap.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/Server.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/Server.cpp > CMakeFiles/W_coap.dir/Server.cpp.i

W_coap/CMakeFiles/W_coap.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/Server.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/Server.cpp -o CMakeFiles/W_coap.dir/Server.cpp.s

W_coap/CMakeFiles/W_coap.dir/client.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/client.cpp.o: ../W_coap/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object W_coap/CMakeFiles/W_coap.dir/client.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/client.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/client.cpp

W_coap/CMakeFiles/W_coap.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/client.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/client.cpp > CMakeFiles/W_coap.dir/client.cpp.i

W_coap/CMakeFiles/W_coap.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/client.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/client.cpp -o CMakeFiles/W_coap.dir/client.cpp.s

W_coap/CMakeFiles/W_coap.dir/EndPoint.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/EndPoint.cpp.o: ../W_coap/EndPoint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object W_coap/CMakeFiles/W_coap.dir/EndPoint.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/EndPoint.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/EndPoint.cpp

W_coap/CMakeFiles/W_coap.dir/EndPoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/EndPoint.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/EndPoint.cpp > CMakeFiles/W_coap.dir/EndPoint.cpp.i

W_coap/CMakeFiles/W_coap.dir/EndPoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/EndPoint.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/EndPoint.cpp -o CMakeFiles/W_coap.dir/EndPoint.cpp.s

W_coap/CMakeFiles/W_coap.dir/CoapNode.cpp.o: W_coap/CMakeFiles/W_coap.dir/flags.make
W_coap/CMakeFiles/W_coap.dir/CoapNode.cpp.o: ../W_coap/CoapNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object W_coap/CMakeFiles/W_coap.dir/CoapNode.cpp.o"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W_coap.dir/CoapNode.cpp.o -c /home/user/git/Event_manager11/Event_manager/W_coap/CoapNode.cpp

W_coap/CMakeFiles/W_coap.dir/CoapNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W_coap.dir/CoapNode.cpp.i"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/Event_manager11/Event_manager/W_coap/CoapNode.cpp > CMakeFiles/W_coap.dir/CoapNode.cpp.i

W_coap/CMakeFiles/W_coap.dir/CoapNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W_coap.dir/CoapNode.cpp.s"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && /opt/poky/3.1.16/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++   -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a8 -fstack-protector-strong  -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi --sysroot=/opt/poky/3.1.16/sysroots/cortexa8hf-neon-poky-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/Event_manager11/Event_manager/W_coap/CoapNode.cpp -o CMakeFiles/W_coap.dir/CoapNode.cpp.s

# Object files for target W_coap
W_coap_OBJECTS = \
"CMakeFiles/W_coap.dir/Coap.cpp.o" \
"CMakeFiles/W_coap.dir/Resource.cpp.o" \
"CMakeFiles/W_coap.dir/Context.cpp.o" \
"CMakeFiles/W_coap.dir/Pdu.cpp.o" \
"CMakeFiles/W_coap.dir/Sessions.cpp.o" \
"CMakeFiles/W_coap.dir/Server.cpp.o" \
"CMakeFiles/W_coap.dir/client.cpp.o" \
"CMakeFiles/W_coap.dir/EndPoint.cpp.o" \
"CMakeFiles/W_coap.dir/CoapNode.cpp.o"

# External object files for target W_coap
W_coap_EXTERNAL_OBJECTS =

W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/Coap.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/Resource.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/Context.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/Pdu.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/Sessions.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/Server.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/client.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/EndPoint.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/CoapNode.cpp.o
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/build.make
W_coap/libW_coap.a: W_coap/CMakeFiles/W_coap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/git/Event_manager11/Event_manager/buildm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libW_coap.a"
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && $(CMAKE_COMMAND) -P CMakeFiles/W_coap.dir/cmake_clean_target.cmake
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/W_coap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
W_coap/CMakeFiles/W_coap.dir/build: W_coap/libW_coap.a

.PHONY : W_coap/CMakeFiles/W_coap.dir/build

W_coap/CMakeFiles/W_coap.dir/clean:
	cd /home/user/git/Event_manager11/Event_manager/buildm/W_coap && $(CMAKE_COMMAND) -P CMakeFiles/W_coap.dir/cmake_clean.cmake
.PHONY : W_coap/CMakeFiles/W_coap.dir/clean

W_coap/CMakeFiles/W_coap.dir/depend:
	cd /home/user/git/Event_manager11/Event_manager/buildm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/git/Event_manager11/Event_manager /home/user/git/Event_manager11/Event_manager/W_coap /home/user/git/Event_manager11/Event_manager/buildm /home/user/git/Event_manager11/Event_manager/buildm/W_coap /home/user/git/Event_manager11/Event_manager/buildm/W_coap/CMakeFiles/W_coap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : W_coap/CMakeFiles/W_coap.dir/depend

