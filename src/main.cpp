#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <windows.h>
#include "../res/Translator.h"

#include <chrono>
#include <thread>




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
                    "DAH DAH DAH DAH DAH",
                    "SPACE"
};

std::vector<std::string> symbols = {
    "A", "B", "C", 
    "D", "E", "F", 
    "G", "H", "I", 
    "J", "K", "L", 
    "M", "N", "O", 
    "P", "Q", "R", 
    "S", "T", "U", 
    "V", "W", "X", 
    "Y", "Z", "1", 
    "2", "3", "4", 
    "5", "6", "7", 
    "8", "9", "0",
    " "

};

int main()
{
  
    Translator translator;

    translator.init();

    translator.process();
  

    
	return 0;
}
