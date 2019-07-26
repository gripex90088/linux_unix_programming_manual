# [ CMake mim version ]
cmake_minimum_required (VERSION 3.2)
set(HOMEPATH /home/xuxing/projects/cpp_example/linux_unix_programming_manual)

# [ Project information ] 
project (curreacy_io)

# [ find directories all source file and preservation to DIR_SRCS ] 
 #aux_source_directory(. DIR_SRCS)
 #add_executable(curreacy_io ${DIR_SRCS})

# [ Add son directories ]
# add_subdirectory(path)

# [ include directories ]
include_directories("${HOMEPATH}/lib/")

# add_definitions(-std=c++11)

# [ Specify a build target ]
add_executable(curreacy_io main.c ${HOMEPATH}/lib/currency_IO_4-1.c ${HOMEPATH}/lib/error_functions.c  ${HOMEPATH}/lib/copy.c)

# [ Add link library ] 
# target_link_libraries(curreacy_io lib_name)


