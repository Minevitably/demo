# 设置cmake版本为3.26
cmake_minimum_required(VERSION 3.26)

# 设置项目名称为queue_static，项目语言为C语言
project(queue_static C)


#[[
    宏
    ${PROJECT_NAME} queue_static
    ${PROJECT_SOURCE_DIR} D:\MIY\ClionProjects\demo\queue\static

]]

# 设置语言标准为C11
set(CMAKE_C_STANDARD 11)

#[[
    源文件
    这段代码创建了一个库，库的名称为 ${PROJECT_NAME}（即 queue_static），
    并将 queue.c 作为源文件添加到该库中。CMake 将会编译这些源文件并生成一个库文件。
]]
add_library(${PROJECT_NAME}
        library/queue.c
)

#[[
    别名
    这行代码创建了一个别名库 queue_lib，它指向之前定义的库 ${PROJECT_NAME}（即
    queue_static）。
    这样，在其他地方引用 queue_lib 时，会自动指向 queue_static 库，方便管理。
]]
add_library(queue_lib ALIAS ${PROJECT_NAME})

#[[
    头文件
    此行代码为库 ${PROJECT_NAME}（即 queue_static）指定了一个公共的包含目录。
    PUBLIC 表示这个包含目录不仅对 queue_static 自身可见，
    而且对依赖于 queue_static 的其他目标也可见。
    ${PROJECT_SOURCE_DIR}/include 是包含目录的路径，通常用于存放头文件。
]]
target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/include
)

#MESSAGE(STATUS "This is SOURCE dir "${PROJECT_SOURCE_DIR})