#规定cmake的最低版本要求
cmake_minimum_required (VERSION 3.10)
#设置c++编译器
set(CMAKE_CXX_COMPILER "g++")
#项目的名称，可以和文件夹名称（HELLO）不同
project(Cmake_print)
# 设置代码构建级别为 Debug 方式
set(CMAKE_BUILD_TYPE Debug)
#添加头文件的搜索路径
include_directories(${PROJECT_SOURCE_DIR}/header)

#将源文件列表写在变量SrcFiles中（该方法将src目录中所有的源文件都加入进行编译）
#aux_source_directory(./src SrcFiles)

#设置可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)
#设置可执行文件的名称，make之后bin目录下出现myprint.exe， 对应上面的aux_source_directory语句
#add_executable(myprint ${SrcFiles})

#指定src文件中目标源文件的编译方法
set(SRC_LIST
        ./src/Class_learn3.cpp
         )

add_executable(myprint ${SRC_LIST})

#调试时命中断点
add_definitions("-Wall -g")

