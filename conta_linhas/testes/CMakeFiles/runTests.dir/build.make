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
CMAKE_SOURCE_DIR = "/home/pedro/Área de Trabalho/conta_linhas/testes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/pedro/Área de Trabalho/conta_linhas/testes"

# Include any dependencies generated for this target.
include CMakeFiles/runTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runTests.dir/flags.make

CMakeFiles/runTests.dir/testes.cpp.o: CMakeFiles/runTests.dir/flags.make
CMakeFiles/runTests.dir/testes.cpp.o: testes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/pedro/Área de Trabalho/conta_linhas/testes/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runTests.dir/testes.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/testes.cpp.o -c "/home/pedro/Área de Trabalho/conta_linhas/testes/testes.cpp"

CMakeFiles/runTests.dir/testes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/testes.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/pedro/Área de Trabalho/conta_linhas/testes/testes.cpp" > CMakeFiles/runTests.dir/testes.cpp.i

CMakeFiles/runTests.dir/testes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/testes.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/pedro/Área de Trabalho/conta_linhas/testes/testes.cpp" -o CMakeFiles/runTests.dir/testes.cpp.s

CMakeFiles/runTests.dir/testes.cpp.o.requires:

.PHONY : CMakeFiles/runTests.dir/testes.cpp.o.requires

CMakeFiles/runTests.dir/testes.cpp.o.provides: CMakeFiles/runTests.dir/testes.cpp.o.requires
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/testes.cpp.o.provides.build
.PHONY : CMakeFiles/runTests.dir/testes.cpp.o.provides

CMakeFiles/runTests.dir/testes.cpp.o.provides.build: CMakeFiles/runTests.dir/testes.cpp.o


CMakeFiles/runTests.dir/conta_linhas.c.o: CMakeFiles/runTests.dir/flags.make
CMakeFiles/runTests.dir/conta_linhas.c.o: conta_linhas.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/pedro/Área de Trabalho/conta_linhas/testes/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/runTests.dir/conta_linhas.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/runTests.dir/conta_linhas.c.o   -c "/home/pedro/Área de Trabalho/conta_linhas/testes/conta_linhas.c"

CMakeFiles/runTests.dir/conta_linhas.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/runTests.dir/conta_linhas.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/pedro/Área de Trabalho/conta_linhas/testes/conta_linhas.c" > CMakeFiles/runTests.dir/conta_linhas.c.i

CMakeFiles/runTests.dir/conta_linhas.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/runTests.dir/conta_linhas.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/pedro/Área de Trabalho/conta_linhas/testes/conta_linhas.c" -o CMakeFiles/runTests.dir/conta_linhas.c.s

CMakeFiles/runTests.dir/conta_linhas.c.o.requires:

.PHONY : CMakeFiles/runTests.dir/conta_linhas.c.o.requires

CMakeFiles/runTests.dir/conta_linhas.c.o.provides: CMakeFiles/runTests.dir/conta_linhas.c.o.requires
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/conta_linhas.c.o.provides.build
.PHONY : CMakeFiles/runTests.dir/conta_linhas.c.o.provides

CMakeFiles/runTests.dir/conta_linhas.c.o.provides.build: CMakeFiles/runTests.dir/conta_linhas.c.o


# Object files for target runTests
runTests_OBJECTS = \
"CMakeFiles/runTests.dir/testes.cpp.o" \
"CMakeFiles/runTests.dir/conta_linhas.c.o"

# External object files for target runTests
runTests_EXTERNAL_OBJECTS =

runTests: CMakeFiles/runTests.dir/testes.cpp.o
runTests: CMakeFiles/runTests.dir/conta_linhas.c.o
runTests: CMakeFiles/runTests.dir/build.make
runTests: /usr/lib/libgtest.a
runTests: CMakeFiles/runTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/pedro/Área de Trabalho/conta_linhas/testes/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable runTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runTests.dir/build: runTests

.PHONY : CMakeFiles/runTests.dir/build

CMakeFiles/runTests.dir/requires: CMakeFiles/runTests.dir/testes.cpp.o.requires
CMakeFiles/runTests.dir/requires: CMakeFiles/runTests.dir/conta_linhas.c.o.requires

.PHONY : CMakeFiles/runTests.dir/requires

CMakeFiles/runTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runTests.dir/clean

CMakeFiles/runTests.dir/depend:
	cd "/home/pedro/Área de Trabalho/conta_linhas/testes" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/pedro/Área de Trabalho/conta_linhas/testes" "/home/pedro/Área de Trabalho/conta_linhas/testes" "/home/pedro/Área de Trabalho/conta_linhas/testes" "/home/pedro/Área de Trabalho/conta_linhas/testes" "/home/pedro/Área de Trabalho/conta_linhas/testes/CMakeFiles/runTests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/runTests.dir/depend

