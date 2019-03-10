#include <iostream>
#include <assert.h>
#include "merge_sort.hpp"
#include "user_input_array.hpp"
#include "catch_error.hpp"
#include "choice_ascending_descending.hpp"

//run function when user inputs siza array and array
void run2()
{
    int* array;
    int num;
    std::cout << "Enter natural number of elements. " << std::endl;
    num = catch_error();
    if (num < 0) {
        std::cout << "You input negativ number, the program will not take minus. " << std::endl; 
        num *= -1;
    }
    array = new int[num];
    int* temp_array = new int[num];
    assert(array);
    for (int i = 0; i < num; ++i) {
        std::cout << "N" << i + 1 << ": ";
        array[i] = catch_error();
    }
    ascending_descending(array, temp_array, 0, num - 1);
    print_array(array, num);
    delete[] array;
    delete[] temp_array;
}
