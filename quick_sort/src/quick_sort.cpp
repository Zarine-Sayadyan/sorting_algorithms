#include <iostream>
#include "quick_sort.hpp"

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//quick sort in ascending and descending orders
void quick_sort_ascending_descending(int* array, const int& left, const int& right, const int& asc_desc)
{
    int i = left;
    int j = right;
    int temp = 0;
    int mid = (left + right) / 2;
    int pivot = array[mid];
    while (i < j) {
        if (1 == asc_desc) {
            while (array[i] < pivot) {
                ++i;
            }
            while (array[j] > pivot) {
                --j;
            }
        } else if (2 == asc_desc) {
            while (array[i] > pivot) {
                ++i;
            }
            while (array[j] < pivot) {
                --j;
            }
        }
        if (i <= j) {
            swap(&array[i], &array[j]);
            ++i;
            --j;
        }
    }
    if (left < j) {
        quick_sort_ascending_descending(array, left, j, asc_desc);
    }
    if (i < right) {
        quick_sort_ascending_descending(array, i, right, asc_desc);
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

