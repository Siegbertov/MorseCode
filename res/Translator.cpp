#include "Translator.h"




Translator::Translator()
{
    createSchema();
}

Translator::~Translator()
{

}

void Translator::createSchema()
{
    std::ifstream ifs("../res/data/codes.json");
    rapidjson::IStreamWrapper isw(ifs);
    rapidjson::Document document;
    document.ParseStream(isw);

    const rapidjson::Value& a = document["symbols"];

    for (auto itr = a.Begin(); itr != a.End(); ++itr)
    {
        m_symbols.emplace_back(itr->GetString());
    }

    const rapidjson::Value& b = document["codes"];

    for (auto itr = b.Begin(); itr != b.End(); ++itr)
    {
        m_codes.emplace_back(itr->GetString());
    }

    for (int i = 0; i < m_symbols.size(); i++)
    {
        m_myMap.emplace(m_symbols[i], m_codes[i]);
    }
}

void Translator::showMap() const
{
    for (const auto& itr : m_myMap)
    {
        std::cout << itr.first << "->" << itr.second << std::endl;
    }
}

void Translator::init()
{
    std::cout << "Enter your text: ";
    std::getline(std::cin, textToParse);
}

void Translator::process() const
{
    for (auto el : textToParse)
    {
        std::string s(1, (char)toupper(el));
        auto it = m_myMap.find(s);
        std::string str = it->second;
       
        if (str == "SPACE")
        {
            my_player.pause(1500);
        }
        else
        {
            my_player.playLetter(str);

        }
        
    }
}

void Translator::showText() const
{
    std::cout << textToParse << std::endl;
}






