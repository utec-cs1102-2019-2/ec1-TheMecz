# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/session7b.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/session7b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/session7b.dir/flags.make

CMakeFiles/session7b.dir/main.cpp.obj: CMakeFiles/session7b.dir/flags.make
CMakeFiles/session7b.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/session7b.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\session7b.dir\main.cpp.obj -c C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\main.cpp

CMakeFiles/session7b.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session7b.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\main.cpp > CMakeFiles\session7b.dir\main.cpp.i

CMakeFiles/session7b.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session7b.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\main.cpp -o CMakeFiles\session7b.dir\main.cpp.s

# Object files for target session7b
session7b_OBJECTS = \
"CMakeFiles/session7b.dir/main.cpp.obj"

# External object files for target session7b
session7b_EXTERNAL_OBJECTS =

session7b.exe: CMakeFiles/session7b.dir/main.cpp.obj
session7b.exe: CMakeFiles/session7b.dir/build.make
session7b.exe: CMakeFiles/session7b.dir/linklibs.rsp
session7b.exe: CMakeFiles/session7b.dir/objects1.rsp
session7b.exe: CMakeFiles/session7b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable session7b.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\session7b.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/session7b.dir/build: session7b.exe

.PHONY : CMakeFiles/session7b.dir/build

CMakeFiles/session7b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\session7b.dir\cmake_clean.cmake
.PHONY : CMakeFiles/session7b.dir/clean

CMakeFiles/session7b.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\cmake-build-debug C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\cmake-build-debug C:\Users\maxpo\Desktop\ec1\ec1-TheMecz\session7b\cmake-build-debug\CMakeFiles\session7b.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/session7b.dir/depend

