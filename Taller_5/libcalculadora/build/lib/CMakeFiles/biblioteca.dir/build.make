# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/zaetlinux/cmake/libcalculadora

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zaetlinux/cmake/libcalculadora/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/biblioteca.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/biblioteca.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/biblioteca.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/biblioteca.dir/flags.make

lib/CMakeFiles/biblioteca.dir/biblioteca.c.o: lib/CMakeFiles/biblioteca.dir/flags.make
lib/CMakeFiles/biblioteca.dir/biblioteca.c.o: ../lib/biblioteca.c
lib/CMakeFiles/biblioteca.dir/biblioteca.c.o: lib/CMakeFiles/biblioteca.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zaetlinux/cmake/libcalculadora/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/CMakeFiles/biblioteca.dir/biblioteca.c.o"
	cd /home/zaetlinux/cmake/libcalculadora/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/biblioteca.dir/biblioteca.c.o -MF CMakeFiles/biblioteca.dir/biblioteca.c.o.d -o CMakeFiles/biblioteca.dir/biblioteca.c.o -c /home/zaetlinux/cmake/libcalculadora/lib/biblioteca.c

lib/CMakeFiles/biblioteca.dir/biblioteca.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/biblioteca.dir/biblioteca.c.i"
	cd /home/zaetlinux/cmake/libcalculadora/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zaetlinux/cmake/libcalculadora/lib/biblioteca.c > CMakeFiles/biblioteca.dir/biblioteca.c.i

lib/CMakeFiles/biblioteca.dir/biblioteca.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/biblioteca.dir/biblioteca.c.s"
	cd /home/zaetlinux/cmake/libcalculadora/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zaetlinux/cmake/libcalculadora/lib/biblioteca.c -o CMakeFiles/biblioteca.dir/biblioteca.c.s

# Object files for target biblioteca
biblioteca_OBJECTS = \
"CMakeFiles/biblioteca.dir/biblioteca.c.o"

# External object files for target biblioteca
biblioteca_EXTERNAL_OBJECTS =

lib/libbiblioteca.so: lib/CMakeFiles/biblioteca.dir/biblioteca.c.o
lib/libbiblioteca.so: lib/CMakeFiles/biblioteca.dir/build.make
lib/libbiblioteca.so: lib/CMakeFiles/biblioteca.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zaetlinux/cmake/libcalculadora/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libbiblioteca.so"
	cd /home/zaetlinux/cmake/libcalculadora/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/biblioteca.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/biblioteca.dir/build: lib/libbiblioteca.so
.PHONY : lib/CMakeFiles/biblioteca.dir/build

lib/CMakeFiles/biblioteca.dir/clean:
	cd /home/zaetlinux/cmake/libcalculadora/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/biblioteca.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/biblioteca.dir/clean

lib/CMakeFiles/biblioteca.dir/depend:
	cd /home/zaetlinux/cmake/libcalculadora/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zaetlinux/cmake/libcalculadora /home/zaetlinux/cmake/libcalculadora/lib /home/zaetlinux/cmake/libcalculadora/build /home/zaetlinux/cmake/libcalculadora/build/lib /home/zaetlinux/cmake/libcalculadora/build/lib/CMakeFiles/biblioteca.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/biblioteca.dir/depend

