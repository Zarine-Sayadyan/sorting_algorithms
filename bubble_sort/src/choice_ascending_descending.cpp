#include <iostream>
#include "bubble_sort.hpp"
#include "catch_error.hpp"

//user choices sort in ascending or descending order
void ascending_descending(int* array, int array_size)
{
    int choice = 0;
    std::cout << "Input 1 to sort in ascending order.\n";
    std::cout << "Input 2 to sort in descending order.\n";
    std::cout << "Input 3 to sort in two orders.\n";
    choice = catch_error();
    while (choice != 1 && choice != 2 && choice != 3) {
        std::cout << "Incorrect input." << std::endl;
        choice = catch_error();
    }
    switch (choice)
    {
        case 1: std::cout << "Array after sorting in ascending order:\n";
                bubble_sort_ascending(array, array_size);
                break;
        case 2: std::cout << "Array after sorting in descending order:\n";
                bubble_sort_descending(array, array_size);
                break;
        case 3: std::cout << "Array after sorting in ascending order:\n";
                bubble_sort_ascending(array, array_size);
                print_array(array, array_size);
                std::cout << "Array after sorting in descending order:\n";
                bubble_sort_descending(array, array_size);
                break;
    }
}

