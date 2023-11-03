cmake_minimum_required(VERSION 3.25)
project(AskOOP)

set(CMAKE_CXX_STANDARD 20)

add_executable(AskOOP main.cpp Model/User.cpp Model/User.h Model/Question.cpp Model/Question.h Model/Thread.cpp Model/Thread.h Model/Answer.cpp Model/Answer.h)
