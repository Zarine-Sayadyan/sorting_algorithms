#include <iostream>
#include "bubble_sort.hpp"

//swap two numbers
void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//bubble sorting in ascending and descending orders
void bubble_sort_ascending_descending(int* array, const int& size, const int& asc_desc)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (1 == asc_desc) {
                if (array[j] > array[j + 1]) {
                    swap(&array[j], &array[j + 1]);
                }
            } else if (2 == asc_desc) {
                if (array[j] < array[j + 1]) {
                    swap(&array[j], &array[j + 1]);
                }
            }
        }
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

