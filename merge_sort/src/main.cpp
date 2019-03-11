#include <iostream>
#include "program_gen_array.hpp"
#include "user_input_array.hpp"
#include "catch_error.hpp"

int main()
{
    int choice = 0;
    std::cout << "\n--------------------It's merge sort program--------------------\n" << std::endl;
    std::cout << "Input 1 and the program will generate random array.\n";
    std::cout << "Input 2 and then enter the size and elements of array.\n";
    choice = catch_error();
    while(choice != 1 && choice != 2) {
        std::cout << "Incorrect input, try again." << std::endl;
        choice = catch_error();
    }
    switch (choice)
    {
        case 1: generate_random_data_and_run();
                break;
        case 2: get_user_input_and_run();
                break;
    }    
    return 0;
}

