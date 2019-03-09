#include <iostream>
#include <assert.h>
#include "quick_sort.hpp"
#include "user_input_array.hpp"
#include "catch_error.hpp"

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
    assert(array);
    for (int i = 0; i < num; ++i) {
        std::cout << "N" << i + 1 << ": ";
        array[i] = catch_error();
    }
    quick_sort(array, 0, num - 1);
    std::cout << "\nAfter sorted the list will be " << std::endl;
    print_array(array, num);
    delete[] array;
}
