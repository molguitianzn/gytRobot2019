# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/molguitianzn/wtf/SEURoboCup2019/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/molguitianzn/wtf/SEURoboCup2019/build

# Utility rule file for judgekick_automoc.

# Include the progress variables for this target.
include game_ctrl/CMakeFiles/judgekick_automoc.dir/progress.make

game_ctrl/CMakeFiles/judgekick_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/molguitianzn/wtf/SEURoboCup2019/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target judgekick"
	cd /home/molguitianzn/wtf/SEURoboCup2019/build/game_ctrl && /usr/bin/cmake -E cmake_autogen /home/molguitianzn/wtf/SEURoboCup2019/build/game_ctrl/CMakeFiles/judgekick_automoc.dir/ ""

judgekick_automoc: game_ctrl/CMakeFiles/judgekick_automoc
judgekick_automoc: game_ctrl/CMakeFiles/judgekick_automoc.dir/build.make

.PHONY : judgekick_automoc

# Rule to build all files generated by this target.
game_ctrl/CMakeFiles/judgekick_automoc.dir/build: judgekick_automoc

.PHONY : game_ctrl/CMakeFiles/judgekick_automoc.dir/build

game_ctrl/CMakeFiles/judgekick_automoc.dir/clean:
	cd /home/molguitianzn/wtf/SEURoboCup2019/build/game_ctrl && $(CMAKE_COMMAND) -P CMakeFiles/judgekick_automoc.dir/cmake_clean.cmake
.PHONY : game_ctrl/CMakeFiles/judgekick_automoc.dir/clean

game_ctrl/CMakeFiles/judgekick_automoc.dir/depend:
	cd /home/molguitianzn/wtf/SEURoboCup2019/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/molguitianzn/wtf/SEURoboCup2019/src /home/molguitianzn/wtf/SEURoboCup2019/src/game_ctrl /home/molguitianzn/wtf/SEURoboCup2019/build /home/molguitianzn/wtf/SEURoboCup2019/build/game_ctrl /home/molguitianzn/wtf/SEURoboCup2019/build/game_ctrl/CMakeFiles/judgekick_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : game_ctrl/CMakeFiles/judgekick_automoc.dir/depend

