#include <iostream>
#include "insertion_sort.hpp"

//insertion sorting in ascending order
void insertion_sort_ascending(int* array, int size)
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
//insertion sorting in descending order
void insertion_sort_descending(int* array, int size)
{
    for (int i = 1; i < size; ++i) {
        int temp = array[i];
        int j = i - 1;
        while ((temp > array[j]) && j >= 0) {
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

