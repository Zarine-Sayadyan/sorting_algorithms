#include <iostream>
#include "merge_sort.hpp"

//merge sorting in ascending order
void merge_sort_ascending(int* array, int* temp_array, int low, int high)
{
    int mid = 0;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort_ascending(array, temp_array, low, mid);
        merge_sort_ascending(array, temp_array, mid + 1, high);
        merge_ascending(array, temp_array, low, mid, high);
    }
}
//merges two subarrays of array 
void merge_ascending(int* array, int* temp_array, int low, int mid, int high)
{
    int h = low;
    int i = low;
    int j = mid + 1;
    int k = 0;
    while ((h <= mid) && (j <= high)) {
        if (array[h] <= array[j]) {
           temp_array[i] = array[h];
           ++h; 
        } else {
           temp_array[i] = array[j]; 
           ++j;
        }
        ++i;
    }
    if (h > mid) {
        for(k = j; k <= high; ++k) {
            temp_array[i] = array[k];
            ++i;
        }
    } else {
        for (k = h; k <= mid; ++k) {
            temp_array[i] = array[k];
            ++i;
        }
    }
    for (k = low; k <= high; ++k) {
        array[k] = temp_array[k];
    }
}
//merge sorting in descending order
void merge_sort_descending(int* array, int* temp_array, int low, int high)
{
    int mid = 0;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort_descending(array, temp_array, low, mid);
        merge_sort_descending(array, temp_array, mid + 1, high);
        merge_descending(array, temp_array, low, mid, high);
    }
}
//merges two subarrays of array
void merge_descending(int* array, int* temp_array, int low, int mid, int high)
{
    int h = low;
    int i = low;
    int j = mid + 1;
    int k = 0;
    while ((h <= mid) && (j <= high)) {
        if (array[h] >= array[j]) {
           temp_array[i] = array[h];
           ++h; 
        } else {
           temp_array[i] = array[j]; 
           ++j;
        }
        ++i;
    }
    if (h > mid) {
        for(k = j; k <= high; ++k) {
            temp_array[i] = array[k];
            ++i;
        }
    } else {
        for (k = h; k <= mid; ++k) {
            temp_array[i] = array[k];
            ++i;
        }
    }
    for (k = low; k <= high; ++k) {
        array[k] = temp_array[k];
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

