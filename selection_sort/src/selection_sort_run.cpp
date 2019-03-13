#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <sstream>
#include "selection_sort.hpp"
#include "selection_sort_run.hpp"

//run function when program generates array
void generate_random_data_and_run()
{
    int array_size = 15;
    int gen_array[array_size] = {0};
    srand(time(NULL));
    for (int i = 0; i < array_size; ++i) {
        int num = rand() % 200;
        gen_array[i] = num;
    } 
    std::cout << "Array before sorting:" << std::endl;  
    print_array(gen_array, array_size);
    ascending_descending(gen_array, array_size);
    print_array(gen_array, array_size);
}
//run function when user inputs array's size and elements
void get_user_input_and_run()
{
    int* array;
    int num = 0;
    std::cout << "Enter natural number of elements." << std::endl;
    num = catch_error();
    while (num <= 0) {
        std::cout << "Incorrect input, try again:" << std::endl;
        num = catch_error();
    }
    array = new int[num];
    assert(array);
    for (int i = 0; i < num; ++i) {
        std::cout << "N" << i + 1 << ": ";
        array[i] = catch_error();
    }
    ascending_descending(array, num);
    print_array(array, num);
    delete[] array;
}
//user choices sort in ascending or descending order
void ascending_descending(int* array, const int& array_size)
{
    int choice = 0;
    std::cout << "Input 1 to sort in ascending order.\n";
    std::cout << "Input 2 to sort in descending order.\n";
    std::cout << "Input 3 to sort in two orders.\n";
    choice = catch_error();
    while (choice != 1 && choice != 2 && choice != 3) {
        std::cout << "Incorrect input." << std::endl;
        choice = catch_error();
    }
    switch (choice)
    {
        case 1: std::cout << "Array after sorting in ascending order:\n ";
                selection_sort_ascending_descending(array, array_size, 1);
                break;
        case 2: std::cout << "Array after sorting in descending order:\n ";
                selection_sort_ascending_descending(array, array_size, 2);
                break;
        case 3: std::cout << "Array after sorting in ascending order:\n";
                selection_sort_ascending_descending(array, array_size, 1);
                print_array(array, array_size);
                std::cout << "Array after sorting in descending order:\n";
                selection_sort_ascending_descending(array, array_size, 2);
                break;
    }
}
//cycle for catch error
void cycle_for_catch_error(std::string input_number, const int& start, bool& fl)
{
    for (int i = start; i < input_number.size(); ++i) {
        if (input_number[i] < '0' || input_number[i] > '9') {
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
    do {
        getline(std::cin, input_number);
        fl = false;
        while (0 == input_number.size()) {
            std::cout << "Empty input, try again:" << std::endl;
            getline(std::cin, input_number);
            fl = false;
        }
        if (input_number[0] == '-' && input_number.size() > 1) {
            cycle_for_catch_error(input_number, 1, fl);
        } else {
            cycle_for_catch_error(input_number, 0, fl);
        }
    } while (fl == true);
    std::stringstream str_int(input_number);
    str_int >> result;
    return result;
}

