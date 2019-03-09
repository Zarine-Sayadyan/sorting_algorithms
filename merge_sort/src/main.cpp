#include <iostream>
#include "program_gen_array.hpp"
#include "user_input_array.hpp"
#include "catch_error.hpp"

int main()
{
    int choice = 0;
    bool b = false;
    std::cout << "\n--------------------It's merge sort program--------------------\n" << std::endl;
    std::cout << "Input number 1 and the program generate a random array.\n";
    std::cout << "Input number 2 and you enter the size of array and array members.\n";
    choice = catch_error();
    while(b == false) {
        switch (choice)
        {
            case 1: run1();
                    b = true;
                    break;
            case 2: run2();
                    b = true;
                    break;
            default : b = false;
                      std::cout << "Incorrect input." << std::endl;
                      choice = catch_error();
                      break;
       }
    }    
    return 0;
}

