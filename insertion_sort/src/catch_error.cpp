#include <iostream>
#include <sstream>
#include "catch_error.hpp"

//cycle for catch error
void cycle_for_catch_error(std::string input_number, int start, bool& fl)
{
    for (int i = start; i < input_number.size(); ++i) {
        if(input_number[i] < '0' || input_number[i] > '9') {
            std::cout << "Incorrect input, try again." << std::endl;
            fl = true;
            break;
        }
    }
}
//catch input error
int catch_error() 
{
    bool fl = false;
    int result = 0;
    std::string input_number("");
    do{
        getline(std::cin, input_number);
        fl = false;
        while (0 == input_number.size()) {
            std::cout << "Empty input, try again:" << std::endl;
            getline(std::cin, input_number);
            fl = false;
        }
        if (input_number[0] == '-') {
            cycle_for_catch_error(input_number, 1, fl);
        } else {
            cycle_for_catch_error(input_number, 0, fl);
        }
    } while(fl == true);
    std::stringstream str_int(input_number);
    str_int >> result;
    return result;
}
