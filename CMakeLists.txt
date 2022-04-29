cmake_minimum_required(VERSION 3.13)

project(MorseCode)

add_executable(MorseCode
	src/main.cpp
	
	res/data/codes.json
	
	res/sounds/DAH.wav
	res/sounds/DIT.wav

	res/Translator.cpp
	res/Translator.h
	res/Player.cpp
	res/Player.h



)


include_directories(external/rapidjson/include)
