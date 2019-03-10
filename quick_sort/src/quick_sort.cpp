#include <iostream>
#include "quick_sort.hpp"

//quick sorting in ascending order
void quick_sort_ascending(int* array, int left, int right)
{
    int i = left;
    int j = right;
    int temp = 0;
    int mid = (left + right) / 2;
    int pivot = array[mid];
    while (i < j) {
        while (array[i] < pivot) {
            ++i;
        }
        while (array[j] > pivot) {
            --j;
        }
        if (i <= j) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            ++i;
            --j;
        }
    }
    if (left < j) {
        quick_sort_ascending(array, left, j);
    }
    if (i < right) {
        quick_sort_ascending(array, i, right);
    }
}
//quick sorting in descending order
void quick_sort_descending(int* array, int left, int right)
{
    int i = left;
    int j = right;
    int temp = 0;
    int mid = (left + right) / 2;
    int pivot = array[mid];
    while (i < j) {
        while (array[i] > pivot) {
            ++i;
        }
        while (array[j] < pivot) {
            --j;
        }
        if (i <= j) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            ++i;
            --j;
        }
    }
    if (left < j) {
        quick_sort_descending(array, left, j);
    }
    if (i < right) {
        quick_sort_descending(array, i, right);
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

