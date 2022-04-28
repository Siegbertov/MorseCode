cmake_minimum_required(VERSION 3.13)

project(MorseCode)

add_executable(MorseCode
	src/main.cpp
)

include_directories(external/rapidjson/include)
