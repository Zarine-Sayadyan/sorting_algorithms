#include <iostream>
#include "bubble_sort.hpp"

//swap two numbers
void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//bubble sorting in ascending order
void bubble_sort_ascending(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}
//bubble sorting in descendng order
void bubble_sort_descending(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (array[j] < array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
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

