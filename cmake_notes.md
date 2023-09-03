### introduction for CMAKE
---
构建环境太恶心，CMAKE可以进行环境的整理和汇总，在使用不同库时都可以有很好的效果，同时QT和VScode也支持CMAKE的环境构建，所以学习这个是很有必要的





---
### CMake Tutorial
1. 一般来说C++ Project包括include头文件;lib库文件;build构建项目目录;src源代码文件夹;bine二进制程序文件夹;CMakeLists.txt编译环境设置，首先需要编写CMakeLists.txt来进行环境的基本构建
2. 常用CMAKE代码：
   1. `cmake .. && make #在build目录下使用，用于生成可执行二进制文件`
   2. `cmake_minimum_required(VERSION 3.16) #cmake版本设置`
   3. `PROJECT(project) #工程名设置`
   4. `INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include) #设定头文件目录`
   5. `SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) #设定可执行文件放置的目录`
   6. `LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib) #设定第三方库目录`
   7. 