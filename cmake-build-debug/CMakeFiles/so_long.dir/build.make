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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mariavillarroel/Documents/GitHub/cursus42/so_long

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/so_long.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/so_long.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/so_long.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/so_long.dir/flags.make

CMakeFiles/so_long.dir/src/main.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/main.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/main.c
CMakeFiles/so_long.dir/src/main.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/so_long.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/main.c.o -MF CMakeFiles/so_long.dir/src/main.c.o.d -o CMakeFiles/so_long.dir/src/main.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/main.c

CMakeFiles/so_long.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/main.c > CMakeFiles/so_long.dir/src/main.c.i

CMakeFiles/so_long.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/main.c -o CMakeFiles/so_long.dir/src/main.c.s

CMakeFiles/so_long.dir/src/check_if_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/check_if_map.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/check_if_map.c
CMakeFiles/so_long.dir/src/check_if_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/so_long.dir/src/check_if_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/check_if_map.c.o -MF CMakeFiles/so_long.dir/src/check_if_map.c.o.d -o CMakeFiles/so_long.dir/src/check_if_map.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/check_if_map.c

CMakeFiles/so_long.dir/src/check_if_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/check_if_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/check_if_map.c > CMakeFiles/so_long.dir/src/check_if_map.c.i

CMakeFiles/so_long.dir/src/check_if_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/check_if_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/check_if_map.c -o CMakeFiles/so_long.dir/src/check_if_map.c.s

CMakeFiles/so_long.dir/src/create_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/create_map.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/create_map.c
CMakeFiles/so_long.dir/src/create_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/so_long.dir/src/create_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/create_map.c.o -MF CMakeFiles/so_long.dir/src/create_map.c.o.d -o CMakeFiles/so_long.dir/src/create_map.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/create_map.c

CMakeFiles/so_long.dir/src/create_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/create_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/create_map.c > CMakeFiles/so_long.dir/src/create_map.c.i

CMakeFiles/so_long.dir/src/create_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/create_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/create_map.c -o CMakeFiles/so_long.dir/src/create_map.c.s

CMakeFiles/so_long.dir/src/draw_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/draw_map.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_map.c
CMakeFiles/so_long.dir/src/draw_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/so_long.dir/src/draw_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/draw_map.c.o -MF CMakeFiles/so_long.dir/src/draw_map.c.o.d -o CMakeFiles/so_long.dir/src/draw_map.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_map.c

CMakeFiles/so_long.dir/src/draw_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/draw_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_map.c > CMakeFiles/so_long.dir/src/draw_map.c.i

CMakeFiles/so_long.dir/src/draw_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/draw_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_map.c -o CMakeFiles/so_long.dir/src/draw_map.c.s

CMakeFiles/so_long.dir/src/draw_player.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/draw_player.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_player.c
CMakeFiles/so_long.dir/src/draw_player.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/so_long.dir/src/draw_player.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/draw_player.c.o -MF CMakeFiles/so_long.dir/src/draw_player.c.o.d -o CMakeFiles/so_long.dir/src/draw_player.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_player.c

CMakeFiles/so_long.dir/src/draw_player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/draw_player.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_player.c > CMakeFiles/so_long.dir/src/draw_player.c.i

CMakeFiles/so_long.dir/src/draw_player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/draw_player.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/draw_player.c -o CMakeFiles/so_long.dir/src/draw_player.c.s

CMakeFiles/so_long.dir/src/free.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/free.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/free.c
CMakeFiles/so_long.dir/src/free.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/so_long.dir/src/free.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/free.c.o -MF CMakeFiles/so_long.dir/src/free.c.o.d -o CMakeFiles/so_long.dir/src/free.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/free.c

CMakeFiles/so_long.dir/src/free.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/free.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/free.c > CMakeFiles/so_long.dir/src/free.c.i

CMakeFiles/so_long.dir/src/free.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/free.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/free.c -o CMakeFiles/so_long.dir/src/free.c.s

CMakeFiles/so_long.dir/src/init_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/init_map.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/init_map.c
CMakeFiles/so_long.dir/src/init_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/so_long.dir/src/init_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/init_map.c.o -MF CMakeFiles/so_long.dir/src/init_map.c.o.d -o CMakeFiles/so_long.dir/src/init_map.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/init_map.c

CMakeFiles/so_long.dir/src/init_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/init_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/init_map.c > CMakeFiles/so_long.dir/src/init_map.c.i

CMakeFiles/so_long.dir/src/init_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/init_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/init_map.c -o CMakeFiles/so_long.dir/src/init_map.c.s

CMakeFiles/so_long.dir/src/manage_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/manage_map.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_map.c
CMakeFiles/so_long.dir/src/manage_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/so_long.dir/src/manage_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/manage_map.c.o -MF CMakeFiles/so_long.dir/src/manage_map.c.o.d -o CMakeFiles/so_long.dir/src/manage_map.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_map.c

CMakeFiles/so_long.dir/src/manage_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/manage_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_map.c > CMakeFiles/so_long.dir/src/manage_map.c.i

CMakeFiles/so_long.dir/src/manage_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/manage_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_map.c -o CMakeFiles/so_long.dir/src/manage_map.c.s

CMakeFiles/so_long.dir/src/manage_player.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/manage_player.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_player.c
CMakeFiles/so_long.dir/src/manage_player.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/so_long.dir/src/manage_player.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/manage_player.c.o -MF CMakeFiles/so_long.dir/src/manage_player.c.o.d -o CMakeFiles/so_long.dir/src/manage_player.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_player.c

CMakeFiles/so_long.dir/src/manage_player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/manage_player.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_player.c > CMakeFiles/so_long.dir/src/manage_player.c.i

CMakeFiles/so_long.dir/src/manage_player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/manage_player.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_player.c -o CMakeFiles/so_long.dir/src/manage_player.c.s

CMakeFiles/so_long.dir/src/move_player.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/move_player.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/move_player.c
CMakeFiles/so_long.dir/src/move_player.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/so_long.dir/src/move_player.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/move_player.c.o -MF CMakeFiles/so_long.dir/src/move_player.c.o.d -o CMakeFiles/so_long.dir/src/move_player.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/move_player.c

CMakeFiles/so_long.dir/src/move_player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/move_player.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/move_player.c > CMakeFiles/so_long.dir/src/move_player.c.i

CMakeFiles/so_long.dir/src/move_player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/move_player.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/move_player.c -o CMakeFiles/so_long.dir/src/move_player.c.s

CMakeFiles/so_long.dir/src/util1.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/util1.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/util1.c
CMakeFiles/so_long.dir/src/util1.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/so_long.dir/src/util1.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/util1.c.o -MF CMakeFiles/so_long.dir/src/util1.c.o.d -o CMakeFiles/so_long.dir/src/util1.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/util1.c

CMakeFiles/so_long.dir/src/util1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/util1.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/util1.c > CMakeFiles/so_long.dir/src/util1.c.i

CMakeFiles/so_long.dir/src/util1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/util1.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/util1.c -o CMakeFiles/so_long.dir/src/util1.c.s

CMakeFiles/so_long.dir/src/manage_hook.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/src/manage_hook.c.o: /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_hook.c
CMakeFiles/so_long.dir/src/manage_hook.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/so_long.dir/src/manage_hook.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/src/manage_hook.c.o -MF CMakeFiles/so_long.dir/src/manage_hook.c.o.d -o CMakeFiles/so_long.dir/src/manage_hook.c.o -c /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_hook.c

CMakeFiles/so_long.dir/src/manage_hook.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/src/manage_hook.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_hook.c > CMakeFiles/so_long.dir/src/manage_hook.c.i

CMakeFiles/so_long.dir/src/manage_hook.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/src/manage_hook.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/src/manage_hook.c -o CMakeFiles/so_long.dir/src/manage_hook.c.s

# Object files for target so_long
so_long_OBJECTS = \
"CMakeFiles/so_long.dir/src/main.c.o" \
"CMakeFiles/so_long.dir/src/check_if_map.c.o" \
"CMakeFiles/so_long.dir/src/create_map.c.o" \
"CMakeFiles/so_long.dir/src/draw_map.c.o" \
"CMakeFiles/so_long.dir/src/draw_player.c.o" \
"CMakeFiles/so_long.dir/src/free.c.o" \
"CMakeFiles/so_long.dir/src/init_map.c.o" \
"CMakeFiles/so_long.dir/src/manage_map.c.o" \
"CMakeFiles/so_long.dir/src/manage_player.c.o" \
"CMakeFiles/so_long.dir/src/move_player.c.o" \
"CMakeFiles/so_long.dir/src/util1.c.o" \
"CMakeFiles/so_long.dir/src/manage_hook.c.o"

# External object files for target so_long
so_long_EXTERNAL_OBJECTS =

so_long: CMakeFiles/so_long.dir/src/main.c.o
so_long: CMakeFiles/so_long.dir/src/check_if_map.c.o
so_long: CMakeFiles/so_long.dir/src/create_map.c.o
so_long: CMakeFiles/so_long.dir/src/draw_map.c.o
so_long: CMakeFiles/so_long.dir/src/draw_player.c.o
so_long: CMakeFiles/so_long.dir/src/free.c.o
so_long: CMakeFiles/so_long.dir/src/init_map.c.o
so_long: CMakeFiles/so_long.dir/src/manage_map.c.o
so_long: CMakeFiles/so_long.dir/src/manage_player.c.o
so_long: CMakeFiles/so_long.dir/src/move_player.c.o
so_long: CMakeFiles/so_long.dir/src/util1.c.o
so_long: CMakeFiles/so_long.dir/src/manage_hook.c.o
so_long: CMakeFiles/so_long.dir/build.make
so_long: CMakeFiles/so_long.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable so_long"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/so_long.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/so_long.dir/build: so_long
.PHONY : CMakeFiles/so_long.dir/build

CMakeFiles/so_long.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/so_long.dir/cmake_clean.cmake
.PHONY : CMakeFiles/so_long.dir/clean

CMakeFiles/so_long.dir/depend:
	cd /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mariavillarroel/Documents/GitHub/cursus42/so_long /Users/mariavillarroel/Documents/GitHub/cursus42/so_long /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug /Users/mariavillarroel/Documents/GitHub/cursus42/so_long/cmake-build-debug/CMakeFiles/so_long.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/so_long.dir/depend

