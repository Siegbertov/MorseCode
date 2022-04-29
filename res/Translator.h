#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "rapidjson/document.h"
#include <rapidjson/istreamwrapper.h>
#include <fstream>

#include "Player.h"

class Translator
{
public:
	Translator();
	~Translator();

	void init();

	void createSchema();

	void showMap() const;

	void process() const;

	void showText() const;

private:

	std::string textToParse;

	std::vector<std::string> m_symbols;
	
	std::vector<std::string> m_codes;

	std::map<std::string, std::string> m_myMap;

	Player my_player;

};