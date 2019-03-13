#include <iostream>
#include "selection_sort.hpp"

//swap two numbers
void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//selection sort in ascending and descending orders
void selection_sort_ascending_descending(int* array, const int& size, const int& asc_desc)
{
    for (int i = 0; i < size - 1; ++i) {
        int min_max = array[i];
        int loc = i;
        bool b = true;
        for (int j = i + 1; j < size; ++j) {
            if (1 == asc_desc) {
                b =  min_max > array[j];
            } else if (2 == asc_desc) {
                b =  min_max < array[j];
            }
            if(b) {
                min_max = array[j];
                loc = j;
            }
        }
        swap(&array[i], &array[loc]);
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

