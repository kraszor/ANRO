# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/kgrela/dobot_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kgrela/dobot_ws/build

# Include any dependencies generated for this target.
include dobot/CMakeFiles/PickAndPlac.dir/depend.make

# Include the progress variables for this target.
include dobot/CMakeFiles/PickAndPlac.dir/progress.make

# Include the compile flags for this target's objects.
include dobot/CMakeFiles/PickAndPlac.dir/flags.make

dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o: dobot/CMakeFiles/PickAndPlac.dir/flags.make
dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o: /home/kgrela/dobot_ws/src/dobot/src/PickAndPlac.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kgrela/dobot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o"
	cd /home/kgrela/dobot_ws/build/dobot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o -c /home/kgrela/dobot_ws/src/dobot/src/PickAndPlac.cpp

dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.i"
	cd /home/kgrela/dobot_ws/build/dobot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kgrela/dobot_ws/src/dobot/src/PickAndPlac.cpp > CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.i

dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.s"
	cd /home/kgrela/dobot_ws/build/dobot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kgrela/dobot_ws/src/dobot/src/PickAndPlac.cpp -o CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.s

dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.requires:

.PHONY : dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.requires

dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.provides: dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.requires
	$(MAKE) -f dobot/CMakeFiles/PickAndPlac.dir/build.make dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.provides.build
.PHONY : dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.provides

dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.provides.build: dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o


# Object files for target PickAndPlac
PickAndPlac_OBJECTS = \
"CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o"

# External object files for target PickAndPlac
PickAndPlac_EXTERNAL_OBJECTS =

/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: dobot/CMakeFiles/PickAndPlac.dir/build.make
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libkdl_parser.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/liburdf.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/liburdfdom_sensor.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/liburdfdom_model_state.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/liburdfdom_model.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/liburdfdom_world.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libclass_loader.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/libPocoFoundation.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libdl.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libroslib.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/librospack.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/librosconsole_bridge.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libroscpp.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/librosconsole.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/librostime.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /opt/ros/melodic/lib/libcpp_common.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac: dobot/CMakeFiles/PickAndPlac.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kgrela/dobot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac"
	cd /home/kgrela/dobot_ws/build/dobot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PickAndPlac.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dobot/CMakeFiles/PickAndPlac.dir/build: /home/kgrela/dobot_ws/devel/lib/dobot/PickAndPlac

.PHONY : dobot/CMakeFiles/PickAndPlac.dir/build

dobot/CMakeFiles/PickAndPlac.dir/requires: dobot/CMakeFiles/PickAndPlac.dir/src/PickAndPlac.cpp.o.requires

.PHONY : dobot/CMakeFiles/PickAndPlac.dir/requires

dobot/CMakeFiles/PickAndPlac.dir/clean:
	cd /home/kgrela/dobot_ws/build/dobot && $(CMAKE_COMMAND) -P CMakeFiles/PickAndPlac.dir/cmake_clean.cmake
.PHONY : dobot/CMakeFiles/PickAndPlac.dir/clean

dobot/CMakeFiles/PickAndPlac.dir/depend:
	cd /home/kgrela/dobot_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kgrela/dobot_ws/src /home/kgrela/dobot_ws/src/dobot /home/kgrela/dobot_ws/build /home/kgrela/dobot_ws/build/dobot /home/kgrela/dobot_ws/build/dobot/CMakeFiles/PickAndPlac.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dobot/CMakeFiles/PickAndPlac.dir/depend

