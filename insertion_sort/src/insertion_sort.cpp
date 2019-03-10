#include <iostream>
#include "insertion_sort.hpp"

//insertion sort
void insertion_sort(int* array, int size)
{
    for (int i = 1; i < size; ++i) {
        int temp = array[i];
        int j = i - 1;
        while ((temp < array[j]) && j >= 0) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}
//print array
void print_array(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << "  ";
    }
    std::cout << std::endl << std::endl;
}

