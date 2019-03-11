#include <iostream>
#include <assert.h>
#include "selection_sort.hpp"
#include "user_input_array.hpp"
#include "catch_error.hpp"
#include "choice_ascending_descending.hpp"

//run function when user inputs array's size and elements
void get_user_input_and_run()
{
    int* array;
    int num;
    std::cout << "Enter natural number of elements. " << std::endl;
    num = catch_error();
    while (0 == num) {
        std::cout << "Incorrect input, try again:" << std::endl;
        num = catch_error();
    }
    if (num < 0) {
        std::cout << "You input negativ number, the program will not take minus. " << std::endl; 
        num *= -1;
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
