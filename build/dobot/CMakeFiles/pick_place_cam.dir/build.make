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
include dobot/CMakeFiles/pick_place_cam.dir/depend.make

# Include the progress variables for this target.
include dobot/CMakeFiles/pick_place_cam.dir/progress.make

# Include the compile flags for this target's objects.
include dobot/CMakeFiles/pick_place_cam.dir/flags.make

dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o: dobot/CMakeFiles/pick_place_cam.dir/flags.make
dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o: /home/kgrela/dobot_ws/src/dobot/src/pick_place_cam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kgrela/dobot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o"
	cd /home/kgrela/dobot_ws/build/dobot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o -c /home/kgrela/dobot_ws/src/dobot/src/pick_place_cam.cpp

dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.i"
	cd /home/kgrela/dobot_ws/build/dobot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kgrela/dobot_ws/src/dobot/src/pick_place_cam.cpp > CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.i

dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.s"
	cd /home/kgrela/dobot_ws/build/dobot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kgrela/dobot_ws/src/dobot/src/pick_place_cam.cpp -o CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.s

dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.requires:

.PHONY : dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.requires

dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.provides: dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.requires
	$(MAKE) -f dobot/CMakeFiles/pick_place_cam.dir/build.make dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.provides.build
.PHONY : dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.provides

dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.provides.build: dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o


# Object files for target pick_place_cam
pick_place_cam_OBJECTS = \
"CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o"

# External object files for target pick_place_cam
pick_place_cam_EXTERNAL_OBJECTS =

/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: dobot/CMakeFiles/pick_place_cam.dir/build.make
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libkdl_parser.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/liburdf.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/liburdfdom_sensor.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/liburdfdom_model_state.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/liburdfdom_model.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/liburdfdom_world.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libclass_loader.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/libPocoFoundation.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libdl.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libroslib.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/librospack.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/librosconsole_bridge.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libroscpp.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/librosconsole.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/librostime.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /opt/ros/melodic/lib/libcpp_common.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam: dobot/CMakeFiles/pick_place_cam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kgrela/dobot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam"
	cd /home/kgrela/dobot_ws/build/dobot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pick_place_cam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dobot/CMakeFiles/pick_place_cam.dir/build: /home/kgrela/dobot_ws/devel/lib/dobot/pick_place_cam

.PHONY : dobot/CMakeFiles/pick_place_cam.dir/build

dobot/CMakeFiles/pick_place_cam.dir/requires: dobot/CMakeFiles/pick_place_cam.dir/src/pick_place_cam.cpp.o.requires

.PHONY : dobot/CMakeFiles/pick_place_cam.dir/requires

dobot/CMakeFiles/pick_place_cam.dir/clean:
	cd /home/kgrela/dobot_ws/build/dobot && $(CMAKE_COMMAND) -P CMakeFiles/pick_place_cam.dir/cmake_clean.cmake
.PHONY : dobot/CMakeFiles/pick_place_cam.dir/clean

dobot/CMakeFiles/pick_place_cam.dir/depend:
	cd /home/kgrela/dobot_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kgrela/dobot_ws/src /home/kgrela/dobot_ws/src/dobot /home/kgrela/dobot_ws/build /home/kgrela/dobot_ws/build/dobot /home/kgrela/dobot_ws/build/dobot/CMakeFiles/pick_place_cam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dobot/CMakeFiles/pick_place_cam.dir/depend

