#include <iostream>
#include "Array.hpp"


#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // to see the content
    // for (int i = 60; i < 80; i++)
    // {
    //     std::cout << numbers[i] << " , ";
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    while (1)
        ;
    return 0;
}

// int main()
// {
//     try
//     {
//         Array<int> nums(10);
//         nums[5] = 33;
//         std::cout << nums[14] << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "EXCEPTION : " <<  e.what() << '\n';
//     }
// }