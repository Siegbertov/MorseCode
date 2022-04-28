#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>


std::vector<std::string> codes = {
                    "DIT DAH",
                    "DAH DIT DIT DIT",
                    "DAH DIT DAH DIT",
                    "DAH DIT DIT",
                    "DIT",
                    "DIT DIT DAH DIT",
                    "DAH DAH DIT",
                    "DIT DIT DIT DIT",
                    "DIT DIT",
                    "DIT DAH DAH DAH",
                    "DAH DIT DAH",
                    "DIT DAH DIT DIT",
                    "DAH DAH",
                    "DAH DIT",
                    "DAH DAH DAH",
                    "DIT DAH DAH DIT",
                    "DAH DAH DIT DAH",
                    "DIT DAH DIT",
                    "DIT DIT DIT",
                    "DAH",
                    "DIT DIT DAH",
                    "DIT DIT DIT DAH",
                    "DIT DAH DAH",
                    "DAH DIT DIT DAH",
                    "DAH DIT DAH DAH",
                    "DAH DAH DIT DIT",

                    "DIT DAH DAH DAH DAH",
                    "DIT DIT DAH DAH DAH",
                    "DIT DIT DIT DAH DAH",
                    "DIT DIT DIT DIT DAH",
                    "DIT DIT DIT DIT DIT",
                    "DAH DIT DIT DIT DIT",
                    "DAH DAH DIT DIT DIT",
                    "DAH DAH DAH DIT DIT",
                    "DAH DAH DAH DAH DIT",
                    "DAH DAH DAH DAH DAH"
};

std::vector<std::string> symbols = {
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"

};

int getSize(const std::string& str)
{
    int size = 0;
    for (auto el : str)
    {
        size++;
    }
    return size;
}

int main()
{
    // Creating map container
    std::map<std::string, std::string> myMap;
    
    for (int i = 0; i < codes.size(); i++)
    {
        myMap.emplace(symbols[i], codes[i]);
    }


    // Getting text from USER
    std::string text;
    std::cout << "Enter your text: ";
    std::cin >> text;


    // Processing text
    for (auto el : text)
    {
        std::string s(1, (char)toupper(el));

        auto it = myMap.find(s);
        std::cout << it->second << "   ";
        
    }

    
	return 0;
}
