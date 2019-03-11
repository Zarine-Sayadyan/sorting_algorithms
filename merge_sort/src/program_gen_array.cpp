#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "merge_sort.hpp"
#include "program_gen_array.hpp"
#include "choice_ascending_descending.hpp"

//run function when program generates array
void generate_random_data_and_run()
{
    int array_size = 15;
    int gen_array[array_size] = {0};
    int gen_temp_array[array_size] = {0};
    srand(time(NULL));
    for (int i = 0; i < array_size; ++i) {
       int num = rand() % 200;
       gen_array[i] = num;
    } 
    std::cout << "Array before sorting: " << std::endl;  
    print_array(gen_array, array_size);
    ascending_descending(gen_array, gen_temp_array, 0, array_size - 1);
    print_array(gen_array, array_size);
}
