#include <iostream>
#include "merge_sort.hpp"

//merge sort in ascending and descending orders
void merge_sort_ascending_descending(int* array, int* temp_array, const int& low, const int& high, const int& asc_desc)
{
    int mid = 0;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort_ascending_descending(array, temp_array, low, mid, asc_desc);
        merge_sort_ascending_descending(array, temp_array, mid + 1, high, asc_desc);
        merge_ascending_descending(array, temp_array, low, mid, high, asc_desc);
    }
}
//merges two subarrays of array 
void merge_ascending_descending(int* array, int* temp_array, const int& low, const int& mid, const int& high, const int& asc_desc)
{
    int h = low;
    int i = low;
    int j = mid + 1;
    int k = 0;
    while ((h <= mid) && (j <= high)) {
        bool b = true;
        if (1 == asc_desc) {
            b = (array[h] <= array[j]);
        } else if (2 == asc_desc) {
            b = (array[h] >= array[j]);
        }
        if (b) {
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
void print_array(int* array, const int& size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << "  ";
    }
    std::cout << std::endl << std::endl;
}

