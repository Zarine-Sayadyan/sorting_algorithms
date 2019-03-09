#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "bubble_sort.hpp"
#include "program_gen_array.hpp"

void run1()
{
    int array_size = 15;
    int gen_array[array_size] = {0};
    srand(time(NULL));
  
    for (int i = 0; i < array_size; ++i) {
       int num = rand() % 200;
       gen_array[i] = num;
    } 
    std::cout << "Array before sorting: " << std::endl;  
    print_array(gen_array, array_size);
    std::cout << "Array after sorting: " << std::endl;  
    bubble_sort(gen_array, array_size);
    print_array(gen_array, array_size);
}
