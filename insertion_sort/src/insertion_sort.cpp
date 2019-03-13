#include <iostream>
#include "insertion_sort.hpp"

//insertion sort in ascending and descending orders
void insertion_sort_ascending_descending(int* array, const int& size, const int& asc_desc)
{
    for (int i = 1; i < size; ++i) {
        int temp = array[i];
        int j = i - 1;
        if (1 == asc_desc) {
            while ((temp < array[j]) && j >= 0) {
                array[j + 1] = array[j];
                j = j - 1;
            }
        } else if (2 == asc_desc) {
            while ((temp > array[j]) && j >= 0) {
                array[j + 1] = array[j];
                j = j - 1;
            }
        }
        array[j + 1] = temp;
    }
}
//print array
void print_array(int* array, const int& size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << "  ";
    }
    std::cout << std::endl << std::endl;
}

