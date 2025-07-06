cmake_minimum_required(VERSION 3.31)
project(experiment)

set(CMAKE_CXX_STANDARD 17)
# 主程序
add_executable(experiment main.cpp)

# 2_1 下两个不同的实验
add_executable(experiment_2_1_var 2_1/experimentsVar.cpp)
add_executable(experiment_2_1_if 2_1/expIf.cpp)