#include <iostream>
#include "quick_sort.hpp"
#include "catch_error.hpp"

//user choices sort in ascending or descending order
void ascending_descending(int* array, int left, int right)
{
    int choice = 0;
    bool b = false;
    std::cout << "Input number 1 to sorting in ascending order.\n";
    std::cout << "Input number 2 to sorting in descendng order.\n";
    choice = catch_error();
    while (b == false) {
        switch (choice)
        {
            case 1: std::cout << "Array after sorting in ascending order:\n ";
                    quick_sort_ascending(array, left, right);
                    b = true;
                    break;
            case 2: std::cout << "Array after sorting in descending order:\n ";
                    quick_sort_descending(array, left, right);
                    b = true;
                    break;
            default : b = false;
                      std::cout << "Incorrect input." << std::endl;
                      choice = catch_error();
                      break;
        }
    }
}

