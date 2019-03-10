#include <iostream>
#include "selection_sort.hpp"

//swap two numbers
void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//selection sorting in ascending order
void selection_sort_ascending(int* array, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        int min = array[i];
        int loc = i;
        for (int j = i + 1; j < size; ++j) {
            if( min > array[j]) {
                min = array[j];
                loc = j;
            }
        }
        swap(&array[i], &array[loc]);
    }
}
//selection sorting in descending order
void selection_sort_descending(int* array, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        int max = array[i];
        int loc = i;
        for (int j = i + 1; j < size; ++j) {
            if( max < array[j]) {
                max = array[j];
                loc = j;
            }
        }
        swap(&array[i], &array[loc]);
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

