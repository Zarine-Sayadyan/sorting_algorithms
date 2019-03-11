#include <iostream>
#include "quick_sort.hpp"
#include "catch_error.hpp"

//user choices sort in ascending or descending order
void ascending_descending(int* array, int left, int right)
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
        case 1: std::cout << "Array after sorting in ascending order:\n ";
                quick_sort_ascending(array, left, right);
                break;
        case 2: std::cout << "Array after sorting in descending order:\n ";
                quick_sort_descending(array, left, right);
                break;
        case 3: std::cout << "Array after sorting in ascending order:\n";
                quick_sort_ascending(array, left, right);
                print_array(array, right + 1);
                std::cout << "Array after sorting in descending order:\n";
                quick_sort_descending(array, left, right);
                break;
    }
}

